using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleHUD : MonoBehaviour
{
    private Toggle m_Toggle;
    public CanvasGroup canvasgrp;
    // Start is called before the first frame update
    void Start()
    {
        m_Toggle = GetComponent<Toggle>();
        //Add listener for when the state of the Toggle changes, and output the state
        m_Toggle.onValueChanged.AddListener(delegate {
            ToggleValueChanged(m_Toggle);
        });
    }

    void ToggleValueChanged(Toggle change)
    {
        if(m_Toggle.isOn){
            canvasgrp.enabled = true;
        }else{
             canvasgrp.enabled = false;
        }
    }
}
