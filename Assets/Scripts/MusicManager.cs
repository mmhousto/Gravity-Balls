using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicManager : MonoBehaviour
{
    private Image musicImage;
    private int isMusicOn = 1;
    private bool isMOn = true, isPlaying = true;

    private AudioSource musicAudio;
    public Sprite musicOn, musicOff;

    void Awake()
    {
        isMusicOn = PlayerPrefs.GetInt("music", 1);
        musicAudio = GameObject.Find("AudioManager").gameObject.GetComponent<AudioSource>();
        musicImage = gameObject.GetComponent<Image>();
        
    }

    // Start is called before the first frame update
    void Start()
    {
        SetMusic();
        //musicImage.transform.parent.gameObject.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {
        isMusicOn = PlayerPrefs.GetInt("music", 1);
        SetMusic();
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

            musicImage.sprite = musicOff;

            isMOn = false;

        }
        else if (isMusicOn == 1)
        {
            if (isPlaying == false)
            {
                musicAudio.Play();
                isPlaying = true;
            }

            musicImage.sprite = musicOn;

            isMOn = true;
        }
    }

    public void ChangeMusicOnOff()
    {
        if (isMusicOn == 1)
        {

            PlayerPrefs.SetInt("music", 0);

            musicImage.sprite = musicOff;

            musicAudio.Stop();
            isMOn = false;
            isPlaying = false;
        }
        else if (isMusicOn == 0)
        {
            PlayerPrefs.SetInt("music", 1);

            musicImage.sprite = musicOn;

            musicAudio.Play();
            isMOn = true;
            isPlaying = true;
        }
    }

    
}
