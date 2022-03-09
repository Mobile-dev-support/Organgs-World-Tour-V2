using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;

public class ScoringMechanism : MonoBehaviour
{
    public float NoOfLives { get; set; }
    public float coinNo { get; set; }
    public float score { get; set; }
    private float coinscore = 100f;
    private float timeMinusScore = 2f;
    [SerializeField]
    private GameObject star;
    [SerializeField]
    private TextMeshProUGUI livesText;
    private Transform starCounter;
    private bool frstStar = false;
    private bool scndStar = false;
    private bool thrdStar = false;
    [Header("Win Panel")]
    public Transform levelCompilation;
    public Transform starHolder;
    public GameObject starPanel;
    private static ScoringMechanism _instance;
    public static ScoringMechanism Instance { get { return _instance; } }

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
        starCounter = GameObject.Find("starcounter").transform;
        levelCompilation.gameObject.SetActive(false);
    }

    private void Update()
    {
        Scoring();
    }

    #region scoring
    public void NumberOfLives()
    {
        livesText.text = NoOfLives.ToString();
    }

    private void Scoring()
    {
        if (!frstStar && score >= 1000 && score < 2000)
        {
            frstStar = true;
            scndStar = false;
            thrdStar = false;
            DoorController.Instance.StarsNum = 1;
            StartCoroutine(starCount(1));
        }
        else if (!scndStar && score >= 2000 && score < 2500)
        {
            frstStar = false;
            scndStar = true;
            thrdStar = false;
            DoorController.Instance.StarsNum = 2;
            StartCoroutine(starCount(2));
        }
        else if (!thrdStar && score >= 2500 && score < 3000)
        {
            frstStar = false;
            scndStar = false;
            thrdStar = true;
            DoorController.Instance.StarsNum = 3;
            StartCoroutine(starCount(3));
        }
    }

    public void coinScore()
    {
        score += coinscore;
    }

    public void timeScore()
    {
        score -= timeMinusScore;
    }
    #endregion

    #region IEnumerators
    private IEnumerator starCount(int starcount)
    {
        foreach (Transform child in starCounter.transform)
        {
            if (child != null)
                Destroy(child.gameObject);
        }
        yield return new WaitForEndOfFrame();
        for (int i = 0; i < starcount; i++)
        {
            Instantiate(star, starCounter);
        }
    }
    public IEnumerator WinPanel()
    {
        yield return new WaitForEndOfFrame();
        levelCompilation.gameObject.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        if (frstStar && !scndStar && !thrdStar)
        {
            Instantiate(starPanel, starHolder);
        }
        else if (!frstStar && scndStar && !thrdStar)
        {
            Instantiate(starPanel, starHolder);
            yield return new WaitForSeconds(0.3f);
            Instantiate(starPanel, starHolder);
        }
        else if (!frstStar && !scndStar && thrdStar)
        {
            Instantiate(starPanel, starHolder);
            yield return new WaitForSeconds(0.3f);
            Instantiate(starPanel, starHolder);
            yield return new WaitForSeconds(0.3f);
            Instantiate(starPanel, starHolder);
        }
        yield return new WaitForEndOfFrame();
    }
    #endregion
}
