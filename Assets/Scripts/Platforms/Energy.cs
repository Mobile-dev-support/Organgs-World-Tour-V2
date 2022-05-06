﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using UnityEngine.Purchasing;
using TMPro;
using System;

public class Energy : MonoBehaviour, IStoreListener
{
    #region variables
    [SerializeField] private TextMeshProUGUI[] lifeTxt;
    [SerializeField] private Slider[] lifeBar;
    [SerializeField] private TextMeshProUGUI[] extraLivesTxt;
    [SerializeField] private TextMeshProUGUI timerTxt;
    [SerializeField] private Button nonConsumableBtn;
    [SerializeField] private Button AdButton;

    private int restorDuration = 3;
    private DateTime nextLifeTime;
    private DateTime lastLifeTime;
    private bool isRestoring = false;
    public int extraLife { get; set; }
    public int currentLife { get; set; }
    [SerializeField] private TextMeshProUGUI AdTimer;
    public EnergymaxLife maxLifeData;

    private static IStoreController m_StoreController;
    private static IExtensionProvider m_StoreExtensionProvider;

    public static string expand = "com.purplebug.wt.expandlives";
    public static string restore = "com.purplebug.wt.restore";
    public static string life10 = "com.purplebug.wt.10lives";
    public static string life30 = "com.purplebug.wt.30lives";
    public static string life70 = "com.purplebug.wt.70lives";
    private InterstitialAd interstitial;
    private RewardedAd rewardedAd;
    private AppOpenAd ad;
    private bool isShowingAd = false;

    private static Energy _instance;
    public static Energy Instance { get { return _instance; } }
    #endregion

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
        if (m_StoreController == null)
        {
            InitializePurchasing();
        }
        MobileAds.Initialize((initStatus => { }));
        this.RequestNewAds();
        Initialize();
    }

    public void Initialize()
    {
        AdTimer.gameObject.SetActive(false);
        if (!PlayerPrefs.HasKey("currentLife"))
        {
            maxLifeData.maxLife = 10;
            extraLife = 0;
            PlayerPrefs.SetInt("currentLife", maxLifeData.maxLife);
            Load();
            StartCoroutine(RestoreLife());
        }
        else
        {
            Load();
            StartCoroutine(RestoreLife());
        }
    }

    public void UseLife()
    {
        if(extraLife > 0)
        {
            extraLife--;
        }
        else
        {
            if (currentLife > 0)
            {
                currentLife--;
                if (!isRestoring)
                {
                    if (currentLife + 1 == maxLifeData.maxLife)
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
        UpdateLife();
        Save();
    }

    public void AddALife()
    {
        showRewardedAd();
    }
    #endregion

    #region LifeTimer
    private IEnumerator RestoreLife()
    {
        UpdateLifeTimer();
        UpdateLife();
        isRestoring = true;

        while (currentLife < maxLifeData.maxLife)
        {
            DateTime currentDateTime = DateTime.Now;
            DateTime nextDateTime = nextLifeTime;
            bool isLifeAdding = false;
            AdButton.interactable = true;

            while (currentDateTime > nextDateTime)
            {
                if(currentLife < maxLifeData.maxLife)
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
        if(currentLife >= maxLifeData.maxLife)
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
            lifeTxt[i].SetText(currentLife.ToString() + "/" + maxLifeData.maxLife.ToString());
        }
        for (int i = 0; i < lifeBar.Length; i++)
        {
            lifeBar[i].maxValue = maxLifeData.maxLife;
            lifeBar[i].value = currentLife;
        }
        for (int i = 0; i < extraLivesTxt.Length; i++)
        {
            extraLivesTxt[i].SetText("+" + extraLife.ToString());
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
        extraLife = PlayerPrefs.GetInt("extraLife");
        nextLifeTime = StringToDate(PlayerPrefs.GetString("nextLifeTime"));
        lastLifeTime = StringToDate(PlayerPrefs.GetString("lastLifeTime"));
    }

    private void Save()
    {
        PlayerPrefs.SetInt("currentLife", currentLife);
        PlayerPrefs.SetInt("extraLife", extraLife);
        PlayerPrefs.SetString("nextLifeTime", nextLifeTime.ToString());
        PlayerPrefs.SetString("lastLifeTime", lastLifeTime.ToString());
    }
    #endregion

    #region Ad Mobs
    public void RequestNewAds()
    {
        this.RequestInterstitial();
        this.RequestRewarded();
        this.RequestLoadOpenAd();
    }

    private bool IsAdAvailable
    {
        get
        {
            return ad != null;
        }
    }

    public void RequestLoadOpenAd()
    {
#if UNITY_ANDROID
        string AD_UNIT_ID = "ca-app-pub-2161356203087661/1878654308";
#elif UNITY_IOS
        string AD_UNIT_ID = "ca-app-pub-2161356203087661/1878654308";
#else
        string AD_UNIT_ID = "unexpected_platform";
#endif
        AdRequest request = new AdRequest.Builder().Build();
        // Load an app open ad for portrait orientation
        AppOpenAd.LoadAd(AD_UNIT_ID, ScreenOrientation.Landscape, request, ((appOpenAd, error) =>
        {
            if (error != null)
            {
                // Handle the error.
                Debug.LogFormat("Failed to load the ad. (reason: {0})", error.LoadAdError.GetMessage());
                return;
            }
            // App open ad is loaded.
            ad = appOpenAd;
        }));
    }

    public void OnApplicationPause(bool paused)
    {
        // Display the app open ad when the app is foregrounded
        if (!paused)
        {
            ShowAdIfAvailable();
        }
    }

    public void RequestInterstitial()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-2161356203087661/5559686231";
#elif UNITY_IOS
        string adUnitId = "ca-app-pub-2161356203087661/6681196218";
#else
        string adUnitId = "unexpected_platform";
#endif

        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(adUnitId);
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);

        this.interstitial.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
    }

    public void RequestRewarded()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-2161356203087661/8530700286";
#elif UNITY_IOS
        string adUnitId = "ca-app-pub-2161356203087661/1946477617";
#else
        string adUnitId = "unexpected_platform";
#endif
        this.rewardedAd = new RewardedAd(adUnitId);
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);

        this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when an ad request failed to load.
        this.rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        this.rewardedAd.OnAdClosed += HandleRewardedAdClosed;
    }

    public void showRewardedAd()
    {
        //if admob is initialized, rewarded ad is not empty, and it is loaded
        if (rewardedAd.IsLoaded())
        {
            rewardedAd.Show();
        }
    }

    public void showInterstitialAd()
    {
        //if admob is initialized, interstitial ad is not empty, and it is loaded
        // if (isInitialized && interstitial != null && interstitial.IsLoaded())
        if (interstitial.IsLoaded())
        {
            interstitial.Show();
        }
    }

    public void ShowAdIfAvailable()
    {
        if (!IsAdAvailable || isShowingAd)
        {
            return;
        }

        ad.OnAdDidDismissFullScreenContent += HandleAdDidDismissFullScreenContent;
        ad.OnAdFailedToPresentFullScreenContent += HandleAdFailedToPresentFullScreenContent;
        ad.OnAdDidPresentFullScreenContent += HandleAdDidPresentFullScreenContent;
        ad.OnAdDidRecordImpression += HandleAdDidRecordImpression;
        ad.OnPaidEvent += HandlePaidEvent;

        ad.Show();
    }


    public void HandleUserEarnedReward(object sender, Reward args)
    {
        currentLife++;
        StartCoroutine(RestoreLife());
        MainMenu.Instance.AddLife();
    }

    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        RequestRewarded();
        MonoBehaviour.print("HandleRewardedAdClosed event received");
    }

    public void HandleRewardedAdLoaded(object sender, EventArgs args)
    {
        print("HandleRewardedAdLoaded event received");
    }

    public void HandleRewardedAdFailedToLoad(object sender, EventArgs args)
    {
        Debug.LogError(
            "HandleRewardedAdFailedToLoad event received with message: "
                             + args.ToString());

    }
    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        Debug.Log("Ad loaded  " + args.ToString());

    }


    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        Debug.Log("HandleFailedToReceiveAd event received with message: "
                            + args.ToString());

    }

    private void HandleAdDidDismissFullScreenContent(object sender, EventArgs args)
    {
        Debug.Log("Closed app open ad");
        // Set the ad to null to indicate that AppOpenAdManager no longer has another ad to show.
        ad = null;
        isShowingAd = false;
        RequestLoadOpenAd();
    }

    private void HandleAdFailedToPresentFullScreenContent(object sender, AdErrorEventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
        Debug.LogFormat("Failed to present the ad (reason: {0})", args.AdError.GetMessage());
        // Set the ad to null to indicate that AppOpenAdManager no longer has another ad to show.
        ad = null;
        RequestLoadOpenAd();
    }

    private void HandleAdDidPresentFullScreenContent(object sender, EventArgs args)
    {
        if (ad != null)
            Debug.Log("Displayed app open ad");
            isShowingAd = true;
    }

    private void HandleAdDidRecordImpression(object sender, EventArgs args)
    {
        Debug.Log("Recorded ad impression");
    }

    private void HandlePaidEvent(object sender, AdValueEventArgs args)
    {
        Debug.LogFormat("Received paid event. (currency: {0}, value: {1}",
                args.AdValue.CurrencyCode, args.AdValue.Value);
    }


    #endregion

    #region inAppPurchasing

    private IEnumerator ExpandLifeToMax()
    {
        maxLifeData.maxLife += 10;
        yield return new WaitForEndOfFrame();
        nonConsumableBtn.interactable = false;
        currentLife = maxLifeData.maxLife;
        UpdateLifeTimer();
        UpdateLife();
        Save();
    }

    private IEnumerator RestoreToFull()
    {
        currentLife = maxLifeData.maxLife;
        yield return new WaitForEndOfFrame();
        UpdateLifeTimer();
        UpdateLife();
        Save();
    }

    private IEnumerator BuyLifePlus(int life)
    {
        extraLife += life;
        yield return new WaitForEndOfFrame();
        UpdateLifeTimer();
        UpdateLife();
        Save();
    }

    public void InitializePurchasing()
    {
        if (IsInitialized())
        {
            return;
        }

        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        builder.AddProduct(restore, ProductType.Consumable);
        builder.AddProduct(life10, ProductType.Consumable);
        builder.AddProduct(life30, ProductType.Consumable);
        builder.AddProduct(life70, ProductType.Consumable);
        builder.AddProduct(expand, ProductType.NonConsumable);
        UnityPurchasing.Initialize(this, builder);
    }

    public bool IsInitialized()
    {
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }

    public void BuyLowLives()
    {
        BuyProductID(life10);
    }

    public void BuyMidLives()
    {
        BuyProductID(life30);
    }

    public void BuyHighLives()
    {
        BuyProductID(life70);
    }

    public void RestoreLives()
    {
        BuyProductID(restore);
    }

    public void ExpandLives()
    {
        BuyProductID(expand);
    }

    public string GetProductPriceFromStore(string id)
    {
        if (m_StoreController != null && m_StoreController.products != null)
        {
            return m_StoreController.products.WithID(id).metadata.localizedPriceString;
        }
        else
        {
            return "";
        }
    }

    void BuyProductID(string productId)
    {
        if (IsInitialized())
        {
            Product product = m_StoreController.products.WithID(productId);
            if (product != null && product.availableToPurchase)
            {
                Debug.Log(string.Format("Purchasing product asychronously: '{0}'", product.definition.id));
                m_StoreController.InitiatePurchase(product);
            }
            else
            {
                Debug.Log("BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
            }
        }
        else
        {
            Debug.Log("BuyProductID FAIL. Not initialized.");
        }
    }

    public void RestorePurchases()
    {
        if (!IsInitialized())
        {
            Debug.Log("RestorePurchases FAIL. Not initialized.");
            return;
        }

        if (Application.platform == RuntimePlatform.IPhonePlayer ||
            Application.platform == RuntimePlatform.OSXPlayer)
        {
            // ... begin restoring purchases
            Debug.Log("RestorePurchases started ...");

            var apple = m_StoreExtensionProvider.GetExtension<IAppleExtensions>();
            apple.RestoreTransactions((result) => {
                Debug.Log("RestorePurchases continuing: " + result + ". If no further messages, no purchases available to restore.");
            });
        }
        else
        {
            Debug.Log("RestorePurchases FAIL. Not supported on this platform. Current = " + Application.platform);
        }
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        Debug.Log("OnInitialized: PASS");

        m_StoreController = controller;
        m_StoreExtensionProvider = extensions;
    }


    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }

    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        if (String.Equals(args.purchasedProduct.definition.id, life10, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            MainMenu.Instance.confirrmation_canvas.Show();
            StartCoroutine(BuyLifePlus(10));
            MainMenu.Instance.life10_canvas.Hide();
        }
        else if (String.Equals(args.purchasedProduct.definition.id, life30, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            MainMenu.Instance.confirrmation_canvas.Show();
            StartCoroutine(BuyLifePlus(30));
            MainMenu.Instance.life30_canvas.Hide();
        }
        else if (String.Equals(args.purchasedProduct.definition.id, life70, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            MainMenu.Instance.confirrmation_canvas.Show();
            StartCoroutine(BuyLifePlus(70));
            MainMenu.Instance.life70_canvas.Hide();
        }
        else if (String.Equals(args.purchasedProduct.definition.id, restore, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            MainMenu.Instance.confirrmation_canvas.Show();
            StartCoroutine(RestoreToFull());
            MainMenu.Instance.restore_canvas.Hide();
        }
        else if (String.Equals(args.purchasedProduct.definition.id, expand, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            MainMenu.Instance.confirrmation_canvas.Show();
            StartCoroutine(ExpandLifeToMax());
            MainMenu.Instance.expand_canvas.Hide();
        }
        else
        {
            Debug.Log(string.Format("ProcessPurchase: FAIL. Unrecognized product: '{0}'", args.purchasedProduct.definition.id));
        }

        return PurchaseProcessingResult.Complete;
    }


    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }
    #endregion
}
