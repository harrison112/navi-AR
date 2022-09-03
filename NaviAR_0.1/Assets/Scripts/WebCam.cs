using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WebCam : MonoBehaviour
{
    int currentCamIndex = 0;

    WebCamTexture tex;

    public RawImage display;

    public Text startStopText;

    public Text debug;

    public void StartStopCam_Clicked()
    {
        if (tex != null) // Stop the camera
        {
            display.texture = null;
            tex.Stop();
            tex = null;
        }
        else // Start the camera
        {
            WebCamDevice device = WebCamTexture.devices[currentCamIndex];
            tex = new WebCamTexture(device.name);
            display.texture = tex;

            tex.Play();
           // startStopText.text = "Stop Camera";
        }
    }


    //public void SwapCam_Clicked()
    //{
    //    if (WebCamTexture.devices.Length > 0)
    //    {
    //        currentCamIndex += 1;
    //        currentCamIndex %= WebCamTexture.devices.Length;

    //        // if tex is not null:
    //        // stop the web cam
    //        // start the web cam

    //        if (tex != null)
    //        {
    //            StopWebCam();
    //            StartStopCam_Clicked();
    //        }
    //    }
    //}

    //public void StartStopCam_Clicked()
    //{
    //    if (tex != null) // Stop the camera
    //    {
    //        StopWebCam();
    //        startStopText.text = "Start Camera";
    //    }
    //    else // Start the camera
    //    {
    //        WebCamDevice device = WebCamTexture.devices[currentCamIndex];
    //        tex = new WebCamTexture(device.name);
    //        display.texture = tex;

    //        tex.Play();
    //        startStopText.text = "Stop Camera";
    //    }
    //}

    //private void StopWebCam()
    //{
    //    display.texture = null;
    //    tex.Stop();
    //    tex = null;
    //}
}
