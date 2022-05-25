using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class Tutorial : MonoBehaviour
{
    public List<string> tutorialScenes = new List<string>();
    [HideInInspector]
    public View view;
    public TextMeshProUGUI timerText;
    public Button playButton;
    public Toggle tutorialisOff;
    private Sequence Seq;
    private static Tutorial _instance;
    public static Tutorial Instance { get { return _instance; } }

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

    // Start is called before the first frame update
    public void TutorialOn()
    {
        view = GetComponent<View>();
        if (tutorialScenes.Contains(GameManager.Instance.sceneName) && !tutorialisOff.isOn)
        {
            view.Show();
            timerText.text = "00:00";
            Seq = DOTween.Sequence();
            Seq.Append(playButton.GetComponent<Image>().DOFade(1, .25f))
              .Append(playButton.GetComponent<Image>().DOFade(0, .25f)).SetLoops(-1, LoopType.Yoyo);
        }
    }
    public void TutorialOff()
    {
        view = GetComponent<View>();
        view.Hide();
        Seq.Kill();

    }

    public void RemoveTutorial()
    {
        view.Hide();
        CountdownTimer.Instance.enabled = true;
        Seq.Kill();
    }
}
