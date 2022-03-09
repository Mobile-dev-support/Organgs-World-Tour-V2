using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FriesBehaviour : MonoBehaviour
{
    public GameObject[] Fries;
    public float waitTime;
    public float cascadeTime;
    private List<Animator> ani;
    public bool isCascade;
    private static readonly string ANIMATION_BUMP = "onJump";

    public void Awake()
    {
        ani = new List<Animator>();
        for (int i = 0; i < Fries.Length; i++)
        {
            ani.Add(Fries[i].GetComponent<Animator>());
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpawnBlockOfFries());
    }

    IEnumerator SpawnBlockOfFries()
    {
        while (true)
        {
            if (isCascade)
            {
                foreach (Animator anim in ani)
                {
                    anim.SetBool(ANIMATION_BUMP, true);
                    yield return new WaitForSeconds(waitTime);
                    anim.SetBool(ANIMATION_BUMP, false);
                    yield return new WaitForSeconds(cascadeTime);
                }
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
