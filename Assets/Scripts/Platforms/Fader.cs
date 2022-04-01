using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class Fader : MonoBehaviour
{
    private float duration = 0.5f;
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

    public void BGFader(bool fade)
    {
        if (fade)
        {
            Sequence mySequence = DOTween.Sequence();
            mySequence.AppendInterval(0.5f);
            mySequence.Append(DOVirtual.Float(0, 1, duration, angle => {
                gameObject.GetComponent<Image>().fillAmount = angle;
            }));
            gameObject.GetComponent<GraphicRaycaster>().enabled = true;
        }
        else
        {
            DOVirtual.Float(1, 0, duration, angle => {
            gameObject.GetComponent<Image>().fillAmount = angle;
            });
            gameObject.GetComponent<GraphicRaycaster>().enabled = false;
        }

    }

    public void FadeImmediately()
    {
        gameObject.GetComponent<Image>().fillAmount = 1;
    }
}
