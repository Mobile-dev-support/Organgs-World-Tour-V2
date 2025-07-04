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
    [SerializeField] private TextMeshProUGUI text_level;
    [SerializeField] private LeaderboardSlotHelper[] slot_leaderboardPlace;
    [SerializeField] private UnityEngine.UI.Button button_prev;
    [SerializeField] private UnityEngine.UI.Button button_next;

    [Header("Save Score")]
    [SerializeField] private GameObject panel_SaveScore;
    [SerializeField] private TMP_InputField input_name;
    [SerializeField] private TextMeshProUGUI text_levelSaveScore;
    [SerializeField] private CountdownTimer countdownTimer;
    [SerializeField] private TextMeshProUGUI text_score;
    [SerializeField] private UnityEngine.UI.Button button_save;
    private int currentLevel = 1;


    public void NextPage()
    {
        if (currentLevel < 3) currentLevel++;
        button_prev.interactable = (currentLevel > 1);
        button_next.interactable = (currentLevel < 3);
        OpenLeaderboard();
    }
    public void PrevPage()
    {
        if (currentLevel > 1) currentLevel--;
        button_prev.interactable = (currentLevel > 1);
        button_next.interactable = (currentLevel < 3);
        OpenLeaderboard();
    }

    public void OpenLeaderboard()
    {
        view.Show();
        panel_Leaderboard.SetActive(true);
        panel_SaveScore.SetActive(false);

        text_level.SetText(UIFocus.Instance.CurrentLevelSelected.transform.GetChild(4).GetComponent<TextMeshProUGUI>().text + " - LEVEL " + currentLevel);

        // CLEARS SLOTS
        foreach (var i in slot_leaderboardPlace.Where(x => !x.Text_Time.Equals("-")))
        { i.UpdateSlot("", ""); }

        string currentStage = UIFocus.Instance.CurrentLevelSelected.name;
        if (PlayerPrefs.HasKey("scores_" + currentStage + currentLevel))
        {
            string rawLeaderboard = PlayerPrefs.GetString("scores_" + currentStage + currentLevel);
            string[] split_rawLb = rawLeaderboard.Split('/');

            List<Tuple<string, int>> scores = new List<Tuple<string, int>>();
            foreach (var i in split_rawLb) { string[] parts = i.Split('-'); scores.Add(Tuple.Create(parts[0], int.Parse(parts[1]))); }

            for (int i = 0; i < scores.Count && i <= 10; i++) {
                slot_leaderboardPlace[i].UpdateSlot(scores[i].Item1, scores[i].Item2.ToString());
            }
        }
    }
    public void CloseLeaderboard()
    {
        currentLevel = 1;
        view.Hide();
    }


    public void OpenSaveScore()
    {
        view.Show();
        panel_Leaderboard.SetActive(false);
        panel_SaveScore.SetActive(true);

        button_save.interactable = true;

        int minutes_ = Mathf.FloorToInt(countdownTimer.timeScore / 60);
        int seconds_ = Mathf.FloorToInt(countdownTimer.timeScore % 60);
        int milliseconds_ = Mathf.FloorToInt((countdownTimer.timeScore * 1000) % 1000);
        text_score.SetText("{0:00}:{1:00}:{2:000}", minutes_, seconds_, milliseconds_);
        text_levelSaveScore.SetText(UIFocus.Instance.CurrentLevelSelected.transform.GetChild(4).GetComponent<TextMeshProUGUI>().text + " - LEVEL " + currentLevel);
    }
    public void SaveScore()
    {
        if (input_name.text.Equals("")) {
            PopupController.Show("ERROR", "Please enter a name to save your score!");
            return; }

        string currentStage = UIFocus.Instance.CurrentLevelSelected.name;
        if (PlayerPrefs.HasKey("scores_" + currentStage + currentLevel))
        {
            string rawLeaderboard = PlayerPrefs.GetString("scores_" + currentStage + currentLevel);
            string[] split_rawLb = rawLeaderboard.Split('/');

            List<Tuple<string, int>> scores = new List<Tuple<string, int>>();
            foreach (var i in split_rawLb) { string[] parts = i.Split('-'); scores.Add(Tuple.Create(parts[0], int.Parse(parts[1]))); }

            scores.Add(Tuple.Create(input_name.text, (int)countdownTimer.timeScore));
            var sorted = scores.OrderByDescending(x => x.Item2).ToList();

            string s_ = "";
            for (int i = 0; i < sorted.Count; i++)
            {
                s_ += sorted[i].Item1 + "-" + sorted[i].Item2;

                if (i + 1 < sorted.Count)
                    s_ += "/";
            }
            PlayerPrefs.SetString("scores_" + currentStage + currentLevel, s_);

            //print("s_: " + s_);
        }
        else
        {
            PlayerPrefs.SetString("scores_" + currentStage + currentLevel, input_name.text + "-" + countdownTimer.timeScore);
        }
        
        PopupController.Show("SUCCESS", "Player data has beed saved.");
        button_save.interactable = false;
    }

}


