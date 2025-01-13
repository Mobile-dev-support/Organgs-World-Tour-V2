using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class BasicLife : MonoBehaviour
{
    public int life { get; set; }

    const int secondsBetweenRegeneration = 300;
    public int extraLife { get; set; }
    public int lifeLimit { get; set; }
    public TextMeshProUGUI lifeText;
    public TextMeshProUGUI lifeTextGlobal;
    public TextMeshProUGUI lifeRegenerationDurationText;
    public TextMeshProUGUI lifeRegenerationDurationTextGame;
    public GameObject extraLifeContainer;
    public TextMeshProUGUI extraLifeText;
    public GameObject extraLifeContainerGlobal;
    public TextMeshProUGUI extraLifeTextGlobal;
    private static BasicLife _instance;
    public static BasicLife Instance { get { return _instance; } }

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

        if (PlayerPrefs.HasKey("Life"))
        {
            life = PlayerPrefs.GetInt("Life");
        }
        else
        {
            life = 20;
            PlayerPrefs.SetInt("Life", 20);
        }

        if (PlayerPrefs.HasKey("LifeLimit"))
        {
            lifeLimit = PlayerPrefs.GetInt("LifeLimit");
            Debug.Log("Set Life Limit: " + lifeLimit);
        }
        else
        {
            lifeLimit = 20;
            PlayerPrefs.SetInt("LifeLimit", 20);
        }

        if (PlayerPrefs.HasKey("ExtraLife"))
        {
            extraLife = PlayerPrefs.GetInt("ExtraLife");
        }
        else
        {
            extraLife = 0;
            PlayerPrefs.SetInt("ExtraLife", 0);
        }

    }

    private void Start()
    {
        CalculateRegeneratedLivesInGameRun();
        StartCoroutine(LifeCheck());
        StartCoroutine(LifeRegenerationCheck());
    }

    public void RestoreLivesToLimit()
    {
        life = lifeLimit;
        SaveCurrentLife();
    }

    public void AddLife(int lifeToAdd)
    {
        life += lifeToAdd;
        SaveCurrentLife();
    }

    public void AddExtraLife(int extraLifeToAdd)
    {
        extraLife += extraLifeToAdd;
        SaveCurrentExtraLife();
    }

    public void SubtractLife(int lifeToSubtract)
    {
        life -= lifeToSubtract;
        SaveCurrentLife();
    }

    public void SubtractExtraLife(int extraLifeToSubtract)
    {
        extraLife -= extraLifeToSubtract;
        SaveCurrentExtraLife();
    }

    public void SetLifeLimit(int lifeLimitToSet)
    {
        lifeLimit = lifeLimitToSet;
        SaveCurrentLifeLimit();
    }


    private void SaveCurrentLife()
    {
        PlayerPrefs.SetInt("Life", life);
    }

    private void SaveCurrentExtraLife()
    {
        PlayerPrefs.SetInt("ExtraLife", extraLife);
    }

    private void SaveCurrentLifeLimit()
    {
        PlayerPrefs.SetInt("LifeLimit", lifeLimit);
    }

    private IEnumerator LifeCheck()
    {
        while (true)
        {
            lifeText.SetText("{0}/{1}", life, lifeLimit);
            lifeTextGlobal.SetText("{0}/{1}", life, lifeLimit);
            if (extraLife > 0)
            {
                extraLifeContainer.SetActive(true);
                extraLifeContainerGlobal.SetActive(true);
                extraLifeText.SetText("+{0}", extraLife);
                extraLifeTextGlobal.SetText("+{0}", extraLife);
            }
            else
            {
                extraLifeContainer.SetActive(false);
                extraLifeContainerGlobal.SetActive(false);
            }
            yield return null;
        }
    }

    private IEnumerator LifeRegenerationCheck()
    {
        while (true)
        {
            PlayerPrefs.SetString("LastRecordedTime", DateTime.Now.ToString());
            if (life < lifeLimit)
            {
                if(!PlayerPrefs.HasKey("LastTimeBelowLifeLimit"))
                {
                    SetNextRegenerationDate();
                }
                else
                {
                  
                    var lastRecordedTime = DateTime.Parse(PlayerPrefs.GetString("LastRecordedTime"));
                    var nextDateToRegenerate = DateTime.Parse(PlayerPrefs.GetString("NextTimeToRegenerate"));
                    if(lastRecordedTime == nextDateToRegenerate)
                    {
                        AddLife(1);;
                        SetNextRegenerationDate();
                    }
                    else
                    {
                        CalculateRegeneratedLivesInGameRun();
                    }

                   
                }

                TimeSpan difference = DateTime.Parse(PlayerPrefs.GetString("NextTimeToRegenerate")) - DateTime.Now;

                // Get the total seconds
                double totalSeconds = difference.TotalSeconds+1;
                Debug.Log("Total Seconds" + totalSeconds);
                //int hours = (int)totalSeconds / 3600;
                int minutes = (int)(totalSeconds % 3600) / 60;
                int seconds = (int)totalSeconds % 60;
                //string durationBeforeRegeneration = string.Format("{0:D2}:{1:D2}:{2:D2}", hours, minutes, seconds);
                string durationBeforeRegeneration = string.Format("{0:D2}:{1:D2}", minutes, seconds);
                lifeRegenerationDurationText.text = durationBeforeRegeneration;
                lifeRegenerationDurationTextGame.text = durationBeforeRegeneration;
            }
            else
            {
                if(PlayerPrefs.HasKey("LastTimeBelowLifeLimit"))
                {
                    PlayerPrefs.DeleteKey("LastTimeBelowLifeLimit");
                }
                lifeRegenerationDurationText.text = "";
                lifeRegenerationDurationTextGame.text = "";
            }
            yield return null;
        }
    }

    private void SetNextRegenerationDate()
    {
        var currentDate = DateTime.Now;
        PlayerPrefs.SetString("LastTimeBelowLifeLimit", currentDate.ToString());
        var nextDateToRegenerate = DateTime.Now.AddSeconds(secondsBetweenRegeneration);
        PlayerPrefs.SetString("NextTimeToRegenerate", nextDateToRegenerate.ToString());
    }

    private void CalculateRegeneratedLivesInGameRun()
    {
        
        if (PlayerPrefs.HasKey("NextTimeToRegenerate") && (DateTime.Now > DateTime.Parse(PlayerPrefs.GetString("NextTimeToRegenerate"))))
        {
            if(life < lifeLimit)
            {
                var dateTimeToRegenerate = DateTime.Parse(PlayerPrefs.GetString("NextTimeToRegenerate"));
                var timePassedSinceLastRegeneration = (DateTime.Now - dateTimeToRegenerate);
                double totalSeconds = timePassedSinceLastRegeneration.TotalSeconds;
                Debug.Log("Seconds passed since last record" + timePassedSinceLastRegeneration + " DateTimeNow:" + DateTime.Now + " DateTimeToRegenerate:" + dateTimeToRegenerate);
                int livesToAdd = (int)(totalSeconds / secondsBetweenRegeneration);
                if(life + livesToAdd < lifeLimit)
                {
                    AddLife(livesToAdd);
                    PlayerPrefs.SetString("LastTimeBelowLifeLimit", dateTimeToRegenerate.AddSeconds(secondsBetweenRegeneration * livesToAdd).ToString());
                    var nextDateToRegenerate = dateTimeToRegenerate.AddSeconds(secondsBetweenRegeneration * (livesToAdd + 1)).ToString();
                    PlayerPrefs.SetString("NextTimeToRegenerate", nextDateToRegenerate);
                }
                else
                {
                    Debug.Log("Bruhhhh");
                    RestoreLivesToLimit();
                    PlayerPrefs.DeleteKey("LastTimeBelowLifeLimit");
                    var nextDateToRegenerate = dateTimeToRegenerate.AddSeconds(secondsBetweenRegeneration * (livesToAdd + 1)).ToString();
                    PlayerPrefs.DeleteKey("NextTimeToRegenerate");
                }
               
            }
          
        }
    }
}
