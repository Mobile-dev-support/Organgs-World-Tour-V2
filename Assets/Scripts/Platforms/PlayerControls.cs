using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleInputNamespace;

public class PlayerControls : MonoBehaviour
{
    public AxisInputUI left, right;
    public Joystick joystick;
    public ButtonInputUI slide, jump;

    private static PlayerControls _instance;
    public static PlayerControls Instance { get { return _instance; } }

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
        }
    }
}
