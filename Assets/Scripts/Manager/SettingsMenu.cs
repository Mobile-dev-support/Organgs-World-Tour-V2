using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class SettingsMenu : MonoBehaviour
{
    private string sceneName;
    private Scene scene;
    private GameObject gm;
    public GameObject levelTitleContainer;
    public TextMeshProUGUI levelTitle;
    public Transform settings_panel;
    public Transform HomeButton;
    public Transform RetryButton;

    private void Awake()
    {
        settings_panel.gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        gm = GameObject.Find("GameManager");
        if (gm != null)
        {
            Time.timeScale = 0;
            HomeButton.gameObject.SetActive(true);
            RetryButton.gameObject.SetActive(true);
            levelTitleContainer.SetActive(true);
            scene = SceneManager.GetActiveScene();
            sceneName = scene.name;
            levelTitle.text = gm.GetComponent<GameManager>().levelName;
        }
        else
        {
            HomeButton.gameObject.SetActive(false);
            RetryButton.gameObject.SetActive(false);
            levelTitleContainer.SetActive(false);
        }
    }

    private void OnDisable()
    {
        Time.timeScale = 1;
    }

    public void mainMenuFromSettings()
    {
        settings_panel.gameObject.SetActive(false);
        CountdownTimer.Instance.enabled = false;
        MainMenu.Instance.mainMenu();
    }
}
