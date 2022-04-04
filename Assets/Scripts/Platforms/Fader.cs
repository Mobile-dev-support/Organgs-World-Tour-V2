using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class Fader : MonoBehaviour
{
    private float duration = 0.5f;
    private View view;
    private static Fader _instance;
    public static Fader Instance { get { return _instance; } }

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

    private void Start()
    {
        view = GetComponent<View>();
    }

    public void BGFader(bool fade)
    {
        if (fade)
        {
            Sequence mySequence = DOTween.Sequence();
            mySequence.AppendInterval(0.5f);
            mySequence.Append(DOVirtual.Float(0, 1, duration, angle => {
                gameObject.GetComponent<Image>().fillAmount = angle;
            }));
            view.Show();
        }
        else
        {
            DOVirtual.Float(1, 0, duration, angle => {
            gameObject.GetComponent<Image>().fillAmount = angle;
            }).OnComplete(HideView);
        }
    }

    private void HideView()
    {
        view.Hide();
    }

    public void FadeImmediately()
    {
        gameObject.GetComponent<Image>().fillAmount = 1;
    }
}
