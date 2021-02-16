using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;// Ad namespace

public class DisplayAd : MonoBehaviour {

	public string myGameIdAndroid = "3917197";
	public string myGameIdIOS = "3917196";
	public string myVideoPlacement = "gameOver";
	public bool adStarted;
	private bool testMode = true;
    public GameObject gameOver;

    // Start is called before the first frame update
    void Start() {
        #if UNITY_IOS
        	Advertisement.Initialize(myGameIdIOS, !testMode);
        #else
        	Advertisement.Initialize(myGameIdAndroid, !testMode);
        #endif
    }

    // Update is called once per frame
    void Update() {
        if (Advertisement.isInitialized && Advertisement.IsReady(myVideoPlacement) && !adStarted && (GameManager.lives == 0 || SkillManager.lives == 0) && gameOver.activeSelf == true && (PlayerData.plays % 3 == 0)) {
        	Advertisement.Show(myVideoPlacement);
        	adStarted = true;
        }
    }
}
