using System;
using UnityEngine;

namespace Unity.Advertisement.IosSupport.Components
{
    /// <summary>
    /// This component controls an iOS App Tracking Transparency context screen.
    /// You should only have one of these in your app.
    /// </summary>
    public sealed class ContextScreenView : MonoBehaviour
    {
        /// <summary>
        /// This event will be invoked after the ContinueButton is clicked
        /// and after the tracking authorization request has been sent.
        /// It's a good idea to subscribe to this event so you can destroy
        /// this GameObject to free up memory after it's no longer needed.
        /// Once the tracking authorization request has been sent, there's no
        /// need for this popup again until the app is uninstalled and reinstalled.
        /// </summary>
        public event Action sentTrackingAuthorizationRequest;

        private bool requestSent = false;

        private void Start()
        {
            requestSent = PlayerPrefs.GetInt("Tracking", 0) == 0 ? false : true;
            if (requestSent)
                Destroy(gameObject);
        }

        public void RequestAuthorizationTracking()
        {
#if UNITY_IOS

            ATTrackingStatusBinding.RequestAuthorizationTracking(AuthorizationTrackingReceived);

            sentTrackingAuthorizationRequest?.Invoke();
#else
            // Not IOS
#endif
        }
        
        private void AuthorizationTrackingReceived(int status) {
             //Debug.LogFormat("Tracking status received: {0}", status);
            requestSent = true;
            PlayerPrefs.SetInt("Tracking", 1);
        }

    }
}
