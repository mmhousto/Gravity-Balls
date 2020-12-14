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
	public AudioSource [] soundAudio;
	bool isMOn = true, isSOnLow = false, isSOnMed = true, isSOnHigh = false;

	void start() {
		musicImage = GameObject.Find("btnMusic").GetComponent<Image>();
		soundImage = GameObject.Find("btnSound").GetComponent<Image>();
		if(PlayerData.getVolume() == "high") {
			soundImage.sprite = soundHigh;
			PlayerPrefs.SetString("gameVolume", "high");
			AudioListener.volume = 1.0f;
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}
		if(PlayerData.getVolume() == "medium") {
			soundImage.sprite = soundMed;
			PlayerPrefs.SetString("gameVolume", "medium");
			AudioListener.volume = 0.75f;
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
		if(PlayerData.getVolume() == "low") {
			soundImage.sprite = soundLow;
			PlayerPrefs.SetString("gameVolume", "low");
			AudioListener.volume = 0.25f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}
		if(PlayerData.getVolume() == "off") {
			soundImage.sprite = soundOff;
			PlayerPrefs.SetString("gameVolume", "off");
			AudioListener.volume = 0.0f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}
		if(PlayerData.getMusicOn() == 0) {
			musicImage.sprite = musicOff;
			musicAudio.Stop();
			isMOn = false;
		} else if(PlayerData.getMusicOn() == 1) {
			musicImage.sprite = musicOn;
			musicAudio.Play();
			isMOn = true;
		}
	}

	public void ChangeSound() {
		soundImage = GameObject.Find("btnSound").GetComponent<Image>();
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
		musicImage = GameObject.Find("btnMusic").GetComponent<Image>();
		Debug.Log("Clicked");
		if(PlayerPrefs.GetInt("music", 1) == 1){
			Debug.Log("Music OFF");
			PlayerPrefs.SetInt("music", 0);
			musicImage.sprite = musicOff;
			musicAudio.Stop();
			isMOn = false;
		}else if(PlayerPrefs.GetInt("music", 1) == 0) {
			Debug.Log("Music ON");
			PlayerPrefs.SetInt("music", 1);
			musicImage.sprite = musicOn;
			musicAudio.Play();
			isMOn = true;
		}
	}	
}
