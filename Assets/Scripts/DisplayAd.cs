using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;// Ad namespace

public class DisplayAd : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{

	public string myGameIdAndroid = "3917197";
	public string myGameIdIOS = "3917196";
	private string myVideoPlacementIOS = "iOS_Interstitial";
	private string myVideoPlacementAndroid = "Android_Interstitial";
    public string myVideoPlacement = "";
	public bool adStarted = false;
	public bool testMode = false;
    private bool isReady = false;
    public GameObject gameOver;

    // Start is called before the first frame update
    void Start()
    {
#if UNITY_IOS
        	Advertisement.Initialize(myGameIdIOS, testMode, this);
            myVideoPlacement = myVideoPlacementIOS;
#else
            Advertisement.Initialize(myGameIdAndroid, testMode, this);
            myVideoPlacement = myVideoPlacementAndroid;
#endif
    }

    // Update is called once per frame
    void Update() {
        if (Advertisement.isSupported && Advertisement.isInitialized && isReady && !adStarted && gameOver.activeInHierarchy == true && (PlayerData.plays % 10 == 0)) {
        	Advertisement.Show(myVideoPlacement, this);
        	adStarted = true;
        }
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Ad Init");
        Advertisement.Load(myVideoPlacement, this);
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log("Error Init Ads");
    }

    public void OnUnityAdsAdLoaded(string placementId)
    {
        isReady = true;
        Debug.Log("Ad Ready");
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        
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
