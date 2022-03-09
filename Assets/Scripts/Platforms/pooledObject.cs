using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pooledObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;
    public float spawnTime;
    private float Timer;
    private Queue<GameObject> availableObjects = new Queue<GameObject>();

    private void Start()
    {
        Timer = spawnTime;
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
            instanceToAdd.transform.position = transform.position;
            instanceToAdd.transform.rotation = transform.rotation;
            AddToPool(instanceToAdd);
        }
    }

    public void AddToPool(GameObject instance)
    {
        instance.SetActive(false);
        availableObjects.Enqueue(instance);
        instance.transform.position = transform.position;
        instance.transform.rotation = transform.rotation;
    }

    public GameObject GetFromPool()
    {
        if (availableObjects.Count == 0)
        {
            GrowPool();
        }

        var instance = availableObjects.Dequeue();
        instance.SetActive(true);
        return instance;
    }
}
