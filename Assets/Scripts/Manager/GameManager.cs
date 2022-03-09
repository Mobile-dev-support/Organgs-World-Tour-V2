using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [Header("LEVEL MANAGER")]
    public Transform respawnPoint;
    [SerializeField]
    private GameObject player;
    public GameObject Rplayer { get; set; }
    private GameObject firstDoor;
    private Camera mCamera;
    private SpriteRenderer sprite;
    private float respawnTimeStart;
    private bool respawn;
    private float respawnTime = 2f;
    private Animator anim;
    public string sceneName;
    public string nextScene;
    [Header("GAME OVER MANAGER")]
    public View mainCanvas;
    public View gameOverPanel;
    public DoTweenFeatures features;

    private static GameManager _instance;
    public static GameManager Instance { get { return _instance; } }

    private void Awake()
    {
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
        mCamera = Camera.main;
        firstDoor = GameObject.Find("door");
        SceneManager.SetActiveScene(SceneManager.GetSceneByName(sceneName));
        anim = firstDoor.GetComponent<Animator>();
        CanvasFader.Instance.FadeImmediately();
        StartCoroutine(Spawnplayer());
    }

    private void Update()
    {
        CheckRespawn();
    }

    public void Respawn()
    {
        var newMask = mCamera.cullingMask & ~(1 << 2);
        respawnTimeStart = Time.time;
        mCamera.cullingMask = newMask;
        respawn = true;
    }

    private void CheckRespawn()
    {
        if(Time.time >= respawnTimeStart + respawnTime && respawn)
        {
            StartCoroutine(Spawnplayer());
            respawn = false;
        }
    }

    public void AddLife()
    {
        if(Energy.Instance.currentRewardedAd > 0)
        {
            StartCoroutine(AdditionalLifeRespawn());
        }
        else
        {
            mainMenu();
        }
    }

    public void gameOver()
    {
        mainCanvas.Hide();
        gameOverPanel.Show();
        features.OnClick();
    }

    public void NextLevel()
    {
        SceneManager.SetActiveScene(SceneManager.GetSceneByName("TestMenu"));
        SceneManager.UnloadSceneAsync(sceneName);
        MainMenu.Instance.NextLevel(nextScene);
    }

    public void Restart()
    {
        MainMenu.Instance.ingameCanvas.transform.SetParent(MainMenu.Instance.mainCanvas, false);
        MainMenu.Instance.ingameCanvas.transform.SetSiblingIndex(1);
        SceneManager.UnloadSceneAsync(sceneName);
        MainMenu.Instance.LoadLevel(sceneName);
        StartCoroutine(MainMenu.Instance.StarCountUpdate());

    }

    public void mainMenu()
    {
        StartCoroutine(MainMenu.Instance.LoadGameAsync(true, sceneName));
        StartCoroutine(MainMenu.Instance.StarCountUpdate());
    }

    private IEnumerator AdditionalLifeRespawn()
    {
        Energy.Instance.AddALife();
        CountdownTimer.Instance.isGameOver = false;
        yield return new WaitForEndOfFrame();
        Respawn();
        mainCanvas.Show();
        gameOverPanel.Hide();
    }

    private IEnumerator Spawnplayer()
    {
        Rplayer = Instantiate(player, respawnPoint);
        yield return new WaitForSeconds(0.01f);
        CountdownTimer.Instance.enabled = true;
        sprite = Rplayer.GetComponent<SpriteRenderer>();
        var newMask = mCamera.cullingMask | (1 << 2);
        yield return new WaitForEndOfFrame();
        mCamera.cullingMask = newMask;
        Rplayer.transform.parent = null;
        Rplayer.name = player.name;
        CanvasFader.Instance.Fader(false);
        anim.SetTrigger("opening");
        ScoringMechanism.Instance.NumberOfLives();
    }
}
