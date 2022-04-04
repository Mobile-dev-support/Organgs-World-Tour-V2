using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using DG.Tweening;
using System.Linq;

public class MainMenu : MonoBehaviour
{
    [Header("MAIN MENU")]
    public View mainCanvas;
    public View winCanvas;
    public View gameOverCanvas;
    public View statCanvas;
    public View MenuCanvas;
    public View loadingCanvas;
    public View ingameCanvas;
    public View maingameCanvas;
    public View faderCanvas;
    public View coverCanvas;
    public View scroller_canvas;
    public View menu_item_canvas;
    public View dialogCanvas;
    public Slider slider;
    public TextMeshProUGUI textProgress;
    public AudioMixer audioMix;
    public GameObject cam;
    private StarSystemUnlocker[] unlocker;
    private GameObject level;
    private DoTweenFeatures tween;
    private bool isNextLevel;
    [Header("DIALOG CONTAINER")]
    public Image portrait;
    public Image portrait2;
    public TextMeshProUGUI lines;
    public TextMeshProUGUI ActorName;
    public RectTransform choiceList;
    public RectTransform dialog;
    [Header("DIALOGUE EFFECTS")]
    public float duration;
    public float strength;
    public int vibrato;
    public float randomness;
    private static MainMenu _instance;
    public static MainMenu Instance { get { return _instance; } }

    private void Awake()
    {
        //PlayerPrefs.DeleteAll();
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
        level = gameOverCanvas.transform.GetChild(0).Find("level").gameObject;
        tween = level.GetComponent<DoTweenFeatures>();
    }

    private IEnumerator AdditionalLifeRespawn()
    {
        Energy.Instance.AddALife();
        CountdownTimer.Instance.isGameOver = false;
        yield return new WaitForEndOfFrame();
        GameManager.Instance.Respawn();
        statCanvas.Show();
        gameOverCanvas.Hide();
    }

    #region Pulbic Methods

    public void AddLife()
    {
        if (Energy.Instance.currentRewardedAd > 0)
        {
            StartCoroutine(AdditionalLifeRespawn());
        }
        else
        {
            mainMenu();
        }
    }

    public void mainMenu()
    {
        StartCoroutine(LoadGameAsync(true, GameManager.Instance.sceneName));
        StartCoroutine(StarCountUpdate());
        coverCanvas.Show();
    }

    public void GameOverLevel()
    {
        statCanvas.Hide();
        gameOverCanvas.Show();
        tween.OnClick();
    }

    public void LoadLevel(string placeName)
    {
        StartCoroutine(FadeGame(0, placeName));
    }

    public void NextLevel()
    {
        StartCoroutine(FadeGame(0, GameManager.Instance.nextScene));
        StartCoroutine(StarCountUpdate());
        isNextLevel = true;
        coverCanvas.Show();
    }

    public void Restart()
    {
        ingameCanvas.transform.SetParent(MenuCanvas.transform, false);
        ingameCanvas.transform.SetAsLastSibling();
        SceneManager.UnloadSceneAsync(GameManager.Instance.sceneName);
        StartCoroutine(FadeGame(0, GameManager.Instance.sceneName));
        StartCoroutine(StarCountUpdate());
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
        loadingCanvas.Show();
        textProgress.text = "Loading Asset Data... ";
        yield return new WaitForSeconds(.2f);
        CanvasFader(fadeVal, mainCanvas.transform);
        yield return new WaitForSeconds(0.5f);
        CanvasFader(1, loadingCanvas.transform);
        yield return new WaitForSeconds(2f);
        StartCoroutine(LoadGameAsync(false, loadSceneString));
    }

    void CanvasFader(float val, Transform canvas)
    {
        canvas.GetComponent<CanvasGroup>().DOFade(val, .5f);
    }

    public IEnumerator LoadGameAsync(bool unload, string loadSceneString)
    {
        textProgress.text = "Loading Asset Data... ";
        AsyncOperation operation;
        if (!unload)
        {
            if (!isNextLevel)
            {
                operation = SceneManager.LoadSceneAsync(loadSceneString, LoadSceneMode.Additive);
            }
            else
            {
                cam.SetActive(true);
                SceneManager.UnloadSceneAsync(GameManager.Instance.sceneName);
                operation = SceneManager.LoadSceneAsync(loadSceneString, LoadSceneMode.Additive);
                isNextLevel = false;
            }
        }
        else
        {
            yield return new WaitForSeconds(1.2f);
            operation = SceneManager.UnloadSceneAsync(loadSceneString);
            Debug.Log("scene Unlaoded!");
        }

        while (!operation.isDone)
        {
            float progress = Mathf.Clamp01(operation.progress / .9f);
            slider.value = progress;
            textProgress.text = ProgressText(progress);
            yield return null;
        }

        if (operation.isDone && !unload)
        {
            coverCanvas.Hide();
            cam.SetActive(false);
            mainCanvas.Hide();
            gameOverCanvas.Hide();
            winCanvas.Hide();
            scroller_canvas.Hide();
            menu_item_canvas.Hide();
            faderCanvas.Show();
            maingameCanvas.Show();
            CanvasFader(0, loadingCanvas.transform);
            ingameCanvas.transform.SetParent(maingameCanvas.transform, false);
            ingameCanvas.transform.SetSiblingIndex(1);
            yield return new WaitForSeconds(0.5f);
            ingameCanvas.Show();
            loadingCanvas.Hide();
        }
        else if (operation.isDone && unload)
        {
            cam.SetActive(true);
            mainCanvas.Show();
            maingameCanvas.Hide();
            gameOverCanvas.Hide();
            faderCanvas.Hide();
            winCanvas.Hide();
            coverCanvas.Hide();
            CanvasFader(1, loadingCanvas.transform);
            ingameCanvas.transform.SetParent(mainCanvas.transform, false);
            ingameCanvas.transform.SetSiblingIndex(2);
            yield return new WaitForSeconds(1f);
            scroller_canvas.Show();
            menu_item_canvas.Show();
            ingameCanvas.Show();
            CanvasFader(0, loadingCanvas.transform);
            UIFocus.Instance.FocusOnObjectImmediately();
            yield return new WaitForSeconds(1f);
            CanvasFader(1, mainCanvas.transform);
        }
    }

    string ProgressText(float progress)
    {
        string Details;
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