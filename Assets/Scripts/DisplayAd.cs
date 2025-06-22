using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;// Ad namespace
using Unity.Services.LevelPlay;
using System;

public class DisplayAd : MonoBehaviour
{

	public string myGameIdAndroid = "3917197";
	public string myGameIdIOS = "3917196";
    private string myVideoPlacement = "Game_Over";
    private string interstitialAdUnitId = "jla0n72qt9fyignh";
    public bool adStarted = false;
	public bool testMode = false;
    private bool isReady = false;
    public GameObject gameOver;
    private int tries = 0;
    private bool loadingAd;

    private LevelPlayInterstitialAd interstitialAd;

    // Start is called before the first frame update
    void Start()
    {

        //IronSource.Agent.setMetaData("is_test_suite", "enable");
        LevelPlay.OnInitSuccess += SdkInitializationCompletedEvent;
        LevelPlay.OnInitFailed += SdkInitializationFailedEvent;

        interstitialAd = new LevelPlayInterstitialAd(interstitialAdUnitId);

        // Register to interstitial events
        interstitialAd.OnAdLoaded += InterstitialOnAdLoadedEvent;
        interstitialAd.OnAdLoadFailed += InterstitialOnAdLoadFailedEvent;
        interstitialAd.OnAdDisplayed += InterstitialOnAdDisplayedEvent;
        interstitialAd.OnAdDisplayFailed += InterstitialOnAdDisplayFailedEvent;
        interstitialAd.OnAdClicked += InterstitialOnAdClickedEvent;
        interstitialAd.OnAdClosed += InterstitialOnAdClosedEvent;
        interstitialAd.OnAdInfoChanged += InterstitialOnAdInfoChangedEvent;

        LevelPlay.Init("2252c9f0d");
        //Advertisement.Initialize(myGameIdAndroid, testMode, this);
    }

    private void SdkInitializationFailedEvent(LevelPlayInitError error)
    {
    }

    private void SdkInitializationCompletedEvent(LevelPlayConfiguration configuration)
    {
        //IronSource.Agent.launchTestSuite();
        loadingAd = true;
        interstitialAd.LoadAd();
    }

    // Update is called once per frame
    void Update() {
        if (isReady && !adStarted && gameOver.activeInHierarchy == true && (PlayerData.Instance.plays % 10 == 0)) {
            ShowAd();
        }
    }

    // Implement the events
    void InterstitialOnAdLoadedEvent(LevelPlayAdInfo adInfo) 
    {
        isReady = true;
        loadingAd = false;
        //interstitialAd.ShowAd(myVideoPlacement);
    }

    public void ShowAd()
    {
        if (isReady)
        {
            adStarted = true;
            interstitialAd.ShowAd(myVideoPlacement);
        }
            
    }

    void InterstitialOnAdLoadFailedEvent(LevelPlayAdError error) 
    {
        tries++;
        isReady = false;
        //Debug.Log("Ad NOT Ready");
        if (tries < 3)
            interstitialAd.LoadAd();
        else
            loadingAd = false;
    }
    void InterstitialOnAdDisplayedEvent(LevelPlayAdInfo adInfo) {  }
    void InterstitialOnAdDisplayFailedEvent(LevelPlayAdDisplayInfoError infoError) {  }
    void InterstitialOnAdClickedEvent(LevelPlayAdInfo adInfo) {  }
    void InterstitialOnAdClosedEvent(LevelPlayAdInfo adInfo) {  }
    void InterstitialOnAdInfoChangedEvent(LevelPlayAdInfo adInfo) { }


    /*public void OnInitializationComplete()
    {
        loadingAd = true;
        //Advertisement.Load(myVideoPlacement, this);
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        //Debug.Log("Error Init Ads");
    }

    public void OnUnityAdsAdLoaded(string placementId)
    {
        isReady = true;
        loadingAd = false;
        //Debug.Log("Ad Ready");
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        tries++;
        isReady = false;
        //Debug.Log("Ad NOT Ready");
        if (tries < 3)
            Advertisement.Load(myVideoPlacement, this);
        else
            loadingAd = false;
    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {
        //Debug.Log("Ad Show FAILED");
    }

    public void OnUnityAdsShowStart(string placementId)
    {
        //Debug.Log("Ad Show STARTED");
    }

    public void OnUnityAdsShowClick(string placementId)
    {
        //Debug.Log("Ad Show CLICKED");
    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        //Debug.Log("Ad Show COMPLETE");
    }*/
}
