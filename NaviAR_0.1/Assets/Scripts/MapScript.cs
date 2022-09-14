using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapScript : MonoBehaviour
{

    string url = ""; //post request to google maps

    public float lat = -33.883988f;
    public float lon = 151.200989f;
    LocationInfo li;
    public int zoom = 14;
    public int mapWidth = 2000;
    public int mapHeight = 2000;
    public enum mapType { roadmap, satellite, hybrid, terrain };
    public mapType mapSelected;
    public int scale;

    private bool loadingMap = false;

    private IEnumerator mapCoroutine;

    IEnumerator GetGoogleMap(float lat, float lon)
    {
        url = "https://maps.googleapis.com/maps/api/staticmap?center=" + lat + "," + lon 
        + "&zoom=" + zoom + "&size=" + mapWidth + "x" + 
        mapHeight + "&scale=" + scale + "&maptype=" + mapSelected +
        "&key=AIzaSyBF3x2GMRP0G4sStyRh4r9CRbui6pMxDpM";
        loadingMap = true;
        WWW www = new WWW(url);
        yield return www;
        loadingMap = false;
        //Assign downloaded map texture to Canvas Image
        gameObject.GetComponent<RawImage>().texture = www.texture;
        StopCoroutine(mapCoroutine);
    }


    // Start is called before the first frame update
    void Start()
    {
        mapCoroutine = GetGoogleMap(lat, lon);
        StartCoroutine(mapCoroutine);
    }

    // Update is called once per frame
    void Update()
    {
        //if (Input.GetKeyDown(KeyCode.M))
        //{
        //    lat = -33.883988f;
        //    lon = 151.200989f;
        //    mapCoroutine = GetGoogleMap(lat, lon);
        //    StartCoroutine(mapCoroutine);
        //}
    }
}
