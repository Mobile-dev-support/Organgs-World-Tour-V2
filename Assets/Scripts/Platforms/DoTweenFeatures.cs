using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class DoTweenFeatures : MonoBehaviour
{
    [Header("IF PANEL")]
    public Vector3 panel;
    [Header("IF BUTTON")]
    public Vector3 button;
    [Header("IF STAR")]
    public Vector3 star;
    [Header("OTHER SETTINGS")]
    public float duration;
    public int vibration;
    public float elasticity;
    public enum State
    {
        Panel,
        Button,
        Star,
        Text,
        RevolvingObj,
    }
    public State state;

    private void OnEnable()
    {
        if (state == State.Star 
            || state == State.Panel 
                || state == State.Text 
                    || state == State.RevolvingObj)
        {
            OnClick();

        }
    }

    private void Start()
    {
        if(gameObject.GetComponent<Button>() != null)
        {
            gameObject.GetComponent<Button>().onClick.AddListener(OnClick);
        }
    }

    public void OnClick()
    {
        switch (state)
        {
            case State.Panel:
                Sequence panelSeq = DOTween.Sequence();
                panelSeq.Append(gameObject.GetComponent<Transform>().DOScale(new Vector3(0, 0, 0), 0.01f)).SetUpdate(true)
                  .Append(gameObject.GetComponent<Transform>().DOScale(panel, duration)).SetUpdate(true);
                break;
            case State.Button:
                gameObject.GetComponent<Transform>().DOPunchScale(button, duration, vibration, elasticity);
                break;
            case State.Star:
                gameObject.GetComponent<Transform>().DOPunchScale(star, duration, vibration, elasticity);
                break;
            case State.Text:
                Sequence textSeq = DOTween.Sequence();
                textSeq.Append(gameObject.GetComponent<TextMeshProUGUI>().DOFade(0, 0.01f))
                  .Append(gameObject.GetComponent<TextMeshProUGUI>().DOFade(1, duration))
                  .Append(gameObject.GetComponent<TextMeshProUGUI>().DOFade(0, duration)).OnComplete (
                    () => gameObject.SetActive(false));
                break;
            case State.RevolvingObj:
                gameObject.GetComponent<Transform>().DORotate(star, duration, RotateMode.FastBeyond360);
                break;
            default:
                break;
        }
    }

}
