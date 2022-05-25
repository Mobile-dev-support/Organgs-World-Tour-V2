using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleHUD : MonoBehaviour
{
    private Toggle m_Toggle;
    public CanvasGroup canvasgrp;
    public bool isTutorial;
    // Start is called before the first frame update
    void Start()
    {
        m_Toggle = GetComponent<Toggle>();
        //Add listener for when the state of the Toggle changes, and output the state
        m_Toggle.onValueChanged.AddListener(delegate {
            if (!isTutorial)
            {
                ToggleValueChanged(m_Toggle);
            }
            else
            {
                ToggleValueChangedTutorial(m_Toggle);
            }

        });
    }

    void ToggleValueChanged(Toggle disableHUD)
    {
        if(m_Toggle.isOn){
            canvasgrp.enabled = true;
        }else{
             canvasgrp.enabled = false;
        }
    }

    void ToggleValueChangedTutorial(Toggle disableTutorial)
    {
        if (m_Toggle.isOn)
        {
            Debug.Log("Tutorial is now off");
        }
        else
        {
            Debug.Log("Tutorial is now on");
        }
    }
}
