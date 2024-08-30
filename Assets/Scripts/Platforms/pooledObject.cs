using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pooledObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;
    private Coroutine spawn;
    public float spawnTime;
    private Animator anim;
    private Queue<GameObject> availableObjects = new Queue<GameObject>();
    private List <GameObject> spawnedObjects = new List<GameObject>();
    [SerializeField]
    GameObject warning;
    [SerializeField]
    bool horizontal;
    [SerializeField]
    float distXToPlayer;
    [SerializeField]
    float distYToPlayer;
    RaycastHit hit;
    Ray ray;
    bool runOnce;
    private void Start()
    {
        anim = GetComponentInParent<Animator>();
        anim.cullingMode = AnimatorCullingMode.CullUpdateTransforms;
    }

    private void OnEnable()
    {
        spawn = StartCoroutine(SpawnTime());
    }

    void FixedUpdate()
    {
        if (GameManager.Instance.Rplayer != null)
        {
            distXToPlayer = this.transform.position.x - GameManager.Instance.Rplayer.transform.position.x;
            distYToPlayer = this.transform.position.y - GameManager.Instance.Rplayer.transform.position.y;
            switch(horizontal)
            {
                case false:
                    VerticalWarningIndicator();
                    break;
                case true:
                    HorizontalWarningIndicator();
                    break;
            }
           
        }
    }

    private void Update()
    {
        if (GameManager.Instance.resetPlatforms == true && spawnedObjects.Count != 0)
        {
            if (!runOnce)
            {
                runOnce = true;
                foreach (GameObject obj in spawnedObjects)
                {
                    AddToPool(obj);
                }
                StopCoroutine(spawn);
                spawn = StartCoroutine(SpawnTime());
            }    
        }
        else
        {
            if(runOnce)
            {
                runOnce = false;
            }
        }
    }

    void VerticalWarningIndicator()
    {
        if (Mathf.Abs(distXToPlayer) <= 30f && distYToPlayer > 0f && warning.activeSelf)
        {
            bool rendererIsVisible = this.GetComponentInParent<Renderer>().isVisible;
            Vector2 raycastOrigin = this.transform.position;
            int layerMask = LayerMask.GetMask("Ground");
            if (rendererIsVisible)
            {
                warning.transform.position = Vector2.Lerp(warning.transform.position, new Vector2(this.transform.position.x, this.transform.position.y - 0.2f), Time.fixedDeltaTime * 10);
            }
            else
            {
                Debug.DrawRay(raycastOrigin, Vector2.down * Mathf.Abs(distYToPlayer), Color.red);
                RaycastHit2D hit = Physics2D.Raycast(raycastOrigin, Vector2.down, Mathf.Abs(distYToPlayer), layerMask);
                if(hit.collider != null)
                {
                    warning.transform.position = Vector2.Lerp(warning.transform.position, new Vector2(warning.transform.position.x, hit.point.y + 1), Time.fixedDeltaTime * 1000);
                }
                else
                {
                    Vector3 topOfCameraWorldSpace = Camera.main.ViewportToWorldPoint(new Vector3(0.5f, 1f, Camera.main.nearClipPlane));
                    float offset = 1.8f;
                    topOfCameraWorldSpace.y -= offset;
                    warning.transform.position = Vector2.Lerp(warning.transform.position, new Vector2(warning.transform.position.x, topOfCameraWorldSpace.y), Time.fixedDeltaTime * 1000);
                }
                
            }
        }
    }

    void HorizontalWarningIndicator()
    {
        if (Mathf.Abs(distXToPlayer) <= 30f && distXToPlayer > -30f && warning.activeSelf)
        {
            bool rendererIsVisible = this.GetComponentInParent<Renderer>().isVisible;
            Vector3 cameraLeftEdge = Camera.main.ViewportToWorldPoint(new Vector3(0, 0.5f, Camera.main.nearClipPlane));
            Vector3 cameraRightEdge = Camera.main.ViewportToWorldPoint(new Vector3(1, 0.5f, Camera.main.nearClipPlane));
            if (rendererIsVisible)
            {
                warning.transform.position = Vector2.Lerp(warning.transform.position, this.transform.position + (this.transform.forward * 0.5f), Time.fixedDeltaTime * 1000);
            }
            else
            {
                if (this.transform.position.x < Camera.main.transform.position.x)
                {
                    warning.transform.position = new Vector2(cameraLeftEdge.x + 0.5f, warning.transform.position.y);
                }
                else
                {
                    warning.transform.position = new Vector2(cameraRightEdge.x - 0.5f, warning.transform.position.y);
                }
            }
        }
    }

    private IEnumerator SpawnTime()
    {
        while (true)
        {
            warning.GetComponent<Renderer>().enabled =false;
            yield return new WaitForSeconds(spawnTime-1);
            warning.GetComponent<Renderer>().enabled = true;
            yield return new WaitForSeconds(1);
            warning.GetComponent<Renderer>().enabled = false;
            GetFromPool();
        }
    }

    private void GrowPool()
    {
        for (int i = 0; i < 10; i++)
        {
            var instanceToAdd = Instantiate(prefab);
            spawnedObjects.Add(instanceToAdd);
            instanceToAdd.transform.SetParent(transform);
            //instanceToAdd.transform.SetPositionAndRotation(transform.position, Quaternion.identity);
            instanceToAdd.transform.position = transform.position;
            AddToPool(instanceToAdd);
            
        }
        
    }

    public void AddToPool(GameObject instance)
    {
        instance.SetActive(false);
        //instance.transform.SetPositionAndRotation(transform.position, Quaternion.identity);
        instance.transform.position = transform.position;
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
