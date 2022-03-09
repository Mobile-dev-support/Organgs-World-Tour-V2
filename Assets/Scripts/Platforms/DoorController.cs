using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using TMPro;

public class DoorController : MonoBehaviour
{

    #region Key Variables
    public int totem_key { get; set; }
    #endregion

    [Header("STARS")]
    private int currentStarsNum = 0;
    public int StarsNum;
    public int levelIndex;
    public int country;
    private GameObject player;
    [Header("WIN PANEL")]
    public GameObject winCanvas;
    public TextMeshProUGUI counter;
    public TextMeshProUGUI coins;
    public Image img;
    public View mainCanvas;

    private static DoorController _instance;
    public static DoorController Instance { get { return _instance; } }

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
        //PlayerPrefs.DeleteKey("totem_key" + country);
        Load();
        if (totem_key > 0)
            img.color = Color.white;
        else
            img.color = Color.black;
    }

    private void OnTriggerEnter2D(Collider2D other)
    { 
        if (other.gameObject.CompareTag("Player"))
        {
            player = GameObject.Find("MainPlayer");
            gameObject.GetComponent<Animator>().SetTrigger("opening");
            player.GetComponent<SpriteRenderer>().DOFade(0f, 0.5f).OnComplete(OnDoorClose);
        }   
    }

    private void OnDoorClose()
    {
        StartCoroutine(EndGame());
        StartCoroutine(MainMenu.Instance.StarCountUpdate());
    }

    public IEnumerator EndGame()
    {
        currentStarsNum = StarsNum;
        if (currentStarsNum > PlayerPrefs.GetInt("Lv" + levelIndex))
        {
            PlayerPrefs.SetInt("Lv" + levelIndex, StarsNum);
        }
        Debug.Log(PlayerPrefs.GetInt("Lv" + levelIndex, StarsNum));
        yield return new WaitForSeconds(1);
        StartCoroutine(ScoringMechanism.Instance.WinPanel());
        yield return new WaitForEndOfFrame();
        winCanvas.GetComponent<View>().Show();
        CountdownTimer.Instance.enabled = false;
        counter.SetText("{0:00}:{1:00}", CountdownTimer.Instance.minutes, CountdownTimer.Instance.seconds);
        coins.SetText(ScoringMechanism.Instance.coinNo.ToString());
        GameManager.Instance.Rplayer.SetActive(false);
        mainCanvas.Hide();
    }

    public void Save()
    {
        PlayerPrefs.SetInt("totem_key" + country, totem_key);
    }
    private void Load() 
    {
        totem_key = PlayerPrefs.GetInt("totem_key" + country);
    }
}
