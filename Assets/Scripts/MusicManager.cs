using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicManager : MonoBehaviour
{
    private Image musicImage;
    private int isMusicOn = 1;
    public Sprite musicOn, musicOff;

    void Awake()
    {
        isMusicOn = PlayerPrefs.GetInt("music", 1);
        musicImage = gameObject.GetComponent<Image>();
        SetMusic();
    }

    // Start is called before the first frame update
    void Start()
    {
        
        //musicImage.transform.parent.gameObject.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {
        if (isMusicOn != PlayerPrefs.GetInt("music", 1))
            isMusicOn = PlayerPrefs.GetInt("music", 1);

        SetMusic();
    }

    void SetMusic()
    {
        if (isMusicOn == 0)
        {
            musicImage.sprite = musicOff;
        }
        else if (isMusicOn == 1)
        {
            musicImage.sprite = musicOn;

        }
    }

    public void ChangeMusicOnOff()
    {
        if (isMusicOn == 1)
        {

            PlayerPrefs.SetInt("music", 0);
            isMusicOn = 0;

            musicImage.sprite = musicOff;
        }
        else if (isMusicOn == 0)
        {
            PlayerPrefs.SetInt("music", 1);
            isMusicOn = 1;

            musicImage.sprite = musicOn;
        }
    }

    
}
