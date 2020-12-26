using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AudioManager : MonoBehaviour
{
    public Sprite musicOn, musicOff;
	public Image musicImage, soundImage, musicImage2, soundImage2, musicImage3, soundImage3;
	public Sprite soundOff, soundLow, soundMed, soundHigh;
	public AudioSource musicAudio;
	private string volumeLevel = "medium";
	private string currentScene;
	private int isMusicOn = 1;
	private bool isMOn = true, isSOnLow = false, isSOnMed = true, isSOnHigh = false, isPlaying = true;
	private bool restarted = false;
	private GameObject parentObject;

	void Start() {
		volumeLevel = PlayerPrefs.GetString("gameVolume", "medium");
		isMusicOn = PlayerPrefs.GetInt("music", 1);
		currentScene = SceneManager.GetActiveScene().name;

		if(volumeLevel == "high") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundHigh;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundHigh;
				soundImage3.sprite = soundHigh;
			} 

			AudioListener.volume = 1.0f;
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}

		if(volumeLevel == "medium") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundMed;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundMed;
				soundImage3.sprite = soundMed;
			} 

			AudioListener.volume = 0.75f;
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}

		if(volumeLevel == "low") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundLow;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundLow;
				soundImage3.sprite = soundLow;
			} 

			AudioListener.volume = 0.25f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}

		if(volumeLevel == "off") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundOff;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundOff;
				soundImage3.sprite = soundOff;
			} 

			AudioListener.volume = 0.0f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}

		if(isMusicOn == 0) {
			if(currentScene == "MainScreen") {
				musicImage.sprite = musicOff;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				musicImage2.sprite = musicOff;
				musicImage3.sprite = musicOff;
			} 

			musicAudio.Stop();
			isMOn = false;
			isPlaying = false;
		}

		if(isMusicOn == 1) {
			if(currentScene == "MainScreen") {
				musicImage.sprite = musicOn;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				musicImage2.sprite = musicOn;
				musicImage3.sprite = musicOn;
			}

			musicAudio.Play();
			isMOn = true;
			isPlaying = true;
		}
	}

	void Update() {
		volumeLevel = PlayerPrefs.GetString("gameVolume", "medium");
		isMusicOn = PlayerPrefs.GetInt("music", 1);

		if(volumeLevel == "high") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundHigh;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundHigh;
				soundImage3.sprite = soundHigh;
			} 

			AudioListener.volume = 1.0f;
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}

		if(volumeLevel == "medium") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundMed;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundMed;
				soundImage3.sprite = soundMed;
			}

			AudioListener.volume = 0.75f;
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}

		if(volumeLevel == "low") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundLow;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundLow;
				soundImage3.sprite = soundLow;
			} 

			AudioListener.volume = 0.25f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}

		if(volumeLevel == "off") {
			if(currentScene == "MainScreen") {
				soundImage.sprite = soundOff;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundOff;
				soundImage3.sprite = soundOff;
			} 

			AudioListener.volume = 0.0f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}

		if(isMusicOn == 0) {
			if(isPlaying == true) {
				musicAudio.Stop();
				isPlaying = false;
			}


			if(currentScene == "MainScreen") {
				musicImage.sprite = musicOff;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				musicImage2.sprite = musicOff;
				musicImage3.sprite = musicOff;
			}

			isMOn = false;

		} else if(isMusicOn == 1) {
			if(isPlaying == false) {
				musicAudio.Play();
				isPlaying = true;
			}

			if(currentScene == "MainScreen") {
				musicImage.sprite = musicOn;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				musicImage2.sprite = musicOn;
				musicImage3.sprite = musicOn;
			}

			isMOn = true;
		}
	}

	public void ChangeSound() {
		currentScene = SceneManager.GetActiveScene().name;
		if(isSOnMed){
			AudioListener.volume = 1.0f;

			if(currentScene == "MainScreen") {
				soundImage.sprite = soundHigh;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundHigh;
				soundImage3.sprite = soundHigh;
			} 

			PlayerPrefs.SetString("gameVolume", "high");
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}else 
		if(isSOnHigh){
			AudioListener.volume = 0.0f;

			if(currentScene == "MainScreen") {
				soundImage.sprite = soundOff;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundOff;
				soundImage3.sprite = soundOff;
			} 

			PlayerPrefs.SetString("gameVolume", "off");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		} else
		if(!isSOnLow && !isSOnMed && !isSOnHigh){
			AudioListener.volume = 0.25f;

			if(currentScene == "MainScreen") {
				soundImage.sprite = soundLow;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundLow;
				soundImage3.sprite = soundLow;
			} 

			PlayerPrefs.SetString("gameVolume", "low");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		} else
		if(isSOnLow){
			AudioListener.volume = 0.75f;

			if(currentScene == "MainScreen") {
				soundImage.sprite = soundMed;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				soundImage2.sprite = soundMed;
				soundImage3.sprite = soundMed;
			}

			PlayerPrefs.SetString("gameVolume", "medium");
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
	}

	public void ChangeMusicOnOff() {
		if(isMusicOn == 1) {
			
			PlayerPrefs.SetInt("music", 0);

			if(currentScene == "MainScreen") {
				musicImage.sprite = musicOff;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				musicImage2.sprite = musicOff;
				musicImage3.sprite = musicOff;
			}

			musicAudio.Stop();
			isMOn = false;
			isPlaying = false;
		} else if(isMusicOn == 0) {
			PlayerPrefs.SetInt("music", 1);

			if(currentScene == "MainScreen") {
				musicImage.sprite = musicOn;
			} else if (currentScene == "gameSingle" || currentScene == "gameSkill") {
				musicImage2.sprite = musicOn;
				musicImage3.sprite = musicOn;
			}

			musicAudio.Play();
			isMOn = true;
			isPlaying = true;
		}
	}	
}
