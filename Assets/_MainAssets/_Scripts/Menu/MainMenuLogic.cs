using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Audio;
using DG.Tweening;
public class MainMenuLogic : MonoBehaviour
{
    public CanvasGroup MenuCanvasGroup;
    public CanvasGroup loadingCanvasGroup;
    public Slider slider;
    public TextMeshProUGUI textProgress;
    public AudioMixer audioMix;
    string currentLoadedScene;
    public AudioSource src;
    public AudioSource Main;
    public AudioClip MainBG;
    public AudioClip StageBG;
    public AudioClip beep;
    public Transform MainMenuCanvas;
    public Transform LoadingScreen;
    public Transform WorldTourHomePage;
    public Transform HomeSettings_Btn;
    public Transform BackHome_Btn;
    private View worldmapviewSettings;
    public View LastCanvas;
    private GameObject WorldMap;
    public View view;
    public TextMeshProUGUI starsText;
    public Button[] waypoints;

    public void Start()
    {
        WorldMap = GameObject.Find("World Tour Home Page Canvas");
        worldmapviewSettings = WorldMap.GetComponent<View>();
        //PlayerPrefs.DeleteAll();
        UpdateStarsUI();
    }

    IEnumerator FadeGame(float fadeVal, string loadSceneString)
    {
        slider.value = 0;
        textProgress.text = "Loading Asset Data... ";
        yield return new WaitForSeconds(.2f);
        CanvasFader(fadeVal, MenuCanvasGroup);
        yield return new WaitForSeconds(1f);
        CanvasFader(1, loadingCanvasGroup);
        yield return new WaitForSeconds(2f);
        //load game async
        StartCoroutine(LoadGameAsync(false, loadSceneString));

    }
    void CanvasFader(float val, CanvasGroup canvas)
    {
        canvas.GetComponent<CanvasGroup>().DOFade(val, .5f);
    }
    public void ButtonSound()
    {
        src.PlayOneShot(beep);
    }
    IEnumerator LoadGameAsync(bool unload, string loadSceneString)
    {
        slider.value = 0;
        textProgress.text = "Loading Asset Data... ";
        AsyncOperation operation;
        if (!unload)
        {
            operation = SceneManager.LoadSceneAsync(loadSceneString, LoadSceneMode.Additive);
        }
        else
        {

            CanvasFader(1, loadingCanvasGroup);
            yield return new WaitForSeconds(1.2f);
            operation = SceneManager.UnloadSceneAsync(loadSceneString);
        }

        /*        yield return new WaitForSeconds(2);
                CanvasFader(1, loadingCanvasGroup);*/

        while (!operation.isDone)
        {
            float progress = Mathf.Clamp01(operation.progress / .9f);
            slider.value = progress;
            textProgress.text = ProgressText(progress);

            yield return null;
        }

        CanvasFader(0, loadingCanvasGroup);
        view.Hide();
        if (unload) 
        {
            yield return new WaitForSeconds(1f);
            CanvasFader(1, MenuCanvasGroup);
        }
    }

    string ProgressText(float progress)
    {
        string Details = "343";
        progress = progress * 100;

        if (progress >= 0 && progress <= 20f)
        {
            Details = "Loading Asset Data... ";
        }
        else if (progress >= 21 && progress <= 40f)
        {
            Details = "Organgs almost done in dressing room... ";
        }
        else if (progress >= 41 && progress <= 60f)
        {
            Details = "Just wearing the slippers... ";
        }
        else if (progress >= 61 && progress <= 80f)
        {
            Details = "Backround ready... ";
        }
        else if (progress >= 81 && progress <= 100f)
        {
            Details = "Dance Rehearsal done... ";
        }
        else
        {
            Details = "All Set!... ";

        }

        return Details + progress.ToString() + "%";
    }

    #region Pulbic Methods
    public void PlayGame( string loadStringScene)
    {
        view.Show();
        UpdateStarsUI();
        StartCoroutine(FadeGame(0, loadStringScene));
        currentLoadedScene = loadStringScene;
        HomeSettings_Btn.gameObject.SetActive(false);
        BackHome_Btn.gameObject.SetActive(false);
    }

    public void LoadMainMenu()
    {
        view.Show();
        UpdateStarsUI();
        Invoke("worldMapShow", 0.5f);
        StartCoroutine(LoadGameAsync(true, currentLoadedScene));
        HomeSettings_Btn.gameObject.SetActive(true);
        BackHome_Btn.gameObject.SetActive(true);
    }

    public void UpdateStarsUI()
    {
        int sum = 0;

        for (int i = 1; i < 17; i++)
        {
            sum += PlayerPrefs.GetInt("Lv" + i.ToString());
            // Debug.Log(sum);
        }

        starsText.text = sum + " / " + 48;

        if (sum >= 10)
        {
            waypoints[0].interactable = true;
            waypoints[0].transform.GetChild(0).gameObject.SetActive(false);
            if (sum >= 20)
            {
                waypoints[1].interactable = true;
                waypoints[1].transform.GetChild(0).gameObject.SetActive(false);
                if (sum >= 30)
                {
                    waypoints[2].interactable = true;
                    waypoints[2].transform.GetChild(0).gameObject.SetActive(false);
                }
            }
        }
    }

    public void worldMapShow()
    {
        worldmapviewSettings.Show();
        LastCanvas.Show();
    }

    public void Quit()
    {
        Application.Quit();
    }

    public void MuteVolume(bool mute)
    {
        if(mute)
            audioMix.SetFloat("Master Volume", -80);
        else
            audioMix.SetFloat("Master Volume", 0);
    }
    public void SetMusicVolume(float volume) 
    {
        audioMix.SetFloat("Music Volume", volume);

        if(volume < -49.9f)
        {
            audioMix.SetFloat("Music Volume", -80);
        }

    }

    public void BGMusic()
    {
        if(Main.clip == MainBG)
        {
            Main.clip = StageBG;
            Main.Play();
        }
        else if(Main.clip == StageBG)
        {
            Main.clip = MainBG;
            Main.Play();
        }
    }

    public void SetSfxVolume(float volume)
    {
        audioMix.SetFloat("SFX Volume", volume);

        if (volume < -49.9f)
        {
            audioMix.SetFloat("SFX Volume", -80);
        }
    }
    #endregion


}
