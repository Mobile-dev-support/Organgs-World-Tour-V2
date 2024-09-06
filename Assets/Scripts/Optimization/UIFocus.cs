using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.UIElements;
public class UIFocus : MonoBehaviour
{
    public List<GameObject> CurrentLevel = new List<GameObject>();
    public GameObject CurrentLevelSelected;

    private RectTransform rect;
    public ScrollRect scroller;
    public Transform UI_particle;
    private static UIFocus _instance;
    public GameObject buttonLeftSelector;
    public GameObject buttonRightSelector;

    public static UIFocus Instance { get { return _instance; } }

   
    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
        }
    }

    public void FocusOnObject()
    {
        List<GameObject> objSortedList = CurrentLevel.OrderBy(o => o.name).ToList();
        CurrentLevel = objSortedList;
        rect = CurrentLevel.Last().GetComponent<RectTransform>();
        CurrentLevelSelected = CurrentLevel.Last();
        StartCoroutine(ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 2f));
        UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
        ToggleButtons();
    }

    public void FocusOnObjectImmediately()
    {
        List<GameObject> objSortedList = CurrentLevel.OrderBy(o => o.name).ToList();
        CurrentLevel = objSortedList;
        rect = CurrentLevel.Last().GetComponent<RectTransform>();
        CurrentLevelSelected = CurrentLevel.Last();
        ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
        UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
        ToggleButtons();
    }

    public void FocusOnNearestObjectToCenter(float offset)
    {
        Vector3 screenCenter = new Vector3(Screen.width / 2f, Screen.height / 2f, 0);
        screenCenter.x += offset;
        CurrentLevel = CurrentLevel.OrderBy(o => Vector2.Distance(o.transform.position, screenCenter)).ToList();
        var nearestObject = CurrentLevel.First();
        if (nearestObject != null)
        {
            CurrentLevel = CurrentLevel.OrderBy(o => o.name).ToList();
            CurrentLevelSelected = nearestObject;
            rect = nearestObject.GetComponent<RectTransform>();
            StartCoroutine(ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 2f));
            UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
            ToggleButtons();
        }
    }

    public void FocusOnNextOrPrevious(float direction)
    {
        int indexOfCurrent = CurrentLevel.IndexOf(CurrentLevelSelected);
        switch (direction)
        {
            case 0:
                rect = CurrentLevel[indexOfCurrent - 1].GetComponent<RectTransform>();
                CurrentLevelSelected = CurrentLevel[indexOfCurrent - 1];
                break;

            case 1:
                rect = CurrentLevel[indexOfCurrent + 1].GetComponent<RectTransform>();
                CurrentLevelSelected = CurrentLevel[indexOfCurrent + 1];
                break;
        }
        ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
        ToggleButtons();
        UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
    }

    private void ToggleButtons()
    {
        List<GameObject> objSortedList = CurrentLevel.OrderBy(o => o.name).ToList();
        CurrentLevel = objSortedList;
        int indexOfCurrent = CurrentLevel.IndexOf(CurrentLevelSelected);
        if(CurrentLevel.Count > 1)
        {
            if (indexOfCurrent == 0)
            {
                buttonLeftSelector.SetActive(false);
                buttonRightSelector.SetActive(true);
            }
            else if (indexOfCurrent == CurrentLevel.Count - 1)
            {
                buttonLeftSelector.SetActive(true);
                buttonRightSelector.SetActive(false);
            }
            else
            {
                buttonRightSelector.SetActive(true);
                buttonLeftSelector.SetActive(true);
            }
        }
        else
        {
            buttonRightSelector.SetActive(false);
            buttonLeftSelector.SetActive(false);
        }
        
    }
}
