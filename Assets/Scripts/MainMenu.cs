using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Unity.Services.Authentication;
using Unity.Services.CloudSave;

public class MainMenu : MonoBehaviour {

	public GameObject signIn;
	public GameObject connectingScreen, startScreen;
	private PlayServices playServices;
	private bool finishedLoggingIn = false;

    private void Start()
    {
		playServices = PlayServices.Instance;
        if (signIn != null && Social.localUser.authenticated)
        {
			signIn.SetActive(false);
        }
	}

    private void Update()
    {
		if (playServices == null)
			playServices = PlayServices.Instance;

		if (playServices != null && startScreen != null && (playServices.couldntLogIn || playServices.loggedIn) && !startScreen.activeInHierarchy && finishedLoggingIn == false)
			SignedIn();

		if(signIn != null)
        {
			if (Social.localUser.authenticated && signIn.activeInHierarchy)
				signIn.SetActive(false);
			else if (!Social.localUser.authenticated && !signIn.activeInHierarchy)
			{
				signIn.SetActive(true);
			}
		}
        
	}

	public void SignedIn()
    {
		finishedLoggingIn = true;
		connectingScreen.SetActive(false);
		startScreen.SetActive(true);
    }

    public void GoToMainMenu()
    {
		//Destroy(GameObject.Find("AudioManager"));
		if(PhotonNetwork.IsConnected)
			PhotonNetwork.Disconnect();
		SceneManager.LoadScene(0);
	}

	public void PlaySolo() {
		//Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(1); //StartCoroutine(LoadYourAsyncScene("gameSingle"));
	}

	public void PlaySkill() {
		//Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(2);//StartCoroutine(LoadYourAsyncScene("gameSkill"));
	}

	public void PlayVersus()
	{
		//Destroy(GameObject.Find("AudioManager"));
		StartCoroutine(LoadYourAsyncScene(3));
	}

	public void DeleteMyAccount()
    {
        if (AuthenticationService.Instance.IsSignedIn)
        {
			AuthenticationService.Instance.DeleteAccountAsync();
			
        }
		PlayServices.Instance.ResetPlayerData();
	}

	public void SignIn()
    {
		signIn.SetActive(false);
		PlayServices.Instance.SignInAccount();
    }

	public void ShowLeaderboard()
    {
		PlayServices.Instance.ShowLeaderboard();
    }
	
	/*
	public void SignOut()
	{
		PlayServices.Instance.SignOutAccount();
	}*/

	IEnumerator LoadYourAsyncScene(int m_Scene)
	{
		// Set the current Scene to be able to unload it later
		Scene currentScene = SceneManager.GetActiveScene();

		// The Application loads the Scene in the background at the same time as the current Scene.
		AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(m_Scene, LoadSceneMode.Additive);

		// Wait until the last operation fully loads to return anything
		while (!asyncLoad.isDone)
		{
			yield return null;
		}

		// Move the GameObject (you attach this in the Inspector) to the newly loaded Scene
		//SceneManager.MoveGameObjectToScene(audioManager, SceneManager.GetSceneByName(m_Scene));
		// Unload the previous Scene
		SceneManager.UnloadSceneAsync(currentScene);
	}

}
