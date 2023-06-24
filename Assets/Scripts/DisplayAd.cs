using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;// Ad namespace

public class DisplayAd : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{

	public string myGameIdAndroid = "3917197";
	public string myGameIdIOS = "3917196";
    private string myVideoPlacement = "GameOver";
	public bool adStarted = false;
	public bool testMode = false;
    private bool isReady = false;
    public GameObject gameOver;
    private int tries = 0;
    private bool loadingAd;

    // Start is called before the first frame update
    void Start()
    {
#if UNITY_IOS
        Advertisement.Initialize(myGameIdIOS, testMode, this);
#else
        Advertisement.Initialize(myGameIdAndroid, testMode, this);
            
#endif
    }

    // Update is called once per frame
    void Update() {
        if (Advertisement.isInitialized && isReady && !adStarted && gameOver.activeInHierarchy == true && (PlayerData.Instance.plays % 10 == 0)) {
            Advertisement.Show(myVideoPlacement, this);
            adStarted = true;
        }
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Ad Init");
        loadingAd = true;
        Advertisement.Load(myVideoPlacement, this);
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log("Error Init Ads");
    }

    public void OnUnityAdsAdLoaded(string placementId)
    {
        isReady = true;
        loadingAd = false;
        Debug.Log("Ad Ready");
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        tries++;
        isReady = false;
        Debug.Log("Ad NOT Ready");
        if (tries < 3)
            Advertisement.Load(myVideoPlacement, this);
        else
            loadingAd = false;
    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {
        
    }

    public void OnUnityAdsShowStart(string placementId)
    {
        
    }

    public void OnUnityAdsShowClick(string placementId)
    {
        
    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        
    }
}
