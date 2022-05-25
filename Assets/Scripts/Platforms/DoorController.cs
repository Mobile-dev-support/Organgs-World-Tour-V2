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
    private Button nextLvlBtn;


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
        if(ScoringMechanism.Instance != null)
        {
            ScoringMechanism.Instance.coinsText.SetText("0");
            ScoringMechanism.Instance.coinNo = 0;
            ScoringMechanism.Instance.score = 0;
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
        totemlandActivation.Instance.DisableTotemLand();
        MainMenu.Instance.totem_land.Hide();
        MainMenu.Instance.dialogCanvas.Hide();
        ScoringMechanism.Instance.Scoring();
        yield return new WaitForSeconds(0.1f);
        currentStarsNum = StarsNum;
        if (currentStarsNum > PlayerPrefs.GetInt("Lv" + levelIndex))
        {
            PlayerPrefs.SetInt("Lv" + levelIndex, StarsNum);
        }
        Debug.Log(PlayerPrefs.GetInt("Lv" + levelIndex, StarsNum));
        MainMenu.Instance.mainCanvas.Hide();
        MainMenu.Instance.winCanvas.Show();
        MainMenu.Instance.winCanvas.gameObject.GetComponent<DoTweenFeatures>().OnClick();
        CountdownTimer.Instance.enabled = false;
        ScoringMechanism.Instance.coinsNumber.SetText(ScoringMechanism.Instance.score.ToString());
        GameManager.Instance.Rplayer.SetActive(false);
        NextLevelNotif();
        Debug.Log(ScoringMechanism.Instance.score);
    }

    public void NextLevelNotif()
    {
        if (PlayerPrefs.GetInt("Lv" + levelIndex) > 1)
        {
            ScoringMechanism.Instance.NextLevelBtn.interactable = true;
        }
        else if((PlayerPrefs.GetInt("Lv" + levelIndex) <= 1) || (levelIndex == 48))
        {
            ScoringMechanism.Instance.NextLevelBtn.interactable = false;
        }
    }
}
