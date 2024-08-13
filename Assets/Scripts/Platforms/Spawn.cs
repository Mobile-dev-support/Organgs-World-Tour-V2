using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour
{
    public GameObject chunk;
    private pooledObject Pooler;

    private void OnEnable()
    {
        pooledObject pooler = GetComponentInParent<pooledObject>();
        Pooler = pooler;
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Debug.Log("Player died because of spawned enemy");
            other.gameObject.GetComponent<Player>().StateMachine.ChangeState(other.gameObject.GetComponent<Player>().DeathState);
            Instantiate(chunk, transform.position, chunk.transform.rotation);
            Pooler.AddToPool(gameObject);
        }
        else if (other.gameObject.CompareTag("Spikes"))
        {
            Instantiate(chunk, transform.position, chunk.transform.rotation);
            Pooler.AddToPool(gameObject);
        }
    }
}
