using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RestoreBtn : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
#if UNITY_ANDROID
        gameObject.SetActive(false);
#elif UNITY_IOS
        gameObject.SetActive(true);
#else
        gameObject.SetActive(false);
#endif
    }
}
