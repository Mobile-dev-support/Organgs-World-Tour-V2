using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class CountdownTimer : MonoBehaviour
{
    public int minutes { get; set; }
    public int seconds { get; set; }
    public bool isGameOver { get; set ; }
    private float timeValue;
    private TextMeshProUGUI timerText;
    [SerializeField] private float defaultTime = 300;
    [SerializeField] private float extraTime = 60;
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

    private void Start()
    {
        isGameOver = false;
    }

    public void ResetTimer()
    {
        isGameOver = false;
        timeValue = defaultTime;
    }

    private void OnEnable()
    {
        InvokeRepeating("ScoreDecreaser", 1, 1);
        timerText = GetComponent<TextMeshProUGUI>();
    }

    private void OnDisable()
    {
        CancelInvoke();
    }

    public void ScoreDecreaser()
    {
        ScoringMechanism.Instance.timeScore();

        if (ScoringMechanism.Instance.score <= 0)
        {
            ScoringMechanism.Instance.score = 0;
        }
    }

    private void Update()
    {
        if (!isGameOver)
        {
            if (timeValue > 0)
            {
                timeValue -= Time.deltaTime;
            }
            else
            {
                timeValue = 0;
                if(Energy.Instance != null)
                {
                    Energy.Instance.UseLife();
                    if(Energy.Instance.currentLife < Energy.Instance.maxLifeData.maxLife)
                    {
                        if (Energy.Instance.currentLife > 0)
                        { 
                            Debug.Log("call");
                            MainMenu.Instance.Restart();
                            isGameOver = true;
                        }
                        else
                        {
                            MainMenu.Instance.GameOverLevel();
                            Fader.Instance.BGFader(true);
                            timeValue += extraTime;
                            Destroy(GameManager.Instance.Rplayer, 0.01f);
                            isGameOver = true;
                        }
                    }
                }
            }
        }
        DisplayTime(timeValue);
    }

    void DisplayTime(float timeToDisplay)
    {
        if(timeToDisplay < 0)
        {

            timeToDisplay = 0;
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

