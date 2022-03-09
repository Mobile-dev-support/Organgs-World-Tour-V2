using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleInputNamespace;

public class PlayerControls : MonoBehaviour
{
    public static PlayerControls Instance { get; private set; }
    public bool isDrunk { get; private set; }
    private float timer = 7;
    private float defaultTime;

    public AxisInputUI left, right;
    public ButtonInputUI slide, jump;

    private void Awake()
    {
        Instance = this;
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
