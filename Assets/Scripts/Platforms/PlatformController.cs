using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(Collider2D))]
public class PlatformController : MonoBehaviour
{

    public PlatformWaypoint currentWaypoint;
    public PlatformWaypoint firstWaypoint;
    public float maxSpeed;
    public float accelerationDistance;
    public float decelerationDistance;
    public float waitTime;
    public float crumbleTime;
    public float restoreTime;
    public float spinSpeed;
    public bool spinning;
    public bool clockWise;
    public bool onlyPlayerCrumble;
    private Vector3 initialPosition;

    private Vector2 speed = Vector2.zero;
    private float currentWaitTime = 0;
    private float currentCrumbleTime = 0;
    private float currentRestoreTime = 0;
    private bool crumbled = false;
    private List<Player> objs = new List<Player>();
    private Animator animator;
    private Collider2D myCollider;
    private float rotZ;


    bool runOnce;
    private static readonly string ANIMATION_CRUMBLING = "crumbling";
    private static readonly string ANIMATION_CRUMBLE = "crumble";
    private static readonly string ANIMATION_RESTORE = "restore";

    private 


    void OnEnable()
    {
        animator = GetComponent<Animator>();
        if(crumbleTime > 0)
        {
            animator.cullingMode = AnimatorCullingMode.AlwaysAnimate;
        }
        myCollider = GetComponent<Collider2D>();
        if(currentWaypoint != null)
        {
            firstWaypoint = currentWaypoint;
            initialPosition = transform.position;
        }
    }

    private void Update()
    {
        if (firstWaypoint != null)
        {
            if (GameManager.Instance.resetPlatforms == true)
            {
                if(!runOnce)
                {
                    runOnce = true;
                    transform.position = initialPosition;
                    currentWaitTime = 0.01f;
                    currentWaypoint = firstWaypoint;
                }
            }
               
            else
            {
                if (runOnce)
                {
                    runOnce = false;
                }

            }
        }

        if (crumbleTime > 0)
        {
            if (GameManager.Instance.resetPlatforms == true)
            {
                if (!runOnce)
                {
                    runOnce = true;
                    animator.Play("Base Layer.idle");
                    currentCrumbleTime = 0;
                    animator.SetTrigger(ANIMATION_RESTORE);
                }
                else
                {
                    if (runOnce)
                    {
                        runOnce = false;
                    }

                }
                
                
            }
        }
    }
    void FixedUpdate()
    {
       
        if (spinning)
        {
            if (!clockWise)
            {
                rotZ += Time.deltaTime * spinSpeed;
            }
            else
            {
                rotZ += -Time.deltaTime * spinSpeed;
            }

            transform.rotation = Quaternion.Euler(0, 0, rotZ);
        }

        if (crumbled)
        {

            if (currentRestoreTime > 0)
            {
                currentRestoreTime -= Time.fixedDeltaTime;
                if (currentRestoreTime <= 0)
                {
                    Restore();
                }
            }
        }
        else
        {
            if (currentCrumbleTime > 0)
            {
                currentCrumbleTime -= Time.fixedDeltaTime;
                if (currentCrumbleTime <= 0)
                {
                    crumbled = true;
                    animator.SetTrigger(ANIMATION_CRUMBLE);
                    myCollider.enabled = false;
                    if (restoreTime > 0)
                    {
                        currentRestoreTime = restoreTime;
                    }
                }
            }
            if (currentWaypoint)
            {
                if (currentWaitTime > 0)
                {
                    currentWaitTime -= Time.fixedDeltaTime;
                    return;
                }
                Vector2 distance = currentWaypoint.transform.position - transform.position;
                if (distance.magnitude <= decelerationDistance)
                {
                    if (distance.magnitude > 0)
                    {
                        speed -= Time.fixedDeltaTime * distance.normalized * maxSpeed * maxSpeed /
                            (2 * decelerationDistance);
                    }
                    else
                    {
                        speed = Vector2.zero;
                    }
                }
                else if (speed.magnitude < maxSpeed)
                {
                    if (accelerationDistance > 0)
                    {
                        speed += Time.fixedDeltaTime * distance.normalized * maxSpeed * maxSpeed /
                            (2 * accelerationDistance);
                    }
                    if (speed.magnitude > maxSpeed || accelerationDistance <= 0)
                    {
                        speed = distance.normalized * maxSpeed;
                    }
                }
                Vector3 newPos = Vector2.MoveTowards(transform.position, currentWaypoint.transform.position,
                    speed.magnitude * Time.fixedDeltaTime);
                Vector2 velocity = newPos - transform.position;
                if (speed.y > 0)
                {
                    transform.position = newPos;
                }
                else
                {
                    transform.position = newPos;
                }
                distance = currentWaypoint.transform.position - transform.position;
                if (distance.magnitude < 0.01f)
                {
                    speed = Vector2.zero;
                    currentWaypoint = currentWaypoint.nextWaipoint;
                    currentWaitTime = waitTime;
                }
            }
        }
    }

    public void isPlatformBroke()
    {
        if(CharacterAudio.Instance != null)
        CharacterAudio.Instance.Breakable();
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == "Player" && other.contacts[0].normal.y <= -0.99f && this.myCollider.Distance(other.collider).distance >= -0.05f && gameObject.layer != LayerMask.NameToLayer("Enemy"))
        {
            AttachObject(other);
            other.collider.transform.SetParent(transform, true);
        }
    }

    private void OnCollisionStay2D(Collision2D other)
    {
        if (other.gameObject.tag == "Player" && other.contacts[0].normal.y <= -0.99f && this.myCollider.Distance(other.collider).distance >= -0.05f && gameObject.layer != LayerMask.NameToLayer("Enemy"))
        {
            AttachObject(other);
            other.collider.transform.SetParent(transform, true);
        }
    }

    private void AttachObject(Collision2D other)
    {
        if (crumbled)
        {
            return;
        }
        Player obj = other.gameObject.GetComponent<Player>();
        if (obj && !objs.Contains(obj))
        {
            // doesn't attach to the obj if it's a 1 way platform and the obj is below it
                if ((obj.transform.position.y < transform.position.y + 0.7f) || this.myCollider.Distance(other.collider).distance < -0.006f)
                {
                    return;
                }
                objs.Add(obj);
                if (crumbleTime > 0 && currentCrumbleTime <= 0)
                {
                    if (!onlyPlayerCrumble || obj.GetComponent<Player>())
                    {
                        currentCrumbleTime = crumbleTime;
                        animator.SetTrigger(ANIMATION_CRUMBLING);
                    }
                }
            
        }
    }

    private void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Player") && gameObject.layer != LayerMask.NameToLayer("Enemy"))
        {
            Debug.Log("Exited Collider");
            other.collider.transform.SetParent(null);
            Player obj = other.gameObject.GetComponent<Player>();
            if (obj && objs.Contains(obj))
            {
                objs.Remove(obj);
                obj.RB.AddForce(speed);
            }
        }
    }

    public void Restore()
    {
        crumbled = false;
        myCollider.enabled = true;
        animator.SetTrigger(ANIMATION_RESTORE);
    }
}