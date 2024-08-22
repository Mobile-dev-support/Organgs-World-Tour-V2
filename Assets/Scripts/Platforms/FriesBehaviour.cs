﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FriesBehaviour : MonoBehaviour
{
    public GameObject[] Fries;
    public float waitTime;
    public float idleTime;
    public float cascadeTime;
    private List<Animator> ani;
    public bool isCascade;
    public bool isAlternate;
    private static readonly string ANIMATION_BUMP = "onJump";

    private Coroutine coroutineCycle;

    bool runOnce;
    public void Awake()
    {
        ani = new List<Animator>();
        for (int i = 0; i < Fries.Length; i++)
        {
            ani.Add(Fries[i].GetComponent<Animator>());
        }
    }
    private void Update()
    {
        if (GameManager.Instance.resetPlatforms == true)
        {
            if(coroutineCycle != null)
            {
                StopCoroutine(coroutineCycle);
                coroutineCycle = null;
                foreach (var fries in Fries)
                {
                    fries.gameObject.SetActive(false);
                    fries.gameObject.SetActive(true);
                }
            }
           
        }
        else
        {
            if (coroutineCycle == null)
            {
                coroutineCycle = StartCoroutine(SpawnBlockOfFries());
            }
            
        }

    }
    // Start is called before the first frame update
    private void OnEnable()
    {
        coroutineCycle =  StartCoroutine(SpawnBlockOfFries());
    }

    IEnumerator SpawnBlockOfFries()
    {
        while (true)
        {
            if (isCascade && !isAlternate)
            {
                foreach (Animator anim in ani)
                {
                    anim.SetBool(ANIMATION_BUMP, true);
                    yield return new WaitForSeconds(waitTime);
                    anim.SetBool(ANIMATION_BUMP, false);
                    yield return new WaitForSeconds(cascadeTime);
                }
            }
            else if(isAlternate && !isCascade)
            {
                foreach (Animator anim in ani)
                {
                    anim.SetBool(ANIMATION_BUMP, false);
                }
                yield return new WaitForSeconds(waitTime);
                foreach (Animator anim in ani)
                {
                    anim.SetBool(ANIMATION_BUMP, true);
                }
                yield return new WaitForSeconds(idleTime);
            }
            else
            {
                foreach (Animator anim in ani)
                {
                    anim.SetBool(ANIMATION_BUMP, false);
                }
                yield return new WaitForSeconds(waitTime);
                foreach (Animator anim in ani)
                {
                    anim.SetBool(ANIMATION_BUMP, true);
                }
                yield return new WaitForSeconds(waitTime);
            }

        }
    }
}
