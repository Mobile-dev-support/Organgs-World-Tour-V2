using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class UIFocus : MonoBehaviour
{
    public List<GameObject> CurrentLevel = new List<GameObject>();
    private RectTransform rect;
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
        for(int i = 0; i < CurrentLevel.Count; i++)
        {
            CurrentLevel[i].GetComponentInChildren<ParticleSystem>().Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
        }
        CurrentLevel.Last().GetComponentInChildren<ParticleSystem>().Play();
    }

    public void FocusOnObjectImmediately()
    {
        rect = CurrentLevel.Last().GetComponent<RectTransform>();
        ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
        for (int i = 0; i < CurrentLevel.Count; i++)
        {
            CurrentLevel[i].GetComponentInChildren<ParticleSystem>().Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
        }
        CurrentLevel.Last().GetComponentInChildren<ParticleSystem>().Play();
    }
}
