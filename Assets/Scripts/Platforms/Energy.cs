using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class Energy : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI[] lifeTxt;
    [SerializeField] private Slider[] lifeBar;
    [SerializeField] private TextMeshProUGUI timerTxt;
    [SerializeField] private Button AdButton;
    [HideInInspector] public int maxLife = 99;
    public int currentLife { get; set; }
    private int restorDuration = 1;
    private DateTime nextLifeTime;
    private DateTime lastLifeTime;
    private bool isRestoring = false;
    [Header("REWARDED ADS")]
    private DateTime nextAdTime;
    private DateTime lastAdTime;
    private int restoreAdDuration = 3;
    private int maxRewardedAd = 2;
    [HideInInspector] public int currentRewardedAd;
    private bool isRestoringAd = false;
    [SerializeField] private TextMeshProUGUI AdTimer;

    private static Energy _instance;
    public static Energy Instance { get { return _instance; } }

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

    #region functions
    // Start is called before the first frame update
    void Start()
    {
        // PlayerPrefs.DeleteAll();
        AdTimer.gameObject.SetActive(false);
        if (!PlayerPrefs.HasKey("currentLife"))
        {
            PlayerPrefs.SetInt("currentLife", maxLife);
            Load();
            StartCoroutine(RestoreLife());
            StartCoroutine(RestoreRewardedAd());
        }
        else
        {
            Load();
            StartCoroutine(RestoreLife());
            StartCoroutine(RestoreRewardedAd());
        }
    }

    public void UseLife()
    {
        if (currentLife > 0)
        {
            currentLife--;
            UpdateLife();
            if (!isRestoring)
            {
                if (currentLife + 1 == maxLife)
                {
                    nextLifeTime = AddDuration(DateTime.Now, restorDuration);
                }

                StartCoroutine(RestoreLife());
            }
        }
        else
        {
            Debug.Log("Insufficient Energy");
        }
    }

    public void AddALife()
    {
        if(currentRewardedAd > 0)
        {
            currentLife++;
            RewardedAdCount();
            StartCoroutine(RestoreLife());
        }
        else
        {
            RewardedAdCount();
        }

    }

    private void RewardedAdCount()
    {
        if (currentRewardedAd > 0)
        {
            currentRewardedAd--;
            if (!isRestoringAd)
            {
                if (currentRewardedAd + 1 == maxRewardedAd)
                {
                    nextAdTime = AddDuration(DateTime.Now, restoreAdDuration);
                }

                StartCoroutine(RestoreRewardedAd());
            }
        }
        else
        {
            AdTimer.gameObject.SetActive(true);
        }
    }
    #endregion

    #region AdTimer
    private IEnumerator RestoreRewardedAd()
    {
        UpdateAdTimer();
        isRestoringAd = true;

        while (currentRewardedAd < maxRewardedAd)
        {
            DateTime currenAdtDateTime = DateTime.Now;
            DateTime nextAdDateTime = nextAdTime;
            bool isAdAdding = false;

            while (currenAdtDateTime > nextAdDateTime)
            {
                if (currentRewardedAd < maxRewardedAd)
                {
                    isAdAdding = true;
                    currentRewardedAd++;
                    DateTime timeToAddAd = lastAdTime > nextAdDateTime ? lastAdTime : nextAdDateTime;
                    nextAdDateTime = AddDuration(timeToAddAd, restoreAdDuration);
                }
                else
                {

                    break;
                }
            }

            if (isAdAdding)
            {
                lastAdTime = DateTime.Now;
                nextAdTime = nextAdDateTime;
            }

            UpdateAdTimer();
            Save();
            yield return null;
        }
        isRestoringAd = false;
    }

    private void UpdateAdTimer()
    {
        TimeSpan Adtime = nextAdTime - DateTime.Now;
        AdTimer.SetText("You have exceeded the maximum amount of playable ads, try again later!");
        //AdTimer.SetText("{0:00}:{1:00}", Adtime.Minutes, Adtime.Seconds);
    }
    #endregion

    #region LifeTimer
    private IEnumerator RestoreLife()
    {
        UpdateLifeTimer();
        UpdateLife();
        isRestoring = true;

        while (currentLife < maxLife)
        {
            DateTime currentDateTime = DateTime.Now;
            DateTime nextDateTime = nextLifeTime;
            bool isLifeAdding = false;
            AdButton.interactable = true;

            while (currentDateTime > nextDateTime)
            {
                if(currentLife < maxLife)
                {
                    isLifeAdding = true;
                    currentLife++;
                    UpdateLife();
                    DateTime timeToAdd = lastLifeTime > nextDateTime ? lastLifeTime : nextDateTime;
                    nextDateTime = AddDuration(timeToAdd, restorDuration);
                }
                else
                {

                    break;
                }
            }

            if (isLifeAdding)
            {
                lastLifeTime = DateTime.Now;
                nextLifeTime = nextDateTime;
            }

            UpdateLifeTimer();
            UpdateLife();
            Save();
            yield return null;
        }
        AdButton.interactable = false;
        isRestoring = false;
    }

    private void UpdateLifeTimer()
    {
        if(currentLife >= maxLife)
        {
            timerTxt.text = "Full";
            return;
        }

        TimeSpan time = nextLifeTime - DateTime.Now;
        timerTxt.SetText("{0:00}:{1:00}", time.Minutes, time.Seconds);
    }

    private void UpdateLife()
    {
        for(int i = 0; i < lifeTxt.Length; i++)
        {
            lifeTxt[i].SetText(currentLife.ToString() + "/" + maxLife.ToString());
        }
        for (int i = 0; i < lifeBar.Length; i++)
        {
            lifeBar[i].maxValue = maxLife;
            lifeBar[i].value = currentLife;
        }
    }
    #endregion

    #region others
    private DateTime AddDuration(DateTime datetime, int duration)
    {
        //return dateTime.AddSeconds(duration);
        return datetime.AddMinutes(duration);
    }

    private DateTime StringToDate(string datetime)
    {
        if (String.IsNullOrEmpty(datetime))
        {
            return DateTime.Now;
        }
        else
        {
            return DateTime.Parse(datetime);
        }
    }

    private void Load()
    {
        currentLife = PlayerPrefs.GetInt("currentLife");
        nextLifeTime = StringToDate(PlayerPrefs.GetString("nextLifeTime"));
        lastLifeTime = StringToDate(PlayerPrefs.GetString("lastLifeTime"));
        nextAdTime = StringToDate(PlayerPrefs.GetString("nextAdTime"));
        lastAdTime = StringToDate(PlayerPrefs.GetString("lastAdTime"));
    }

    private void Save()
    {
        PlayerPrefs.SetInt("currentLife", currentLife);
        PlayerPrefs.SetString("nextLifeTime", nextLifeTime.ToString());
        PlayerPrefs.SetString("lastLifeTime", lastLifeTime.ToString());
        PlayerPrefs.SetString("nextAdTime", nextLifeTime.ToString());
        PlayerPrefs.SetString("lastAdTime", lastLifeTime.ToString());
    }
    #endregion
}
