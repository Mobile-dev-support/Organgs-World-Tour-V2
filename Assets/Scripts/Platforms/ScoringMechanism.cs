using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class ScoringMechanism : MonoBehaviour
{
    public Sprite starSprite;
    private TextMeshProUGUI livesText;
    private TextMeshProUGUI coinsText;
    private float coinscore = 100f;
    private float timeMinusScore = 2f;

    public float NoOfLives { get; set; }
    public float coinNo { get; set; }
    public float score { get; set; }

    private static ScoringMechanism _instance;
    public static ScoringMechanism Instance { get { return _instance; } }

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
        if (DoorController.Instance.winCanvas != null)
        {
            GameObject golivesObj = GameObject.Find("lifetext");
            GameObject gocoinsObj = GameObject.Find("coinText");
            livesText = golivesObj.GetComponent<TextMeshProUGUI>();
            coinsText = gocoinsObj.GetComponent<TextMeshProUGUI>();
            coinsText.SetText("0");
            DoorController.Instance.winCanvas.transform.Find("bg").gameObject.SetActive(false);
        }
    }

    #region scoring
    public void NumberOfLives()
    {
        if(livesText != null)
            livesText.SetText(NoOfLives.ToString());
    }

    private void Scoring()
    {
        if (score >= 1000 && score < 2000)
        {
            DoorController.Instance.StarsNum = 1;
        }
        else if (score >= 2000 && score < 2500)
        {
            DoorController.Instance.StarsNum = 2;
        }
        else if (score >= 2500 && score < 3000)
        {
            DoorController.Instance.StarsNum = 3;
        }
    }

    public void coinScore()
    {
        coinNo++;
        score += coinscore;
        if (coinsText != null)
            coinsText.SetText(coinNo.ToString());
    }

    public void timeScore()
    {
        score -= timeMinusScore;
        Scoring();
    }
    #endregion

    #region IEnumerator
    public IEnumerator WinPanel()
    {
        DoorController.Instance.winCanvas.transform.Find("bg").gameObject.SetActive(true);
        GameObject[] stars = GameObject.FindGameObjectsWithTag("stars");
        yield return new WaitForEndOfFrame();
        for (int i = 0; i < DoorController.Instance.StarsNum; i++)
        {
            stars[i].gameObject.GetComponent<Image>().sprite = starSprite;
            if(stars[i].gameObject.GetComponent<DoTweenFeatures>() != null)
                stars[i].gameObject.GetComponent<DoTweenFeatures>().OnClick();
        }
    }
    #endregion
}
