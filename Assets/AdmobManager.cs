using UnityEngine;
using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using GoogleMobileAds.Common;
using GoogleMobileAds.Api;
using UnityEngine.Events;
public class AdmobManager : MonoBehaviour
{
    private static AdmobManager instance;
    private RewardedInterstitialAd rewardBasedInterstitialAd;
    public string androidRewardBasedInterstitialAdUnitID;
    public string IOSRewardBasedInterstitialAdUnitID;
    private int adCompletionType = 0;

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            instance = this;
        }
    }
    void Start()
    {
        MobileAds.SetiOSAppPauseOnBackground(true);
        
        //testDeviceIDS.Add(AdRequest.TestDeviceSimulator);

        // Configure TagForChildDirectedTreatment and test device IDs.
        var requestConfiguration =
            new RequestConfiguration();
        //.SetTagForChildDirectedTreatment(tagForChildDirectedTreatment)
        //.SetTagForUnderAgeOfConsent(tagForUnderAgeOfConsent)
        //.SetTestDeviceIds(testDeviceIDS).build();

        MobileAds.SetRequestConfiguration(requestConfiguration);

        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(HandleInitCompleteAction);
    }

    private void HandleInitCompleteAction(InitializationStatus initstatus)
    {
        // Callbacks from GoogleMobileAds are not guaranteed to be called on
        // main thread.
        // In this example we use MobileAdsEventExecutor to schedule these calls on
        // the next Update() loop.
        MobileAdsEventExecutor.ExecuteInUpdate(() =>
        {
            Debug.Log("Initialization complete");
            RequestRewardInterstitialAd();
        });
    }

    private void RequestRewardInterstitialAd()
    {
#if UNITY_ANDROID
        string adUnitId = androidRewardBasedInterstitialAdUnitID;
#elif UNITY_IPHONE
			            string adUnitId = IOSRewardBasedInterstitialAdUnitID;
#else
			            string adUnitId = "unexpected_platform";
#endif

        adUnitId = adUnitId.Trim();

        if (string.IsNullOrEmpty(adUnitId))
        {
            return;
        }

        AdRequest request = CreateAdRequest();

        RewardedInterstitialAd.Load(adUnitId, request,
          (RewardedInterstitialAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("Rewarded ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Rewarded ad loaded with response : "
                        + ad.GetResponseInfo());

              rewardBasedInterstitialAd = ad;
              
          });
    }

    public void ShowRewardedAd(int type)
    {
        //if admob is initialized, rewarded ad is not empty, and it is loaded
        if (rewardBasedInterstitialAd != null && rewardBasedInterstitialAd.CanShowAd())
        {
            rewardBasedInterstitialAd.OnAdFullScreenContentClosed += OnAdClosed;
            rewardBasedInterstitialAd.Show((Reward reward) =>
            {
                adCompletionType = type;
            });

        }
        else
        {
            RequestRewardInterstitialAd();

        }
    }

    public IEnumerator HandleUserEarnedReward()
    {
        yield return new WaitForEndOfFrame();
        switch (adCompletionType)
        {
            case 1:
                adCompletionType = 0;
                RewardsManager.instance.RewardedAdsForLivesComplete();
                RequestRewardInterstitialAd();
                break;
            case 2:
                adCompletionType = 0;
                RewardsManager.instance.RewardedAdsForTimeComplete();
                RequestRewardInterstitialAd();
                break;
        }
    }

    public void OnAdClosed()
    {
        StartCoroutine(HandleUserEarnedReward());

    }

    private AdRequest CreateAdRequest()
    {
        return new AdRequest();
    }

}

