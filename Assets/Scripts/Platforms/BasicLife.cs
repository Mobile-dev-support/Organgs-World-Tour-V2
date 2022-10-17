using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BasicLife : MonoBehaviour
{
    public int life { get; set; }
    private int currentLife = 20;
    public TextMeshProUGUI lifeText;
    private static BasicLife _instance;
    public static BasicLife Instance { get { return _instance; } }

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
        StartCoroutine(LifeCheck());
    }

    public void LifeLine()
    {
        life = currentLife;
    }

    private IEnumerator LifeCheck()
    {
        LifeLine();
        while (true)
        {
            lifeText.SetText("{0}", life);
            yield return null;
        }
    }
}
