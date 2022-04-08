using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class UIFocus : MonoBehaviour
{
    public List<GameObject> CurrentLevel = new List<GameObject>();
    private RectTransform rect;
    private GameObject objectOfFocus;
    public ScrollRect scroller;

    private static UIFocus _instance;
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
        rect = CurrentLevel.Last().GetComponent<RectTransform>();
        StartCoroutine(ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 2f));
    }

    public void FocusOnObjectImmediately()
    {
        rect = CurrentLevel.Last().GetComponent<RectTransform>();
        ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
    }
}
