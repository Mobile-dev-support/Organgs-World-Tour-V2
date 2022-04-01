using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingsMenu : MonoBehaviour
{
    private string sceneName;
    private Scene scene;
    private GameObject gm;
    public Transform settings_panel;
    public Transform HomeButton;


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
            scene = SceneManager.GetActiveScene();
            sceneName = scene.name;
        }
        else
        {
            HomeButton.gameObject.SetActive(false);
        }
    }

    private void OnDisable()
    {
        Time.timeScale = 1;
    }

    public void mainMenuFromSettings()
    {
        settings_panel.gameObject.SetActive(false);
        MainMenu.Instance.mainMenu();
    }
}
