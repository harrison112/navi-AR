using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

public class MapScriptTest : MonoBehaviour
{

    string url = ""; //post request to google maps

    public float lat = 0;// = Input.location.lastData.latitude; //-33.883988f;
    public float lon = 0;// = Input.location.lastData.longitude; //151.200989f;
    LocationInfo li;
    public int zoom = 14; //was 14
    public int mapWidth = 1500; //was 2000
    public int mapHeight = 1500; //was 2000
    public enum mapType { roadmap, satellite, hybrid, terrain };
    public mapType mapSelected;
    public int scale;

    private bool loadingMap = false;

    private IEnumerator mapCoroutine;

    public static string FineLocation;
    public static string CoarseLocation;

    IEnumerator GetGoogleMap(float lat, float lon)
    {
        //if (!Input.location.isEnabledByUser)
        //    yield break;

        // Input.location.Start(10, 0.1f);

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
        #if PLATFORM_ANDROID
        Permission.RequestUserPermission(Permission.FineLocation);
        Permission.RequestUserPermission(Permission.CoarseLocation);
        #endif
        //if (!Input.location.isEnabledByUser)
        //    yield break;

        // turn on location services, if available 
        Input.location.Start(10, 0.1f);
       // lat = Input.location.lastData.latitude;
       // lon = Input.location.lastData.longitude;
        mapCoroutine = GetGoogleMap(lat, lon);
        StartCoroutine(mapCoroutine);
        lat = Input.location.lastData.latitude;
        lon = Input.location.lastData.longitude;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount > 0)
        {
            Input.location.Start(10, 0.1f);
            lat = Input.location.lastData.latitude;
            lon = Input.location.lastData.longitude;
            mapCoroutine = GetGoogleMap(lat, lon);
            StartCoroutine(mapCoroutine);
        }
    }
}
