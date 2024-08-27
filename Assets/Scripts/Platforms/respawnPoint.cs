using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class respawnPoint : MonoBehaviour
{
    [SerializeField]
    private GameObject flag;
    private Animator flagAnim;
    [SerializeField]
    private List<GameObject> DisableAfterActivation;
    private void OnEnable()
    {
        if(this.transform.childCount > 0)
        {
            flag = this.transform.GetChild(0).gameObject;
        }
       
        if (flag != null)
        {
            flagAnim = flag.GetComponent<Animator>();
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            GameManager.Instance.respawnPoint = gameObject.transform;
            BoxCollider2D collider = this.GetComponent<BoxCollider2D>();
            if (collider != null)
            {
                collider.enabled = false;
            }
            if(flag != null)
            {
                CharacterAudio.Instance.Checkpoint();
                flagAnim.SetBool("active", true);
            }
            DisablePastCheckpoints();
        }
    }

    private void DisablePastCheckpoints()
    {
        if(DisableAfterActivation.Count > 0)
        {
            foreach(var pastCheckpoint in DisableAfterActivation)
            {
                pastCheckpoint.SetActive(false);
            }
        }
    }
}
