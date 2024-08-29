using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using DG.Tweening;

public class ChangeConfiner : MonoBehaviour
{
    private GameObject cam;
    private CinemachineVirtualCamera vcam;
    private CinemachineConfiner confiner;
    private PolygonCollider2D polygon;
    public LayerMask layer;
    public float RangeX;
    public float RangeY;
    private float previousOrthoSize;
    public GameObject[] objs;
    [Header("LAST CONFINER DIALOG")]
    public bool lastConfiner;
    private GameObject CinematicsTrigger;
    private void Start()
    {
        cam = GameObject.Find("CM vcam1");
        vcam = cam.GetComponent<CinemachineVirtualCamera>();
        polygon = GetComponent<PolygonCollider2D>();
        confiner = vcam.GetComponent<CinemachineConfiner>();
        gameObject.GetComponent<SpriteRenderer>().DOFade(1f, 0.01f);
        CinematicsTrigger = GameObject.Find("CinematicsTrigger");
        previousOrthoSize = vcam.m_Lens.OrthographicSize;
        for (int i = 0; i < objs.Length; i++)
        {
            objs[i].SetActive(false);
        }
    }


    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireCube(transform.position, new Vector3(RangeX, RangeY, 1));
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            gameObject.GetComponent<SpriteRenderer>().DOFade(0f, 1f);
            CamSizer();
            confiner.m_BoundingShape2D = polygon;
            vcam.m_Follow = GameManager.Instance.Rplayer.transform.GetChild(0);
            for (int i = 0; i < objs.Length; i++)
            {
                objs[i].SetActive(true);
            }

            if (lastConfiner)
            {
                if (!PlayerPrefs.HasKey("totem_key" + DoorController.Instance.country))
                {
                    Destroy(CinematicsTrigger);
                }
            }
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            gameObject.GetComponent<SpriteRenderer>().DOFade(1f, 1f);
            Invoke("Delay", 0.15f);
        }
    }

    private void Delay()
    {
        for (int i = 0; i < objs.Length; i++)
        {
            if (confiner.m_BoundingShape2D != polygon)
            {
                objs[i].SetActive(false);
            }
        }
    }

    private void CamSizer()
    {
        previousOrthoSize = vcam.m_Lens.OrthographicSize;
        if (RangeX == 15 && RangeY == 15) // cube
        {
            DOVirtual.Float(previousOrthoSize, 3.8f, 0.15f, angle =>
            {
                vcam.m_Lens.OrthographicSize = angle;
            });
        }
        else if (RangeX == 15 && RangeY == 30) // vertical
        {
            DOVirtual.Float(previousOrthoSize, 3.6f, 0.15f, angle =>
            {
                vcam.m_Lens.OrthographicSize = angle;
            });
        }
        else if (RangeX == 30 && RangeY == 15) // horizontal
        {
            DOVirtual.Float(previousOrthoSize, 4.5f, 0.15f, angle =>
            {
                vcam.m_Lens.OrthographicSize = angle;
            });
        }
        else if (RangeX == 30 && RangeY == 30) // big cube
        {
            DOVirtual.Float(previousOrthoSize, 5.05f, 0.15f, angle =>
            {
                vcam.m_Lens.OrthographicSize = angle;
            });
        }
    }
}
