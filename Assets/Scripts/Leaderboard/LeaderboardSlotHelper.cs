using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LeaderboardSlotHelper : MonoBehaviour
{
    [SerializeField] private Image Image_ProfilePic;
    [SerializeField] private Image Image_Place;
    [SerializeField] private Image Image_Background;
    [SerializeField] private TextMeshProUGUI Text_Name;
    public TextMeshProUGUI Text_Time;


    public void UpdateSlot(int index_profilePic, string name, float score, bool isSelected = false)
    {
        if(name.Equals(""))
        {
            Text_Name.SetText("-");
            Text_Time.SetText("-");
        }
        else
        {
            Image_ProfilePic.sprite = LeaderboardController.instance.sprite_profilePic[index_profilePic];

            int minutes = Mathf.FloorToInt(score / 60f);
            int seconds = Mathf.FloorToInt(score % 60f);
            int milliseconds = Mathf.FloorToInt((score * 1000f) % 1000f);

            string score_ = string.Format("{0}:{1:00}:{2:000}", minutes, seconds, milliseconds);

            Text_Name.SetText(name);
            Text_Time.SetText(score_);

            Image_Background.sprite = isSelected ? LeaderboardController.instance.sprite_backgroundSelected[1] : LeaderboardController.instance.sprite_backgroundSelected[0];
        }
    }

    [ContextMenu("Update")]
    private void EditorPRogram()
    {
        Image_Background = transform.GetChild(0).GetComponent<Image>();
    }
}
