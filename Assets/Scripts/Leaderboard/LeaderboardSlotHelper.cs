using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LeaderboardSlotHelper : MonoBehaviour
{
    [SerializeField] private Image Image_ProfilePic;
    [SerializeField] private Image Image_Place;
    [SerializeField] private TextMeshProUGUI Text_Name;
    public TextMeshProUGUI Text_Time;


    public void UpdateSlot(string name, string score)
    {
        if(name.Equals(""))
        {
            Text_Name.SetText("-");
            Text_Time.SetText("-");
        }
        else
        {
            Text_Name.SetText(name);
            Text_Time.SetText(score);
        }
    }
}
