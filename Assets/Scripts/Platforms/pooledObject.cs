using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pooledObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;
    public float spawnTime;
    private float Timer;
    private Animator anim;
    private Queue<GameObject> availableObjects = new Queue<GameObject>();

    private void Start()
    {
        Timer = spawnTime;
        anim = GetComponentInParent<Animator>();
    }

    private void Update()
    {
        Timer -= Time.deltaTime;
        if(Timer < 0)
        {
            GetFromPool();
            Timer = spawnTime;
        }
    }

    private void GrowPool()
    {
        for (int i = 0; i < 10; i++)
        {
            var instanceToAdd = Instantiate(prefab);
            instanceToAdd.transform.SetParent(transform);
            instanceToAdd.transform.SetPositionAndRotation(transform.position, Quaternion.identity);
            AddToPool(instanceToAdd);
        }
    }

    public void AddToPool(GameObject instance)
    {
        instance.SetActive(false);
        instance.transform.SetPositionAndRotation(transform.position, Quaternion.identity);
        availableObjects.Enqueue(instance);
    }

    public GameObject GetFromPool()
    {
        if (availableObjects.Count == 0)
        {
            GrowPool();
        }
        var instance = availableObjects.Dequeue();
        anim.SetTrigger("spawn");
        instance.SetActive(true);
        return instance;
    }
}
