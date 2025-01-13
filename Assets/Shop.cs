using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Linq;
using Debug = UnityEngine.Debug;
public class Shop : MonoBehaviour, IBeginDragHandler, IEndDragHandler
{
    public GameObject panel;
    public List<GameObject> IAPCards = new List<GameObject>();
    public GameObject CurrentIAPCentered;
    private ScrollRect scrollRect;
    private Scrollbar scrollBar;
    public ScrollRect scroller;
    float startPosition;
    float endPosition;
    private RectTransform rect;

    public GameObject LeftButton;
    public GameObject RightButton;
    public void Awake()
    {
        scrollRect = GetComponent<ScrollRect>();
        scrollBar = scrollRect.horizontalScrollbar;
        DisablePanel();
    }

    private void OnEnable()
    {
        IAPAvailability();
        foreach (var IAPCard in IAPCards)
        {
            if(IAPCard.gameObject.active == true)
            {
                CurrentIAPCentered = IAPCard;
                rect = CurrentIAPCentered.GetComponent<RectTransform>();
                ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
                FocusOnNearestObjectToCenter(0);
                ToggleButtons();
                break;
            }
        }  
    }

    public void DisablePanel()
    {
        panel.SetActive(false);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        startPosition = scrollBar.value;
    }
    public void OnEndDrag(PointerEventData eventData)
    {
        endPosition = scrollBar.value;
        var difference = startPosition - endPosition;
        FocusOnNearestObjectToCenter(0);
        Debug.Log(startPosition - endPosition);
        Debug.Log("Dragging ended");
        ToggleButtons();
    }

    public void IAPAvailability()
    {
        if (BasicLife.Instance.life <= (BasicLife.Instance.lifeLimit * 0.5f))
        {
            IAPCards[0].gameObject.SetActive(true);
        }
        else
        {
            IAPCards[0].gameObject.SetActive(false);
        }

        if(BasicLife.Instance.lifeLimit != 30)
        {
            IAPCards[1].gameObject.SetActive(true);
        }
        else
        {
            IAPCards[1].gameObject.SetActive(false);
        }
    }

    public void FocusOnNearestObjectToCenter(float offset)
    {
        Vector3 screenCenter = new Vector3(Screen.width / 2f, Screen.height / 2f, 0);
        screenCenter.x += offset;
        List<GameObject> activeIAP = IAPCards.Where(x => x.gameObject.activeSelf).ToList();
        List<GameObject> sorted = activeIAP.OrderBy(o => Vector2.Distance(o.transform.position, screenCenter)).ToList();
        var nearestObject = sorted.First();
        if (nearestObject != null)
        {
            CurrentIAPCentered = nearestObject;
            rect = nearestObject.GetComponent<RectTransform>();
            StartCoroutine(ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 2f));
            ToggleButtons();
        }
    }

    public void FocusOnNextOrPrevious(float direction)
    {
        List<GameObject> activeIAP = IAPCards.Where(x => x.gameObject.activeSelf).ToList();
        int indexOfCurrent = activeIAP.IndexOf(CurrentIAPCentered);
        bool notFirst = indexOfCurrent != 1;
        bool notLast = indexOfCurrent != IAPCards.Count()-2;
        Debug.Log("Index of Current:" + indexOfCurrent);
        switch (direction)
        {
            case 0:
                if (notFirst)
                {
                    rect = activeIAP[indexOfCurrent - 1].GetComponent<RectTransform>();
                    CurrentIAPCentered = activeIAP[indexOfCurrent - 1];
                    ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
                }
                break;

            case 1:
                if (notLast)
                {
                    rect = activeIAP[indexOfCurrent + 1].GetComponent<RectTransform>();
                    CurrentIAPCentered = activeIAP[indexOfCurrent + 1];
                    ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
                }
                break;
        }
        ToggleButtons();


    }


    public void BuyRestoreLivesCompleted()
    {
        BasicLife.Instance.RestoreLivesToLimit();
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
        MainMenu.Instance.gameOverCanvas.Hide();
        if (GameManager.Instance != null)
        {
            //When in Game
            GameManager.Instance.Respawn();
        }

    }

    public void BuyExtraLivesCompleted(int livesToAdd)
    {
        BasicLife.Instance.AddExtraLife(livesToAdd);
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
        MainMenu.Instance.gameOverCanvas.Hide();
        if (GameManager.Instance != null)
        {
            //When in Game
            GameManager.Instance.Respawn();
        }

    }

    public void BuyExpandLivesCompleted()
    {
        BasicLife.Instance.SetLifeLimit(30);
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
    }

    public void ToggleButtons()
    {
        int numberOfElements = 0;
        int centeredIAPIndex = 0;
        foreach (var IAPCard in IAPCards)
        {
            if (IAPCard.gameObject.active == true)
            {
                if(CurrentIAPCentered == IAPCard)
                {
                    centeredIAPIndex = numberOfElements;
                }
                numberOfElements++;
            }
        }

        if(centeredIAPIndex <= 1)
        {
            LeftButton.SetActive(false);
        }
        else
        {
            LeftButton.SetActive(true);
        }
        
        if(centeredIAPIndex == numberOfElements-2)
        {
            RightButton.SetActive(false);
        }
        else
        {
            RightButton.SetActive(true);
        }
    }

}
