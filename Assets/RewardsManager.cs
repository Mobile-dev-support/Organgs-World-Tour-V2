using UnityEngine;

public class RewardsManager : MonoBehaviour
{
   public void RewardedAdsForLivesComplete(int type)
   {
        BasicLife.Instance.AddLife(1);
        MainMenu.Instance.gameOverCanvas.Hide();
        switch (type)
        {
            case 0:
                //When in Home
               
                break;
            case 1:
                //When in Game
                GameManager.Instance.Respawn();
                break;
        }
       
   }

    public void RewardedAdsForTimeComplete()
    {
        CountdownTimer.Instance.enabled = true;
        CountdownTimer.Instance.SetTimer(60);
        GameManager.Instance.Rplayer.SetActive(true);
    }

  
}
