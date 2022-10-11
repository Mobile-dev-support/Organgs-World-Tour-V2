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
    #region variables
    [HideInInspector] public View mainCanvas;
    [HideInInspector] public View winCanvas;
    [HideInInspector] public View gameOverCanvas;
    [HideInInspector] public View statCanvas;
    [HideInInspector] public View MenuCanvas;
    [HideInInspector] public View loadingCanvas;
    [HideInInspector] public View ingameCanvas;
    [HideInInspector] public View maingameCanvas;
    [HideInInspector] public View faderCanvas;
    [HideInInspector] public View coverCanvas;
    [HideInInspector] public View scroller_canvas;
    [HideInInspector] public View menu_item_canvas;
    [HideInInspector] public View dialogCanvas;
    [HideInInspector] public View totem_land;
    [HideInInspector] public View confirrmation_canvas;
    [HideInInspector] public View restore_canvas;
    [HideInInspector] public View life20_canvas;
    [HideInInspector] public View life50_canvas;
    [HideInInspector] public View life100_canvas;
    [HideInInspector] public View expand_canvas;
    [HideInInspector] public View shop_canvas;
    [Header("MAIN MENU")]
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
    [Header("MAIN MENU AUDIO")]
    public AudioClip Main;
    public AudioClip Map;
    [Header("BUTTON SOUND")]
    public AudioClip ButtonSound;
    [Header("GAMEOVER/WIN PANEL SOUND")]
    public AudioClip win;
    private bool gameIsFinished;
    private static MainMenu _instance;
    public static MainMenu Instance { get { return _instance; } }
    #endregion

    #region other methods
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
        SoundManager.Instance.MusicAudio(Main);
        level = gameOverCanvas.transform.GetChild(0).Find("level").gameObject;
        tween = level.GetComponent<DoTweenFeatures>();
    }

    public void MainToMap()
    {
        SoundManager.Instance.StopMusicAudio(Main);
        SoundManager.Instance.SFXAudio(Map);
    }

    public void ButtonSfx()
    {
        SoundManager.Instance.ButtonSound(ButtonSound);
    }

    public void MapToMain()
    {
        SoundManager.Instance.StopSFXAudio(Map);
        SoundManager.Instance.MusicAudio(Main);
    }

    private IEnumerator AdditionalLifeRespawn()
    {
        //CountdownTimer.Instance.isGameOver = false;
        yield return new WaitForEndOfFrame();
        GameManager.Instance.Respawn();
        statCanvas.Show();
        gameOverCanvas.Hide();
    }
    #endregion

    #region Pulbic Methods

    public void AddLife()
    {
        StartCoroutine(AdditionalLifeRespawn());
    }

    public void mainMenu()
    {
        StartCoroutine(LoadGameAsync(true, GameManager.Instance.sceneName));
        UpdateMainMenu();
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
        if(GameManager.Instance.sceneName != "48")
        {
            StartCoroutine(FadeGame(0, GameManager.Instance.nextScene));
            UpdateMainMenu();
            isNextLevel = true;
            coverCanvas.Show();
        }
        else
        {
            StartCoroutine(LoadGameAsync(true, GameManager.Instance.sceneName));
            UpdateMainMenu();
            coverCanvas.Show();
        }
    }

    public void Restart()
    {
        StartCoroutine(FadeGame(0, GameManager.Instance.sceneName));
        UpdateMainMenu();
        isNextLevel = true;
        ingameCanvas.transform.SetParent(MenuCanvas.transform, false);
        ingameCanvas.transform.SetAsLastSibling();
    }


    public void GetAllLevels()
    {
        unlocker = FindObjectsOfType(typeof(StarSystemUnlocker)) as StarSystemUnlocker[];
    }

    public void UpdateMainMenu()
    {
        StartCoroutine(StarCountUpdate());
    }

    public IEnumerator StarCountUpdate()
    {
        foreach (StarSystemUnlocker obj in unlocker)
        {
            obj.UpdateLevelStatus();
            yield return new WaitForSeconds(0.1f);
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
            totem_land.Hide();
            faderCanvas.Show();
            maingameCanvas.Show();
            CanvasFader(0, loadingCanvas.transform);
            ingameCanvas.transform.SetParent(maingameCanvas.transform, false);
            ingameCanvas.transform.SetSiblingIndex(1);
            SoundManager.Instance.StopMusicAudio(Main);
            yield return new WaitForSeconds(0.5f);
            SoundManager.Instance.BGMusic(BGMusic.Instance.music);
            ingameCanvas.Show();
            loadingCanvas.Hide();
            SceneManager.SetActiveScene(SceneManager.GetSceneByName(GameManager.Instance.sceneName));
            Tutorial.Instance.TutorialOn();
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
            totem_land.Hide();
            CanvasFader(1, loadingCanvas.transform);
            ingameCanvas.transform.SetParent(mainCanvas.transform, false);
            ingameCanvas.transform.SetSiblingIndex(3);
            yield return new WaitForSeconds(1f);
            Ending();
            CanvasFader(0, loadingCanvas.transform);
            UIFocus.Instance.FocusOnObjectImmediately();
            SoundManager.Instance.OutBGMusic(BGMusic.Instance.music);
            yield return new WaitForSeconds(1f);
            SoundManager.Instance.SFXAudio(Map);
            CanvasFader(1, mainCanvas.transform);
            SceneManager.SetActiveScene(SceneManager.GetSceneByName("MainMenu"));
            Tutorial.Instance.TutorialOff();
        }
    }

    public void Ending()
    {
        for (int i = 0; i < totemlandActivation.Instance.organgs.Length; i++)
        {
            if (PlayerPrefs.HasKey("totem_key" + 16) && !gameIsFinished
                 && totemlandActivation.Instance.organgs[i].activeInHierarchy)
            {
                videoManager.Instance.ShowVideo();
                gameIsFinished = true;
            }
        }
        scroller_canvas.Show();
        menu_item_canvas.Show();
        ingameCanvas.Show();
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