using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour
{
    public GameObject chunk;
    private bool isExploded;
    [SerializeField] private float radius;
    private pooledObject Pooler;
    public LayerMask layer;
    public bool isHorizontal;

    private void OnEnable()
    {
        pooledObject pooler = GetComponentInParent<pooledObject>();
        Pooler = pooler;
        isExploded = false;
    }

    private void OnDisable()
    {
        //Pooler.GetFromPool();
    }

    private void FixedUpdate()
    {
        Collider2D collider = Physics2D.OverlapCircle(transform.position, radius, layer);
        if (collider)
        {
            isExploded = true;
            if (isExploded)
            {
                Instantiate(chunk, transform.position, chunk.transform.rotation);
                Pooler.AddToPool(gameObject);
                isExploded = false;
            }
        }
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.blue * new Color(1, 1, 1, 0.5f);
        Gizmos.DrawWireSphere(transform.position, radius);
    }
}
