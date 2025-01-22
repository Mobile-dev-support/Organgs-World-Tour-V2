using System.Collections;
using UnityEngine;

public class RewardsManager : MonoBehaviour
{
    public static RewardsManager instance;



    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            instance = this;
        }
    }
    public void RewardedAdsForLivesComplete()
   {
        Time.timeScale = 1;
        BasicLife.Instance.AddLife(1);
        MainMenu.Instance.gameOverCanvas.Hide();
        if (GameManager.Instance != null)
        {
            MainMenu.Instance.statCanvas.Show();
            GameManager.Instance.Respawn(true);
        }
       
   }

    public void RewardedAdsForTimeComplete()
    {
        Time.timeScale = 0;
        if (Fader.Instance != null)
        {
            Fader.Instance.FadeOffImmediately();
        }
        MainMenu.Instance.ContinuePanel.SetActive(true);
        MainMenu.Instance.ToggleContinuePanel(true);
    }


    public void RespawnFromLastCheckpoint()
    {
        MainMenu.Instance.ContinuePanel.SetActive(false);
        MainMenu.Instance.gameOverCanvas.Hide();
        MainMenu.Instance.statCanvas.Show();
        if (GameManager.Instance != null)
        {
            Time.timeScale = 1;
            CountdownTimer.Instance.SetTimer(180);
            Destroy(GameManager.Instance.Rplayer);
            MainMenu.Instance.statCanvas.Show();
            GameManager.Instance.Respawn(false);
        }
    }

    public void ContinueFromTime()
    {
        MainMenu.Instance.ContinuePanel.SetActive(false);
        MainMenu.Instance.gameOverCanvas.Hide();
        MainMenu.Instance.statCanvas.Show();
        StartCoroutine(ContinueFromTimeComplete());
    }

    IEnumerator ContinueFromTimeComplete()
    {
        Time.timeScale = 0;
        MainMenu.Instance.ToggleCountdownPanel(true, "3");
        yield return new WaitForSecondsRealtime(1);
        MainMenu.Instance.ToggleCountdownPanel(true, "2");
        yield return new WaitForSecondsRealtime(1);
        MainMenu.Instance.ToggleCountdownPanel(true, "1");
        yield return new WaitForSecondsRealtime(1);
        MainMenu.Instance.ToggleCountdownPanel(false);
        Time.timeScale = 1;
        CountdownTimer.Instance.enabled = true;
        CountdownTimer.Instance.SetTimer(120);
    }

  
}
