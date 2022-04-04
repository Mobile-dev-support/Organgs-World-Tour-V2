using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StarSystemUnlocker : MonoBehaviour
{
    public bool unlocked;
    public Image unlockImage;
    public GameObject[] stars;
    public Sprite starSprite;
    public View getlifeCanvas;
    private RectTransform rect;
    public ScrollRect scroller;
 

    private void Start()
    {
        Button btn = gameObject.GetComponent<Button>();
        rect = gameObject.GetComponent<RectTransform>();
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
            //ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 0.2f);
        }
    }
    public void UpdateLevelImage()
    {
        if (!unlocked)//MARKER if unclock is false means This level is clocked!
        {
            unlockImage.gameObject.SetActive(true);
            for (int i = 0; i < stars.Length; i++)
            {
                stars[i].gameObject.SetActive(false);
            }
            gameObject.GetComponent<Button>().interactable = false;
        }
        else//if unlock is true means This level can play !
        {
            unlockImage.gameObject.SetActive(false);
            for (int i = 0; i < stars.Length; i++)
            {
                stars[i].gameObject.SetActive(true);
            }

            for (int i = 0; i < PlayerPrefs.GetInt("Lv" + gameObject.name); i++)
            {
                stars[i].gameObject.GetComponent<Image>().sprite = starSprite;
            }
            gameObject.GetComponent<Button>().interactable = true;
        }
    }

    public void PressSelection()//When we press this level, we can move to the corresponding Scene to play
    {
        if (unlocked && Energy.Instance.currentLife > 0)
        {
            MainMenu.Instance.LoadLevel(gameObject.name);
        }
        else
        {
            getlifeCanvas.Show();
        }
    }
}
