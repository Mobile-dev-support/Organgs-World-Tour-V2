using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LeaderboardSlotHelper : MonoBehaviour
{
    [SerializeField] private Image Image_ProfilePic;
    [SerializeField] private Image Image_Place;
    [SerializeField] private Image Image_Background;
    [SerializeField] private Image Image_Coins;
    [SerializeField] private TextMeshProUGUI Text_Name;
    [SerializeField] private TextMeshProUGUI Text_Coins;
    public TextMeshProUGUI Text_Time;


    public void UpdateSlot(int index_profilePic, string name, int coins, float time, bool isSelected = false)
    {
        Image_ProfilePic.sprite = LeaderboardController.instance.sprite_profilePic[index_profilePic];

        Image_Coins.gameObject.SetActive(!name.Equals(""));
        if (name.Equals(""))
        {
            Text_Name.SetText("-");
            Text_Coins.SetText("");
            Text_Time.SetText("-");
        }
        else
        {
            int minutes = Mathf.FloorToInt(time / 60f);
            int seconds = Mathf.FloorToInt(time % 60f);
            int milliseconds = Mathf.FloorToInt((time * 1000f) % 1000f);

            string score_ = string.Format("{0}:{1:00}:{2:000}", minutes, seconds, milliseconds);

            Text_Name.SetText(name);
            Text_Coins.SetText(coins.ToString());
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
