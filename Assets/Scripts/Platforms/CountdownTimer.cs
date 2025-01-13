using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;

public class CountdownTimer : MonoBehaviour
{
    public int minutes { get; set; }
    public int seconds { get; set; }

    public TextMeshProUGUI timerText;
    public TextMeshProUGUI timeFinishedText;

    private float timeValue;
    private static CountdownTimer _instance;
    public static CountdownTimer Instance { get { return _instance; } }

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

    private void OnEnable()
    {
        //InvokeRepeating("ScoreDecreaser", 1, 1);
    }

    private void OnDisable()
    {
        CancelInvoke();
        timeFinishedText.SetText("{0:00}:{1:00}", minutes, seconds);
    }

    public void ResetTimer()
    {
        timeValue = 300;
    }

    public void SetTimer(int time)
    {
        timeValue = time;
    }

    public void ScoreDecreaser()
    {
        if (ScoringMechanism.Instance.score >= 0)
        {
            Debug.Log("BRUHHHH");
            //ScoringMechanism.Instance.timeScore();
        }
    }

    private void Update()
    {
        DisplayTime(timeValue);  
    }

    void DisplayTime(float timeToDisplay)
    {
        timeValue -= Time.deltaTime;

        if (timeToDisplay <= 0)
        {
            timeToDisplay = 0;
            if (Fader.Instance != null)
            {
                Fader.Instance.BGFader(true);
                GameManager.Instance.Rplayer.SetActive(false);
                CountdownTimer.Instance.enabled = false;
                MainMenu.Instance.GameOverScreen(2);
            }
           
        }
        else if(timeToDisplay > 0)
        {
            timeToDisplay += 1;
        }

        minutes = Mathf.FloorToInt(timeToDisplay / 60);
        seconds = Mathf.FloorToInt(timeToDisplay % 60);
        timerText.SetText("{0:00}:{1:00}", minutes, seconds);
    }
}

