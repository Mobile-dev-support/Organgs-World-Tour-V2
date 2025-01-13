using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;

public class CountdownTimer : MonoBehaviour
{
    public int minutes { get; set; }
    public int seconds { get; set; }
    public bool isGameOver { get; set ; }
    private float timeValue;
    public TextMeshProUGUI timerText;
    [SerializeField] private float defaultTime = 300;
    [SerializeField] private float extraTime = 60;
    [SerializeField] private AudioClip beep;
    private static CountdownTimer _instance;
    private bool time;
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
        timerText.DOColor(Color.white, 0f);
    }

    public void ResetTimer()
    {
        isGameOver = false;
        timeValue = defaultTime;
    }

    private void OnEnable()
    {
<<<<<<< Updated upstream
        time = true;
        StartCoroutine(NearTime());
        InvokeRepeating("ScoreDecreaser", 1, 1);
=======
        //InvokeRepeating("ScoreDecreaser", 1, 1);
>>>>>>> Stashed changes
    }

    private void OnDisable()
    {
        CancelInvoke();
<<<<<<< Updated upstream
        time = false;
=======
        timeFinishedText.SetText("{0:00}:{1:00}", minutes, seconds);
    }

    public void ResetTimer()
    {
        timeValue = 300;
    }

    public void SetTimer(int time)
    {
        timeValue = time;
>>>>>>> Stashed changes
    }

    public void ScoreDecreaser()
    {
        ScoringMechanism.Instance.timeScore();

        if (ScoringMechanism.Instance.score <= 0)
        {
<<<<<<< Updated upstream
            ScoringMechanism.Instance.score = 0;
=======
            Debug.Log("BRUHHHH");
            //ScoringMechanism.Instance.timeScore();
>>>>>>> Stashed changes
        }
    }

    private void Update()
    {
<<<<<<< Updated upstream
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
                    if(Energy.Instance.extraLife < 0)
                    {
                        if (Energy.Instance.currentLife < Energy.Instance.maxLifeData.maxLife)
                        {
                            if (Energy.Instance.currentLife > 0)
                            {
                                Debug.Log("stil have current lives");
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
                    else
                    {
                        Debug.Log("no more extra lives");
                        MainMenu.Instance.Restart();
                        isGameOver = true;
                    }
                }
            }
        }
        DisplayTime(timeValue);
=======
        DisplayTime(timeValue);  
>>>>>>> Stashed changes
    }

    void DisplayTime(float timeToDisplay)
    {
<<<<<<< Updated upstream
        if(timeToDisplay < 0)
=======
        timeValue -= Time.deltaTime;

        if (timeToDisplay <= 0)
>>>>>>> Stashed changes
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

    private IEnumerator NearTime()
    {
        while (time)
        {
            if(timeValue <= 20 && timeValue > 0 && GameManager.Instance != null)
            {
                timerText.DOColor(Color.red, 0.3f);
                timerText.transform.DOShakeScale(0.3f, 1, 10, 0);
                SoundManager.Instance.BeepTimer(beep);
            }
            yield return new WaitForSeconds(1f);
        }
    }

}

