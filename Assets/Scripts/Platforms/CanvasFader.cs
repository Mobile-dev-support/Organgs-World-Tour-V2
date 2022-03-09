using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class CanvasFader : MonoBehaviour
{
    private float duration = 0.5f;
    private static CanvasFader _instance;
    public static CanvasFader Instance { get { return _instance; } }

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

    public void Fader(bool fade)
    {
        if (fade)
        {
            //gameObject.GetComponent<Image>().DOFade(1f, 1.5f);
            Sequence mySequence = DOTween.Sequence();
            mySequence.AppendInterval(0.5f);
            mySequence.Append(DOVirtual.Float(0, 1, duration, angle => {
                gameObject.GetComponent<Image>().fillAmount = angle;
            }));
            gameObject.GetComponent<GraphicRaycaster>().enabled = true;
        }
        else
        {
            //gameObject.GetComponent<Image>().DOFade(0f, 1f);
            DOVirtual.Float(1, 0, duration, angle => {
            gameObject.GetComponent<Image>().fillAmount = angle;
            });
            gameObject.GetComponent<GraphicRaycaster>().enabled = false;
        }

    }

    public void FadeImmediately()
    {
        Image image = gameObject.GetComponent<Image>();
        var tempColor = image.color;
        tempColor.a = 1f;
        image.color = tempColor;
    }
}
