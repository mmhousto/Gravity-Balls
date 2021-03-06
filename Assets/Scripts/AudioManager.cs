﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AudioManager : MonoBehaviour
{
    private string volumeLevel = "medium";
    private int isMusicOn = 1;
    private AudioSource musicAudio;
    private bool isMOn = true, isPlaying = true;

    void Awake()
    {
        if (GameObject.FindGameObjectsWithTag("Audio").Length > 1)
        {
			Destroy(this.gameObject);
        }
		DontDestroyOnLoad(this.gameObject);
	}

    void Start()
    {
        isMusicOn = PlayerPrefs.GetInt("music", 1);
        volumeLevel = PlayerPrefs.GetString("gameVolume", "medium");
        musicAudio = GetComponent<AudioSource>();

        SetMusic();

    }

        void SetVolume()
        {
            if (volumeLevel == "high")
            {
                AudioListener.volume = 1.0f;
            }

            if (volumeLevel == "medium")
            {
                AudioListener.volume = 0.75f;
            }

            if (volumeLevel == "low")
            {
                AudioListener.volume = 0.25f;
            }

            if (volumeLevel == "off")
            {
                AudioListener.volume = 0.0f;
            }
        }

    void SetMusic()
    {
        if (isMusicOn == 0)
        {
            if (isPlaying == true)
            {
                musicAudio.Stop();
                isPlaying = false;
            }

            isMOn = false;

        }
        else if (isMusicOn == 1)
        {
            if (isPlaying == false)
            {
                musicAudio.Play();
                isPlaying = true;
            }

            isMOn = true;
        }
    }

    public void PlayMusic()
    {
        if (musicAudio.isPlaying) return;
        musicAudio.Play();
    }

    void Update()
    {
    }

	
}
