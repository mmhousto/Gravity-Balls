using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boundaries : MonoBehaviour
{
    private Camera mainCamera;
    private float defaultFOV;

    // Start is called before the first frame update
    private void Start()
    {
        mainCamera = Camera.main;
        defaultFOV = mainCamera.fieldOfView;

        AdjustCameraFOV();
    }

    private void AdjustCameraFOV()
    {
        float screenRatio = (float)Screen.width / Screen.height;
        float targetRatio = 9f / 16f; // Set the desired target aspect ratio here

        if (screenRatio >= targetRatio)
        {
            mainCamera.fieldOfView = defaultFOV;
        }
        else
        {
            float differenceInRatio = targetRatio / screenRatio;
            mainCamera.fieldOfView = defaultFOV * differenceInRatio;
        }
    }
}
