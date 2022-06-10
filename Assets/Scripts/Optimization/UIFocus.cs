using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class UIFocus : MonoBehaviour
{
    public List<RectTransform> CurrentLevel = new List<RectTransform>();
    private RectTransform rect;
    public ScrollRect scroller;
    public Transform UI_particle;
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
        rect = CurrentLevel.First();
        StartCoroutine(ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 2f));
        UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
    }

    public void FocusOnObjectImmediately()
    {
        rect = CurrentLevel.First();
        ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
        UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
    }
}
