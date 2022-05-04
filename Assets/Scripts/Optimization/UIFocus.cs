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
        rect = CurrentLevel.Last().GetComponent<RectTransform>();
        StartCoroutine(ScrollViewFocusFunctions.FocusOnItemCoroutine(scroller, rect, 2f));
        UI_particle.GetComponent<ParticleSystem>().Play();
        UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
        UI_particle.SetParent(rect.transform);
    }

    public void FocusOnObjectImmediately()
    {
        rect = CurrentLevel.Last().GetComponent<RectTransform>();
        ScrollViewFocusFunctions.FocusOnItem(scroller, rect);
        UI_particle.GetComponent<ParticleSystem>().Play();
        UI_particle.SetPositionAndRotation(rect.position, Quaternion.identity);
        UI_particle.SetParent(rect.transform);
    }
}
