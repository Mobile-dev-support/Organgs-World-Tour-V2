using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class totemlandActivation : MonoBehaviour
{
    public Animator anim;
    public TextMeshProUGUI[] shardtext;
    public GameObject[] organgs;
    private int totem_key;
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
        for (int j = 1; j < organgs.Length; j++)
        {
            organgs[j].SetActive(false);
        }

        for (int i = 0; i < 17; i++)
        {
            totem_key = PlayerPrefs.GetInt("totem_key" + i);
            if (PlayerPrefs.HasKey("totem_key" + i))
            {
                for (int j = 1; j < organgs.Length; j++)
                {
                    organgs[i].SetActive(i == totem_key);
                    shardtext[0].text = totem_key.ToString();
                    shardtext[1].text = totem_key.ToString();
                    shardtext[2].text = totem_key.ToString();
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
