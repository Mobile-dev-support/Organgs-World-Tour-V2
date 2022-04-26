using System.Collections;
using UnityEngine;
using DG.Tweening;

public class GameManager : MonoBehaviour
{
    public string sceneName;
    public string nextScene;
    private GameObject firstDoor;
    private Camera mCamera;
    private float respawnTimeStart;
    private bool respawn;
    private float respawnTime = 2f;
    private Animator anim;

    [Header("LEVEL MANAGER")]
    [SerializeField]
    private GameObject player;
    public Transform respawnPoint;
    public GameObject Rplayer { get; set; }
    
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
        anim = firstDoor.GetComponent<Animator>();

        if(Fader.Instance != null)
        {
            Fader.Instance.FadeImmediately();
            CountdownTimer.Instance.ResetTimer();
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
        Rplayer = Instantiate(player, respawnPoint);
        yield return new WaitForSeconds(0.01f);
        if(Fader.Instance != null)
        {
            CountdownTimer.Instance.enabled = true;
            ScoringMechanism.Instance.NumberOfLives();
            Fader.Instance.BGFader(false);
        }
        yield return new WaitForEndOfFrame();
        Rplayer.transform.parent = null;
        Rplayer.name = player.name;
        anim.SetTrigger("opening");
    }
}
