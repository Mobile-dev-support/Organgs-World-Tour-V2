using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InstructionScript : MonoBehaviour
{
    public Transform Controls;
    public Transform PowerUps;
    public Transform Enemies;
    public Toggle contr;
    public Toggle pwr;
    public Toggle ene;


    public void OnControls()
    {
        Controls.gameObject.SetActive(true);
        PowerUps.gameObject.SetActive(false);
        Enemies.gameObject.SetActive(false);
    }
    public void OnPowerUps()
    {
        Controls.gameObject.SetActive(false);
        PowerUps.gameObject.SetActive(true);
        Enemies.gameObject.SetActive(false);
    }
    public void OnEnemies()
    {
        Controls.gameObject.SetActive(false);
        PowerUps.gameObject.SetActive(false);
        Enemies.gameObject.SetActive(true);
    }

}
