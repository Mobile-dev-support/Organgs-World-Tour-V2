using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class disableObjs : MonoBehaviour
{
    public Transform GMenuBtn;
    public Transform RestartBtn;
    public Transform Mbtns;

    private void Update()
    {
       // UpdateStarsUI();
    }

    private void OnDisable()
    {
        if(GMenuBtn != null)
            GMenuBtn.transform.gameObject.SetActive(true);
            RestartBtn.transform.gameObject.SetActive(true);
    }
    private void OnEnable()
    {
        if (GMenuBtn != null)
            GMenuBtn.transform.gameObject.SetActive(false);
            RestartBtn.transform.gameObject.SetActive(false);
            Mbtns.transform.gameObject.SetActive(true);
    }

}
