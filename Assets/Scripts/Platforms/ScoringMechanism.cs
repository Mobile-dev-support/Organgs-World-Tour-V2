using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class ScoringMechanism : MonoBehaviour
{
    public Sprite starSprite;
    public TextMeshProUGUI livesText;
    public TextMeshProUGUI coinsText;
    public TextMeshProUGUI coinsNumber;
    public Button NextLevelBtn;
    private float coinscore = 100f;
    private float timeMinusScore = 2f;
    public Image[] stars;
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

    #region scoring
    public void NumberOfLives()
    {
        livesText.SetText(NoOfLives.ToString());
    }

    public void Scoring()
    {
        if (score >= 1000 && score <= 2000)
        {
            DoorController.Instance.StarsNum = 1;
            stars[0].sprite = starSprite;
        }
        else if (score >= 2000 && score <= 2500)
        {
            DoorController.Instance.StarsNum = 2;
            stars[0].sprite = starSprite;
            stars[1].sprite = starSprite;
        }
        else if (score >= 2500 && score <= 3000)
        {
            DoorController.Instance.StarsNum = 3;
            stars[0].sprite = starSprite;
            stars[1].sprite = starSprite;
            stars[2].sprite = starSprite;
        }
        SoundManager.Instance.winSound(MainMenu.Instance.win);
    }

    public void coinScore()
    {
        coinNo++;
        score += coinscore;
        coinsText.SetText(coinNo.ToString());
    }

    public void timeScore()
    {
        score -= timeMinusScore;
        Debug.Log(score);
    }
    #endregion
}
