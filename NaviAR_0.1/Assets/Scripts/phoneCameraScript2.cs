using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class phoneCameraScript2 : MonoBehaviour
{

    int currentCamIndex = 0;

    WebCamTexture webCamTexture;
    public string path;
    public RawImage display;


    public void Start()
    {
        webCamTexture = new WebCamTexture();
        GetComponent<Renderer>().material.mainTexture = webCamTexture;
        WebCamDevice[] devices = WebCamTexture.devices; //hoping this works
        webCamTexture.Play(); //Start Playing
    }


}
