using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class StarSystemUnlocker : MonoBehaviour
{
    public bool unlocked;
    public Image unlockImage;
    public GameObject[] stars;
    public Sprite starSprite;
    public View getlifeCanvas;
    public GameObject country;
 

    private void Start()
    {
        Button btn = gameObject.GetComponent<Button>();
        btn.onClick.AddListener(PressSelection);
        UpdateLevelStatus();
        UpdateLevelImage();
    }

    public void UpdateLevelStatus()
    {
        //if the current lv is 5, the pre should be 4
        int previousLevelNum = int.Parse(gameObject.name) - 1;
        if (PlayerPrefs.GetInt("Lv" + previousLevelNum.ToString()) > 1)//If the firts level star is bigger than 0, second level can play
        {
            unlocked = true;
            GetHighestLevel();
        }
    }

    public void GetHighestLevel()
    {
        if (!UIFocus.Instance.CurrentLevel.Contains(country))
        {
            UIFocus.Instance.CurrentLevel.Add(country);
            country.GetComponent<Button>().interactable = true;
        }
    }

    public void UpdateLevelImage()
    {
        if (!unlocked)//MARKER if unclock is false means This level is clocked!
        {
            unlockImage.gameObject.SetActive(true);
            for (int i = 0; i < stars.Length; i++)
            {
                stars[i].SetActive(false);
            }
            gameObject.GetComponent<Button>().interactable = false;
        }
        else//if unlock is true means This level can play !
        {
            unlockImage.gameObject.SetActive(false);
            for (int i = 0; i < stars.Length; i++)
            {
                stars[i].SetActive(true);
            }

            for (int i = 0; i < PlayerPrefs.GetInt("Lv" + gameObject.name); i++)
            {
                stars[i].GetComponent<Image>().sprite = starSprite;
            }
            gameObject.GetComponent<Button>().interactable = true;
        }
    }

    public void PressSelection()//When we press this level, we can move to the corresponding Scene to play
    { 
       MainMenu.Instance.LoadLevel(gameObject.name);
    }
}
