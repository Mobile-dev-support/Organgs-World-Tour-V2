using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleInputNamespace;

public class PlayerControls : MonoBehaviour
{
    public bool isDrunk { get; private set; }
    private float timer = 7;
    private float defaultTime;

    public AxisInputUI left, right;
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

    private void Start()
    {
        defaultTime = timer;
    }

    public void ReverseControl()
    {
        StartCoroutine(Drunk());
    }

    private IEnumerator Drunk()
    {
        while (isDrunk)
        {
            timer -= Time.deltaTime;
            if(timer > 0)
            {
                left.value = 1;
                right.value = -1;
                slide.button.Key = "Jump";
                jump.button.Key = "Fire3";
            }
            else
            {
                left.value = -1;
                right.value = 1;
                jump.button.Key = "Jump";
                slide.button.Key = "Fire3";
                isDrunk = false;
            }
            yield return null;
        }
        yield return 0;
        timer = defaultTime;
    }

    public void CheckDrunk() => isDrunk = true;
}
