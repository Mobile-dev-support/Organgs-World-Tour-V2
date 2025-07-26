using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class LeaderboardController : MonoBehaviour
{
    public static LeaderboardController instance;
    private void Awake() { if (instance != null) Destroy(this); else instance = this; }

    [SerializeField] private View view;
    public GameObject button_leaderboard;

    [Header("Leaderboard")]
    [SerializeField] private GameObject panel_Leaderboard;
    [SerializeField] private LeaderboardSlotHelper[] slot_leaderboardPlace;
    [SerializeField] private TextMeshProUGUI text_level;
    [SerializeField] private UnityEngine.UI.Button button_prev;
    [SerializeField] private UnityEngine.UI.Button button_next;
    [SerializeField] private Scrollbar scrollbar_leaderboardList;

    [Header("Save Score")]
    [SerializeField] private GameObject panel_SaveScore;
    [SerializeField] private TMP_InputField input_name;
    [SerializeField] private TextMeshProUGUI text_levelSaveScore;
    [SerializeField] private CountdownTimer countdownTimer;
    [SerializeField] private TextMeshProUGUI text_score;
    [SerializeField] private UnityEngine.UI.Image image_current_profilepic;
    [SerializeField] private UnityEngine.UI.Button button_save;
    [SerializeField] private GameObject[] image_profilepic;
    [SerializeField] private Scrollbar scrollbar_profilepicselection;

    [Header("Reference Images")]
    public Sprite[] sprite_profilePic;
    public Sprite[] sprite_backgroundSelected; // 0-default; 1-selected


    public int currentLevel = 1;
    private int newHiscore = -1; //-1 means no new update; 0-10 is the index for the next score
    private float lastSaved = -1;
    private int index_profilepic = 0;

    public void NextPage()
    {
        currentLevel++;
        UpdateLeaderboard();
    }
    public void PrevPage()
    {
        currentLevel--;
        UpdateLeaderboard();
    }

    [ContextMenu("OpenLeaderboard")]
    public void OpenLeaderboard()
    {
        if (GameManager.Instance == null)
        { 
            currentLevel = int.Parse(UIFocus.Instance.CurrentLevelSelected.transform.GetChild(1).name);
        }
        else
        {
            currentLevel = int.Parse(GameManager.Instance.sceneName);
        }

        print($"currentLevel_{currentLevel}");

        view.Show();
        panel_Leaderboard.SetActive(true);
        panel_SaveScore.SetActive(false);
        scrollbar_leaderboardList.value = 1;


        UpdateLeaderboard();
    }

    public void UpdateLeaderboard()
    {
        int currentLevel_local = (currentLevel % 3) == 0 ? 3 : (currentLevel % 3);

        button_prev.interactable = (currentLevel_local > 1);
        button_next.interactable = (currentLevel_local < 3);

        if (GameManager.Instance == null)
            text_level.SetText(UIFocus.Instance.CurrentLevelSelected.transform.GetChild(4).GetComponent<TextMeshProUGUI>().text + " - LEVEL " + currentLevel_local);
        else
            text_level.SetText(GameManager.Instance.levelName.Split("-")[0] + " - LEVEL " + currentLevel_local);

        // CLEARS SLOTS
        foreach (var i in slot_leaderboardPlace.Where(x => !x.Text_Time.Equals("-")))
        { i.UpdateSlot(0, "", 0, 0); }

        string currentStage = ((char)('A' + Mathf.Floor((currentLevel - 1) / 3))).ToString();
        print($"update: stage_{currentStage}");
        if (PlayerPrefs.HasKey("scores_" + currentStage + currentLevel_local))
        {
            string rawLeaderboard = PlayerPrefs.GetString("scores_" + currentStage + currentLevel_local);
            string[] split_rawLb = rawLeaderboard.Split('/');

            List<Tuple<int, string, int, float>> scores = new List<Tuple<int, string, int, float>>();
            foreach (var i in split_rawLb) { string[] parts = i.Split('-'); scores.Add(Tuple.Create(int.Parse(parts[0]), parts[1], int.Parse(parts[2]), float.Parse(parts[3]))); }

            for (int i = 0; i < scores.Count && i < 10; i++)
            {
                slot_leaderboardPlace[i].UpdateSlot(scores[i].Item1, scores[i].Item2, scores[i].Item3, scores[i].Item4, newHiscore == i);
            }
        }
    }
    public void CloseLeaderboard()
    {
        //currentLevel = 1;
        view.Hide();
    }


    public void OpenSaveScore()
    {
        view.Show();
        panel_Leaderboard.SetActive(false);
        panel_SaveScore.SetActive(true);

        currentLevel = int.Parse(GameManager.Instance.sceneName);

        if (lastSaved != countdownTimer.timeScore) //if not already saved/returned to save screen
        {
            button_save.interactable = input_name.interactable = true;
            newHiscore = -1;
            input_name.text = "";
            image_current_profilepic.sprite = sprite_profilePic[0];
            image_profilepic[index_profilepic].transform.GetChild(0).gameObject.SetActive(false);
            index_profilepic = 0;
            image_profilepic[index_profilepic].transform.GetChild(0).gameObject.SetActive(true);
        }

        text_levelSaveScore.SetText(GameManager.Instance.levelName);
        int minutes_ = Mathf.FloorToInt(countdownTimer.timeScore / 60);
        int seconds_ = Mathf.FloorToInt(countdownTimer.timeScore % 60);
        int milliseconds_ = Mathf.FloorToInt((countdownTimer.timeScore * 1000) % 1000);
        text_score.SetText("{0:00}:{1:00}:{2:000}", minutes_, seconds_, milliseconds_);
    }
    public void SaveScore()
    {
        if (input_name.text.Equals("")) {
            PopupController.Show("ERROR", "Please enter a name to save your score!");
            return; }
        
        int currentLevel_local = (currentLevel % 3) == 0 ? 3 : (currentLevel % 3);
        string currentStage = ((char)('A' + Mathf.Floor((currentLevel - 1) / 3))).ToString();
        print($"currentStage: {currentStage}");
        if (PlayerPrefs.HasKey("scores_" + currentStage + currentLevel_local))
        {
            string rawLeaderboard = PlayerPrefs.GetString("scores_" + currentStage + currentLevel_local);
            string[] split_rawLb = rawLeaderboard.Split('/');

            List<Tuple<int, string, int, float>> scores = new List<Tuple<int, string, int, float>>();
            foreach (var i in split_rawLb) { string[] parts = i.Split('-'); scores.Add(Tuple.Create(int.Parse(parts[0]), parts[1], int.Parse(parts[2]), float.Parse(parts[3]))); }

            print($"level: {ScoringMechanism.Instance.coinNo}");
            scores.Add(Tuple.Create(index_profilepic, input_name.text, ((int)ScoringMechanism.Instance.coinNo), countdownTimer.timeScore));
            var sorted = scores.OrderBy(x => x.Item4).ToList();
            sorted = sorted.OrderByDescending(x => x.Item3).ToList();

            string s_ = "";
            for (int i = 0; i < sorted.Count && i < 10; i++)
            {
                s_ += sorted[i].Item1 + "-" + sorted[i].Item2 + "-" + sorted[i].Item3 + "-" + sorted[i].Item4;

                if (i + 1 < sorted.Count && i < 9)
                    s_ += "/";
            }
            PlayerPrefs.SetString($"scores_{currentStage}{currentLevel_local}", s_);

            //print("s_: " + s_);
            newHiscore = sorted.FindIndex(x => x.Item3.Equals(countdownTimer.timeScore));
        }
        else
        {
            PlayerPrefs.SetString($"scores_{currentStage}{currentLevel_local}", $"{index_profilepic}-{input_name.text}-{ScoringMechanism.Instance.coinNo}-{countdownTimer.timeScore}");
        }


        PopupController.Show("SUCCESS", "Player data has been saved.");
        button_save.interactable = input_name.interactable = false;
        lastSaved = countdownTimer.timeScore;
    }


    public void ClearLevel()
    {
        //currentLevel = 1;
        newHiscore = -1;
    }

    public void OpenProfilePicSelection()
    {
        scrollbar_profilepicselection.value = 1;
    }
    public void ButtonSelectProfilePic(Transform parent)
    {
        image_profilepic[index_profilepic].transform.GetChild(0).gameObject.SetActive(false);
        index_profilepic = int.Parse(parent.name.Split('(')[1].Split(')')[0]);
        image_profilepic[index_profilepic].transform.GetChild(0).gameObject.SetActive(true);

    }
    public void SaveProfilePicture()
    {
        image_current_profilepic.sprite = sprite_profilePic[index_profilepic];
    }
}


