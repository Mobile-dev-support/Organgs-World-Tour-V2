using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DoorController : MonoBehaviour
{
    [Header("STARS")]
    private int currentStarsNum = 0;
    public int StarsNum;
    public int levelIndex;
    public int country;
    private GameObject button;
    private GameObject coinsObj;
    [HideInInspector]
    public GameObject winCanvas;
    private View win;
    private GameObject mainCanvas;
    private View main;
    private Button nextLvlBtn;
    private TextMeshProUGUI coins;


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
        mainCanvas = GameObject.Find("main_game_canvas");
        if (mainCanvas != null)
        {
            coinsObj = GameObject.Find("coinText");
            winCanvas = GameObject.Find("win_canvas");
            button = GameObject.Find("next_level_btn");
            coins = coinsObj.GetComponent<TextMeshProUGUI>();
            win = winCanvas.GetComponent<View>();
            main = mainCanvas.GetComponent<View>();
            nextLvlBtn = button.GetComponent<Button>();
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    { 
        if (other.gameObject.CompareTag("Player"))
        {
            gameObject.GetComponent<Animator>().SetTrigger("opening");
            OnDoorClose();
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
        yield return new WaitForEndOfFrame();
        StartCoroutine(ScoringMechanism.Instance.WinPanel());
        yield return new WaitForEndOfFrame();
        NextLevelNotif();
        main.Hide();
        win.Show();
        CountdownTimer.Instance.enabled = false;
        GameObject coinNo = GameObject.Find("coins_number");
        coins = coinNo.GetComponent<TextMeshProUGUI>();
        coins.SetText(ScoringMechanism.Instance.score.ToString());
        GameManager.Instance.Rplayer.SetActive(false);
    }

    public void NextLevelNotif()
    {
        if (PlayerPrefs.GetInt("Lv" + levelIndex) > 1)
        {
            nextLvlBtn.interactable = true;
        }
        else if((PlayerPrefs.GetInt("Lv" + levelIndex) <= 1) || (levelIndex == 48))
        {
            nextLvlBtn.interactable = false;
        }
    }
}
