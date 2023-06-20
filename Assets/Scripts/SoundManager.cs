using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundManager : MonoBehaviour
{
    private Image soundImage;
    private string volumeLevel = "medium";
	private bool isSOnLow = false, isSOnMed = true, isSOnHigh = false, isPlaying = true;
	public Sprite soundOff, soundLow, soundMed, soundHigh;

	void Awake()
    {
		volumeLevel = PlayerPrefs.GetString("gameVolume", "medium");
		soundImage = GetComponent<Image>();
		SetVolume();
	}

    // Start is called before the first frame update
    void Start()
	{ 
		

	}

    // Update is called once per frame
    void Update()
    {
		volumeLevel = PlayerPrefs.GetString("gameVolume", "medium");
		SetVolume();
	}

    void SetVolume()
    {
		if (volumeLevel == "high")
		{
			soundImage.sprite = soundHigh;

			AudioListener.volume = 1.0f;
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}

		if (volumeLevel == "medium")
		{
			soundImage.sprite = soundMed;

			AudioListener.volume = 0.75f;
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}

		if (volumeLevel == "low")
		{
			soundImage.sprite = soundLow;

			AudioListener.volume = 0.25f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}

		if (volumeLevel == "off")
		{
			soundImage.sprite = soundOff;

			AudioListener.volume = 0.0f;
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}
	}

	public void ChangeSound()
	{
		if (isSOnMed)
		{
			AudioListener.volume = 1.0f;

			soundImage.sprite = soundHigh;

			PlayerPrefs.SetString("gameVolume", "high");
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}
		else
		if (isSOnHigh)
		{
			AudioListener.volume = 0.0f;

			soundImage.sprite = soundOff;

			PlayerPrefs.SetString("gameVolume", "off");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}
		else
		if (!isSOnLow && !isSOnMed && !isSOnHigh)
		{
			AudioListener.volume = 0.25f;

			soundImage.sprite = soundLow;

			PlayerPrefs.SetString("gameVolume", "low");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}
		else
		if (isSOnLow)
		{
			AudioListener.volume = 0.75f;

			soundImage.sprite = soundMed;

			PlayerPrefs.SetString("gameVolume", "medium");
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
	}
}
