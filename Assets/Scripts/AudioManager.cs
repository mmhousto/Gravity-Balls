using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AudioManager : MonoBehaviour
{
    public Sprite musicOn, musicOff;
	private Image musicImage, soundImage;
	public Sprite soundOff, soundLow, soundMed, soundHigh;
	public AudioSource musicAudio;
	private string volumeLevel = "medium";
	private int isMusicOn = 1;
	private bool isMOn = true, isSOnLow = false, isSOnMed = true, isSOnHigh = false;
	private bool restarted = false;

	void Awake() {
		DontDestroyOnLoad(this);
	}

	void start() {
		AudioListener.volume = 0.75f;
		musicAudio.Play();
		volumeLevel = PlayerData.getVolume();
		isMusicOn = PlayerData.getMusicOn();
		musicImage = GameObject.Find("btnMusic").GetComponent<Image>();
		soundImage = GameObject.Find("btnSound").GetComponent<Image>();
		if(volumeLevel == "high") {
			soundImage.sprite = soundHigh;
			AudioListener.volume = 1.0f;
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}
		if(volumeLevel == "medium") {
			soundImage.sprite = soundMed;
			AudioListener.volume = 0.75f;
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
		if(volumeLevel == "low") {
			soundImage.sprite = soundLow;
			AudioListener.volume = 0.25f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}
		if(volumeLevel == "off") {
			soundImage.sprite = soundOff;
			AudioListener.volume = 0.0f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}
		if(isMusicOn == 0) {
			musicImage.sprite = musicOff;
			musicAudio.Stop();
			isMOn = false;
		} else if(isMusicOn == 1) {
			musicImage.sprite = musicOn;
			musicAudio.Play();
			isMOn = true;
		}
	}

	void Update() {
		if(SceneManager.GetSceneByName("gameSingle").name == "gameSingle" && restarted == false) {
			AudioListener.volume = 0.75f;
			musicAudio.Play();
			restarted = true;
			volumeLevel = PlayerData.getVolume();
		isMusicOn = PlayerData.getMusicOn();
		musicImage = GameObject.Find("btnMusic").GetComponent<Image>();
		soundImage = GameObject.Find("btnSound").GetComponent<Image>();
					if(volumeLevel == "high") {
			soundImage.sprite = soundHigh;
			AudioListener.volume = 1.0f;
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}
		if(volumeLevel == "medium") {
			soundImage.sprite = soundMed;
			AudioListener.volume = 0.75f;
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
		if(volumeLevel == "low") {
			soundImage.sprite = soundLow;
			AudioListener.volume = 0.25f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}
		if(volumeLevel == "off") {
			soundImage.sprite = soundOff;
			AudioListener.volume = 0.0f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}
		if(isMusicOn == 0) {
			musicImage.sprite = musicOff;
			musicAudio.Stop();
			isMOn = false;
		} else if(isMusicOn == 1) {
			musicImage.sprite = musicOn;
			musicAudio.Play();
			isMOn = true;
		}
		}
		volumeLevel = PlayerData.getVolume();
		isMusicOn = PlayerData.getMusicOn();
		musicImage = GameObject.Find("btnMusic").GetComponent<Image>();
		soundImage = GameObject.Find("btnSound").GetComponent<Image>();
	}

	public void ChangeSound() {
		Debug.Log("Sound Changed");
		if(isSOnMed){
			AudioListener.volume = 1.0f;
			soundImage.sprite = soundHigh;
			PlayerPrefs.SetString("gameVolume", "high");
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}else 
		if(isSOnHigh){
			AudioListener.volume = 0.0f;
			soundImage.sprite = soundOff;
			PlayerPrefs.SetString("gameVolume", "off");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		} else
		if(!isSOnLow && !isSOnMed && !isSOnHigh){
			AudioListener.volume = 0.25f;
			soundImage.sprite = soundLow;
			PlayerPrefs.SetString("gameVolume", "low");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		} else
		if(isSOnLow){
			AudioListener.volume = 0.75f;
			soundImage.sprite = soundMed;
			PlayerPrefs.SetString("gameVolume", "medium");
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
	}

	public void ChangeMusicOnOff() {
		Debug.Log("Clicked");
		if(isMusicOn == 1) {
			Debug.Log("Music OFF");
			PlayerPrefs.SetInt("music", 0);
			musicImage.sprite = musicOff;
			musicAudio.Stop();
			isMOn = false;
		} else if(isMusicOn == 0) {
			Debug.Log("Music ON");
			PlayerPrefs.SetInt("music", 1);
			musicImage.sprite = musicOn;
			musicAudio.Play();
			isMOn = true;
		}
	}	
}
