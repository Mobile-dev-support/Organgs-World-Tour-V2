using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using DG.Tweening;
using System.Linq;
using TMPro;
using System.Numerics;
using UnityEngine.UIElements;
using System;
public class MainMenu : MonoBehaviour
{
    #region variables
    [HideInInspector] public View mainCanvas;
    [HideInInspector] public View mainMenuCanvas;
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
    public View shop_canvas;
    [Header("MAIN MENU")]
    public UnityEngine.UI.Slider slider;
    public TextMeshProUGUI textProgress;
    public AudioMixer audioMix;
    public GameObject cam;
    private StarSystemUnlocker[] unlocker;
    private GameObject level;
    private DoTweenFeatures tween;
    private bool isNextLevel;
    [Header("DIALOG CONTAINER")]
    public UnityEngine.UI.Image portrait;
    public UnityEngine.UI.Image portrait2;
    public TextMeshProUGUI lines;
    public TextMeshProUGUI ActorName;
    public RectTransform choiceList;
    public RectTransform dialog;
    [Header("GAMEOVER MENU")]
    public GameObject buttonCloseAccessingLevelWithNoLives;
    public GameObject buttonWatchAdTimer;
    public GameObject buttonWatchAdHomeLives;
    public GameObject buttonWatchAdGameLives;
    public GameObject buttonBuyLives;
    public GameObject buttonHome;
    public TextMeshProUGUI textGameOverMessage;
    public TextMeshProUGUI textGameOverInstructions;
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

    [SerializeField] private UnityEngine.UI.Slider musicSlider;
    [SerializeField] private UnityEngine.UI.Slider sfxSlider;
    [SerializeField] private UnityEngine.UI.Image musicImage;
    [SerializeField] private UnityEngine.UI.Image sfxImage;
    [SerializeField] private Sprite musicOn;
    [SerializeField] private Sprite musicOff;
    [SerializeField] private Sprite sfxOn;
    [SerializeField] private Sprite sfxOff;
    private float previousMusicVolume;
    private float previousSFXVolume;
    private bool musicMuted;
    private bool sfxMuted;

    public RectTransform CameraMovementPanel;
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
        StartCoroutine(FadeGame(true,0, GameManager.Instance.sceneName));
        UpdateMainMenu();
        coverCanvas.Show();
    }

    public void GameOverScreen(int type)
    {
        if (type != 0)
        {
            statCanvas.Hide();
        }
        ShowGameOverCanvas(type);
        tween.OnClick();
    }

    public void ShowGameOverCanvas(int type)
    {
        switch(type)
        {
            case 0:
                //Trying to access level on 0 lives
                buttonCloseAccessingLevelWithNoLives.gameObject.SetActive(true);
                buttonBuyLives.SetActive(true);
                buttonWatchAdHomeLives.SetActive(true);
                buttonWatchAdGameLives.SetActive(false);
                buttonWatchAdTimer.SetActive(false);
                buttonHome.SetActive(false);
                textGameOverMessage.text = "You're out of Lives!";
                textGameOverInstructions.text = "Watch an ad to get a free life";
                break;
            case 1:
                //Died on 0 lives
                buttonCloseAccessingLevelWithNoLives.SetActive(false);
                buttonBuyLives.SetActive(true);
                buttonWatchAdHomeLives.SetActive(false);
                buttonWatchAdGameLives.SetActive(true);
                buttonWatchAdTimer.SetActive(false);
                buttonHome.SetActive(true);
                textGameOverMessage.text = "You're out of Lives!";
                textGameOverInstructions.text = "Watch an ad to get a free life and continue the level";
                break;
            case 2:
                //Reached Time Limit
                buttonCloseAccessingLevelWithNoLives.SetActive(false);
                buttonBuyLives.SetActive(false);
                buttonWatchAdHomeLives.SetActive(false);
                buttonWatchAdGameLives.SetActive(true);
                buttonWatchAdTimer.SetActive(true);
                buttonHome.SetActive(true);
                textGameOverMessage.text = "You're out of Time!";
                textGameOverInstructions.text = "Watch an ad to gain additional time";
                break;
        }
        gameOverCanvas.Show();
    }


    public void LoadLevel(string placeName)
    {
        StartCoroutine(FadeGame(false,0, placeName));
        //BasicLife.Instance.LifeLine();
    }

    public void NextLevel()
    {
        if(GameManager.Instance.sceneName != "48")
        {
            StartCoroutine(FadeGame(false, 0, GameManager.Instance.nextScene));
            //BasicLife.Instance.LifeLine();
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
        StartCoroutine(FadeGame(false, 0, GameManager.Instance.sceneName));
        UpdateMainMenu();
        isNextLevel = true;
        ingameCanvas.transform.SetParent(MenuCanvas.transform, false);
        ingameCanvas.transform.SetAsLastSibling();
    }

    public void HomeFromGameover()
    {
        gameOverCanvas.Hide();
        //BasicLife.Instance.LifeLine();
        CountdownTimer.Instance.enabled = false;
        MainMenu.Instance.mainMenu();
    }

    public void ForceRestart()
    {
        if (Fader.Instance != null)
        {
            Fader.Instance.BGFader(true);
            CountdownTimer.Instance.enabled = false;

        }
        Time.timeScale = 1;
        //BasicLife.Instance.LifeLine();
        Restart();
    }

    public void GameOverRestart()
    {
        Time.timeScale = 1;
        //BasicLife.Instance.LifeLine();
        Restart();
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

    public IEnumerator FadeGame(bool unload, float fadeVal, string loadSceneString)
    {
        slider.value = 0;
        loadingCanvas.Show();
        textProgress.text = "Loading Asset Data... ";
        yield return new WaitForSeconds(.2f);
        CanvasFader(fadeVal, mainCanvas.transform);
        yield return new WaitForSeconds(0.5f);
        CanvasFader(1, loadingCanvas.transform);
        yield return new WaitForSeconds(2f);
        StartCoroutine(LoadGameAsync(unload, loadSceneString));
    }

    void CanvasFader(float val, Transform canvas)
    {
        canvas.GetComponent<CanvasGroup>().DOFade(val, .5f);
    }

    public IEnumerator LoadGameAsync(bool unload, string loadSceneString)
    {
        textProgress.text = "Loading Asset Data... ";
        Debug.Log("Loading");
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
            operation = SceneManager.UnloadSceneAsync(loadSceneString);
            
        }

        while (!operation.isDone)
        {
            float progress = Mathf.Clamp01(operation.progress / .9f);
            if(!unload)
            {
                slider.value = progress;
                textProgress.text = ProgressText(progress);
            }
            else
            {
                slider.value = 1f;
                textProgress.text = ProgressText(1);
            }
            
            yield return null;
        }

        if (operation.isDone && !unload)
        {
            Debug.Log("Loaded");
            Time.timeScale = 1;
            Resources.UnloadUnusedAssets();
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
            yield return new WaitForSecondsRealtime(0.5f);
            SoundManager.Instance.BGMusic(BGMusic.Instance.music);
            ingameCanvas.Show();
            loadingCanvas.Hide();
            SceneManager.SetActiveScene(SceneManager.GetSceneByName(GameManager.Instance.sceneName));
            Tutorial.Instance.TutorialOn();
        }
        else if (operation.isDone && unload)
        {
            Resources.UnloadUnusedAssets();
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
            yield return new WaitForSecondsRealtime(1f);
            Ending();
            CanvasFader(0, loadingCanvas.transform);
            UIFocus.Instance.FocusOnObjectImmediately();
            SoundManager.Instance.OutBGMusic(BGMusic.Instance.music);
            yield return new WaitForSecondsRealtime(1f);
            loadingCanvas.Hide();
            SoundManager.Instance.SFXAudio(Map);
            mainMenuCanvas.Hide();
            CanvasFader(1, mainCanvas.transform);
            SceneManager.SetActiveScene(SceneManager.GetSceneByName("MainMenu"));
            Tutorial.Instance.TutorialOff();
        }
    }

    public void Ending()
    {
        for (int i = 0; i < totemlandActivation.Instance.organgs.Length; i++)
        {
            if (PlayerPrefs.HasKey("totem_key" + 16) && !PlayerPrefs.HasKey("gameisfinished")
                 && totemlandActivation.Instance.organgs[i].activeInHierarchy)
            {
                videoManager.Instance.ShowVideo();
                PlayerPrefs.SetInt("gameisfinished", 1);
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

    public void MuteMusicVolume()
    {
        if (!musicMuted)
        {
            musicMuted = true;
            musicImage.sprite = musicOff;
            previousMusicVolume = musicSlider.value;
            audioMix.SetFloat("Music Volume", -80);
            musicSlider.value = -50;
            musicSlider.interactable = false;
        }
        else
        {
            musicMuted = false;
            musicImage.sprite = musicOn;
            SetMusicVolume(previousMusicVolume);
            musicSlider.value = previousMusicVolume;
            musicSlider.interactable = true;
        }
    }

    public void MuteSFXVolume()
    {
        if (!sfxMuted)
        {
            sfxMuted = true;
            previousSFXVolume = sfxSlider.value;
            audioMix.SetFloat("SFX Volume", -80);
            sfxImage.sprite = sfxOff;
            sfxSlider.interactable = false;
            sfxSlider.value = -50f;
        }
        else
        {
            sfxMuted = false;
            sfxImage.sprite = sfxOn;
            SetSfxVolume(previousSFXVolume);
            sfxSlider.interactable = true;
            sfxSlider.value = previousSFXVolume;
        }    
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