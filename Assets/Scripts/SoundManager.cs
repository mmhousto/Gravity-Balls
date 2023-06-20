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
		if (volumeLevel != PlayerPrefs.GetString("gameVolume", "medium"))
			volumeLevel = PlayerPrefs.GetString("gameVolume", "medium");

		SetVolume();
	}

    void SetVolume()
    {
		if (volumeLevel == "high")
		{
			soundImage.sprite = soundHigh;

			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}

		if (volumeLevel == "medium")
		{
			soundImage.sprite = soundMed;

			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}

		if (volumeLevel == "low")
		{
			soundImage.sprite = soundLow;

			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}

		if (volumeLevel == "off")
		{
			soundImage.sprite = soundOff;

			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}
	}

	public void ChangeSound()
	{
		if (isSOnMed)
		{

			soundImage.sprite = soundHigh;

			PlayerPrefs.SetString("gameVolume", "high");
			isSOnMed = false;
			isSOnHigh = true;
			isSOnLow = false;
		}
		else
		if (isSOnHigh)
		{

			soundImage.sprite = soundOff;

			PlayerPrefs.SetString("gameVolume", "off");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = false;
		}
		else
		if (!isSOnLow && !isSOnMed && !isSOnHigh)
		{

			soundImage.sprite = soundLow;

			PlayerPrefs.SetString("gameVolume", "low");
			isSOnMed = false;
			isSOnHigh = false;
			isSOnLow = true;
		}
		else
		if (isSOnLow)
		{

			soundImage.sprite = soundMed;

			PlayerPrefs.SetString("gameVolume", "medium");
			isSOnMed = true;
			isSOnHigh = false;
			isSOnLow = false;
		}
	}
}
