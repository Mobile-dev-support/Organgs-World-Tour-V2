using TMPro;
using UnityEngine;

public class PopupController : MonoBehaviour
{
    [SerializeField] private View view_Popup;
    [SerializeField] private GameObject panel_popup;
    [SerializeField] private TextMeshProUGUI text_Title;
    [SerializeField] private TextMeshProUGUI text_Message;

    private static View viewS_Popup;
    private static GameObject panelS_popup;
    private static TextMeshProUGUI textS_Title;
    private static TextMeshProUGUI textS_Message;

    private void Start()
    {
        viewS_Popup = view_Popup;
        textS_Title = text_Title;
        textS_Message = text_Message;
        panelS_popup = panel_popup;
        panelS_popup.SetActive(false);
    }

    public static void Show(string title, string message)
    {
        viewS_Popup.Show();
        panelS_popup.SetActive(true);
        textS_Title.SetText(title);
        textS_Message.SetText(message);
    }
}
