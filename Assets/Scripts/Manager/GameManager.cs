using System.Collections;
using UnityEngine;
using DG.Tweening;

public class GameManager : MonoBehaviour
{
    public string levelName;
    public string sceneName;
    public string nextScene;
    private GameObject firstDoor;
    private Camera mCamera;
    private float respawnTimeStart;
    private bool respawn;
    private float respawnTime = 2f;
    private Animator anim;

    [Header("LEVEL MANAGER")]
    public GameObject player;
    public Transform respawnPoint;
    public GameObject Rplayer { get; set; }
    
    private static GameManager _instance;
    public static GameManager Instance { get { return _instance; } }

    public bool resetPlatforms;

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
        if (CameraVerticalController.Instance != null)
        {
            CameraVerticalController.Instance.SetCameras();
        }

        anim = firstDoor.GetComponent<Animator>();
        if (Fader.Instance != null)
        {
            CountdownTimer.Instance.timerText.DOColor(Color.white, 0f);
            Fader.Instance.FadeImmediately();
            CountdownTimer.Instance.ResetTimer();
        }
        if (ScoringMechanism. Instance != null)
        {
            ScoringMechanism.Instance.coinsText.SetText("0");
            ScoringMechanism.Instance.coinNo = 0;
            ScoringMechanism.Instance.score = 0;

            for (int i = 0; i < ScoringMechanism.Instance.stars.Length; i++)
            {
                ScoringMechanism.Instance.stars[i].sprite = ScoringMechanism.Instance.emptyStarSprite;
            }
        }
        Invoke("FirstSpawn", 1);
    }

    private void FirstSpawn()
    {
        StartCoroutine(Spawnplayer());
    }

    private void Update()
    {
        CheckRespawn();
    }

    public void Respawn()
    {
        respawnTimeStart = Time.time;
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

    private IEnumerator Spawnplayer()
    {
        resetPlatforms = true;
        Rplayer = Instantiate(player, respawnPoint.transform.position, player.transform.rotation);
        if(Rplayer.transform.rotation != respawnPoint.rotation)
        {
            Rplayer.GetComponentInChildren<Core>().Movement.Flip();
        }
        yield return new WaitForSeconds(0.01f);
        if(Fader.Instance != null)
        {
            if (Tutorial.Instance.view.isVisible())
            {
                CountdownTimer.Instance.enabled = false;
            }
            else
            {
                CountdownTimer.Instance.enabled = true;
            }
            Fader.Instance.BGFader(false);
        }
        yield return new WaitForEndOfFrame();
        Rplayer.transform.parent = null;
        Rplayer.name = player.name;
        anim.SetTrigger("opening");
        resetPlatforms = false;
    }
}
