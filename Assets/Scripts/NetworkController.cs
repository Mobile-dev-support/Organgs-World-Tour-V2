using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkController : MonoBehaviour
{
    public static bool NETWORK_ONLINE = false;

    [SerializeField] private bool disableNetwork = false;


    public void Update()
    {
        // Handle offline scenario
        if (NETWORK_ONLINE && (Application.internetReachability == NetworkReachability.NotReachable || disableNetwork))
        {
            NETWORK_ONLINE = false;
            Debug.Log("<color=red>No network connection.</color>");
        }
        // Handle online scenario
        else if (!NETWORK_ONLINE && !disableNetwork && !(Application.internetReachability == NetworkReachability.NotReachable))
        {
            NETWORK_ONLINE = true;
            Debug.Log("<color=green>Network connection detected.</color>");
        }
    }
}
