using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using DG.Tweening;

public class MainMenu : MonoBehaviour
{
    // main menu logic
    public Transform mainCanvas;
    public Transform MenuCanvas;
    public Transform loadingCanvas;
    public Transform ingameCanvas;
    public Slider slider;
    public TextMeshProUGUI textProgress;
    public AudioMixer audioMix;
    public GameObject cam;
    private StarSystemUnlocker[] unlocker;
    private string currentLoadedScene;

    private static MainMenu _instance;
    public static MainMenu Instance { get { return _instance; } }

    private void Awake()
    {
        PlayerPrefs.DeleteAll();
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
        }
    }

    private void Start()
    {
        GetAllLevels();
    }

    public void LoadLevel(string placeName)
    {
        StartCoroutine(FadeGame(0, placeName));
    }

    public void NextLevel(string loadStringScene)
    {
        StartCoroutine(FadeGame(0, loadStringScene));
        currentLoadedScene = loadStringScene;
        ingameCanvas.transform.SetParent(mainCanvas, false);
        ingameCanvas.transform.SetSiblingIndex(1);
    }

    public void GetAllLevels()
    {
        unlocker = FindObjectsOfType(typeof(StarSystemUnlocker)) as StarSystemUnlocker[];
    }

    public IEnumerator StarCountUpdate()
    {
        foreach (StarSystemUnlocker obj in unlocker)
        {
            obj.UpdateLevelStatus();
            yield return new WaitForEndOfFrame();
            obj.UpdateLevelImage();
        }
    }

    public IEnumerator FadeGame(float fadeVal, string loadSceneString)
    {
        slider.value = 0;
        cam.SetActive(true);
        mainCanvas.GetComponent<View>().Show();
        loadingCanvas.GetComponent<View>().Show();
        ingameCanvas.GetComponent<View>().Hide();
        textProgress.text = "Loading Asset Data... ";
        yield return new WaitForSeconds(.2f);
        CanvasFader(fadeVal, MenuCanvas);
        yield return new WaitForSeconds(0.5f);
        CanvasFader(1, loadingCanvas);
        yield return new WaitForSeconds(2f);
        //load game async
        StartCoroutine(LoadGameAsync(false, loadSceneString));

    }
    void CanvasFader(float val, Transform canvas)
    {
        canvas.GetComponent<CanvasGroup>().DOFade(val, .5f);
    }
    #region Pulbic Methods
    public IEnumerator LoadGameAsync(bool unload, string loadSceneString)
    {
        slider.value = 0;
        textProgress.text = "Loading Asset Data... ";
        GameObject Canvas = GameObject.Find("GameCanvas");
        AsyncOperation operation;
        if (!unload)
        {
            operation = SceneManager.LoadSceneAsync(loadSceneString, LoadSceneMode.Additive);
        }
        else
        {
            Canvas.GetComponent<View>().Hide();
            mainCanvas.GetComponent<View>().Show();
            ingameCanvas.GetComponent<View>().Show();
            loadingCanvas.GetComponent<View>().Show();
            CanvasFader(1, loadingCanvas);
            yield return new WaitForSeconds(1.2f);
            operation = SceneManager.UnloadSceneAsync(loadSceneString);
            loadingCanvas.GetComponent<View>().Hide();
            ingameCanvas.transform.SetParent(mainCanvas, false);
            ingameCanvas.transform.SetSiblingIndex(1);
            CanvasFader(0, loadingCanvas);
            CanvasFader(1, MenuCanvas);
            cam.SetActive(true);
        }

        while (!operation.isDone)
        {
            float progress = Mathf.Clamp01(operation.progress / .9f);
            slider.value = progress;
            textProgress.text = ProgressText(progress);

            yield return null;
        }
        cam.SetActive(false);
        CanvasFader(0, loadingCanvas);
        mainCanvas.GetComponent<View>().Hide();
        GameObject gameCanvas = GameObject.Find("GameCanvas");
        ingameCanvas.transform.SetParent(gameCanvas.transform, false);
        ingameCanvas.transform.SetSiblingIndex(1);
        ingameCanvas.GetComponent<View>().Show();
        if (unload)
        {
            yield return new WaitForSeconds(1f);
            CanvasFader(1, MenuCanvas);
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

    public void Quit()
    {
        Application.Quit();
    }

    public void MuteVolume(bool mute)
    {
        if (mute)
            audioMix.SetFloat("Master Volume", -80);
        else
            audioMix.SetFloat("Master Volume", 0);
    }
    public void SetMusicVolume(float volume)
    {
        audioMix.SetFloat("Music Volume", volume);

        if (volume < -49.9f)
        {
            audioMix.SetFloat("Music Volume", -80);
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