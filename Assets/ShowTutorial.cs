using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowTutorial : MonoBehaviour
{
    [SerializeField]
    private CategoryTypes tutorialCategory;
    [SerializeField]
    private int tutorialPage;
    [SerializeField]
    private BoxCollider2D colliderSelf;
    [SerializeField]
    private bool toggleNextOrPrevious;
    // Start is called before the first frame update


    private void OnTriggerEnter2D(Collider2D collision)
    {
 
        if(collision != null && collision.gameObject.CompareTag("Player") )
        {
            int categoryIndex = 0;
            string playerPrefsCode = string.Empty;
            switch (tutorialCategory)
            {
                case CategoryTypes.Controls:
                    categoryIndex = 0;
                    playerPrefsCode = "unlockedControlsInstruction";
                    break;
                case CategoryTypes.Collectibles:
                    categoryIndex = 1;
                    playerPrefsCode = "unlockedCollectiblesInstruction";
                    break;
                case CategoryTypes.Platforms:
                    categoryIndex = 2;
                    playerPrefsCode = "unlockedPlatformsInstruction";
                    break;
                case CategoryTypes.Enemies:
                    categoryIndex = 3;
                    playerPrefsCode = "unlockedObstaclesInstruction";
                    break;

            }

            colliderSelf.enabled = false;
            if (Tutorial.Instance != null && PlayerPrefs.GetInt(playerPrefsCode+tutorialPage) == 0)
            {
                Debug.Log("Player Entered");
                Tutorial.Instance.TutorialUnlockPage(categoryIndex, tutorialPage, toggleNextOrPrevious);
            }
        }
    }

    private enum CategoryTypes
    {
        Controls,
        Collectibles,
        Platforms,
        Enemies
    }

}
