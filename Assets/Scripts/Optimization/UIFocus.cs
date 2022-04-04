using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class UIFocus : MonoBehaviour
{
    public List<int> CurrentLevel = new List<int>();
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
        objectOfFocus = GameObject.Find(CurrentLevel.Last().ToString());
        rect = objectOfFocus.GetComponent<RectTransform>();
        StartCoroutine(ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 2f));
    }

    public void FocusOnObjectImmediately()
    {
        objectOfFocus = GameObject.Find(CurrentLevel.Last().ToString());
        rect = objectOfFocus.GetComponent<RectTransform>();
        ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
    }
}
