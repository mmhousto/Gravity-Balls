using UnityEngine;

public class UrlOpener : MonoBehaviour
{

	public string url;


	public void Open(){
		Application.OpenURL(url);
	}
}
