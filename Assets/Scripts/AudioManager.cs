using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    public Sprite musicOn, musicOff;
	public Image musicImage, soundImage;
	public Sprite soundOff, soundLow, soundMed, soundHigh;
	public AudioSource musicAudio, soundAudio;
	bool isMOn = true, isSOnLow = false, isSOnMed = true, isSOnHigh = false;

	void Start() {
	}

	public void ChangeSound() {
		if(isSOnMed){
			soundImage.sprite = soundHigh;
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		} else if(isSOnHigh){
			soundImage.sprite = soundOff;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		} else if(!isSOnLow && !isSOnMed && !isSOnHigh){
			soundImage.sprite = soundLow;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		} else if(isSOnLow){
			soundImage.sprite = soundMed;
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
	}

	public void ChangeMusicOnOff() {
		if(isMOn){
			musicImage.sprite = musicOff;
			musicAudio.Stop();
			isMOn = false;
		}else {
			musicImage.sprite = musicOn;
			musicAudio.Play();
			isMOn = true;
		}
	}	
}
