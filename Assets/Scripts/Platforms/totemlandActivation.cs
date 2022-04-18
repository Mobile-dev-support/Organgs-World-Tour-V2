using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class totemlandActivation : MonoBehaviour
{
    public Animator anim;
    public TextMeshProUGUI[] shardtext;
    public GameObject[] organgs;
    private int Trophy;
    private static totemlandActivation _instance;
    public static totemlandActivation Instance { get { return _instance; } }

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
        anim.enabled = false;
        Initialize();
    }

    public void Initialize()
    {
        Trophy = 0;
        for (int i = 1; i < organgs.Length; i++)
        {
            organgs[i].SetActive(false);
            if (PlayerPrefs.HasKey("totem_key" + i))
            {
                Trophy++;
                organgs[i].SetActive(true);
                for (int j = 0; j < shardtext.Length; j++)
                {
                    shardtext[j].text = Trophy.ToString();
                }
            }
        }
    }

    public void EnableTotemLand()
    {
        anim.enabled = true;
    }

    public void DisableTotemLand()
    {
        anim.enabled = false;
    }
}
