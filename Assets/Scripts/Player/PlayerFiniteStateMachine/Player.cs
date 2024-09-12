using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using TMPro;
using UnityEngine.UIElements;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms.Impl;
using System.Linq;

public class Player : MonoBehaviour
{
    #region State Variables
    public PlayerStateMachine StateMachine { get; private set; }

    public PlayerIdleState IdleState { get; private set; }
    public PlayerMoveState MoveState { get; private set; }
    public PlayerJumpState JumpState { get; private set; }
    public PlayerInAirState InAirState { get; private set; }
    public PlayerLandState LandState { get; private set; }
    public PlayerWallSlideState WallSlideState { get; private set; }
    public PlayerWallJumpState WallJumpState { get; private set; }
    public PlayerLedgeClimbState LedgeClimbState { get; private set; }
    public PlayerCrouchIdleState CrouchIdleState { get; private set; }
    public PlayerDeathState DeathState { get; private set; }

    public float slideCooldown;
    [SerializeField]
    private PlayerData playerData;
    public DefaultValues defaultValues;
    #endregion

    #region Components
    public Core Core { get; private set; }
    public Animator Anim { get; private set; }
    public PlayerInputHandler InputHandler { get; private set; }
    public Rigidbody2D RB { get; private set; }
    public BoxCollider2D MovementCollider { get; private set; }
    public bool afterShock { get; private set; }
    public bool isDrinking { get; private set; }
    public bool IsStunned { get; private set; }
    public bool Stunned { get; set; }

    bool isSugarPlatform;
    float sugarPlatformDecreaseMultiplier;

    #endregion

    #region Other Variables         
    public GameObject drunk;
    public Animator statusEffect;
    public ParticleSystem dust;
    public UnityEngine.UI.Slider candyMeter;

    private float startTime;

    private Vector2 workspace;
    public float candyTime;
    private float afterShockTime;
    private int Candied = Animator.StringToHash("Candied");
    private int xState = Animator.StringToHash("xState");
    private int status = Animator.StringToHash("status");

    public GameObject playerModel;
    public CollisionSenses collisionSenses;
    #endregion

    #region Unity Callback Functions
    private void Awake()
    {
        Core = GetComponentInChildren<Core>();
        defaultValues = new DefaultValues();
        StateMachine = new PlayerStateMachine();
        IdleState = new PlayerIdleState(this, StateMachine, playerData, "idle");
        MoveState = new PlayerMoveState(this, StateMachine, playerData, "move");
        JumpState = new PlayerJumpState(this, StateMachine, playerData, "inAir");
        InAirState = new PlayerInAirState(this, StateMachine, playerData, "inAir");
        LandState = new PlayerLandState(this, StateMachine, playerData, "land");
        WallSlideState = new PlayerWallSlideState(this, StateMachine, playerData, "wallSlide");
        WallJumpState = new PlayerWallJumpState(this, StateMachine, playerData, "inAir");
        LedgeClimbState = new PlayerLedgeClimbState(this, StateMachine, playerData, "ledgeClimbState");
        CrouchIdleState = new PlayerCrouchIdleState(this, StateMachine, playerData, "crouchIdle");
        DeathState = new PlayerDeathState(this, StateMachine, playerData, "death");
    }

    private void Start()
    {
        startTime = Time.time;
        Anim = GetComponent<Animator>();
        InputHandler = GetComponent<PlayerInputHandler>();
        RB = GetComponent<Rigidbody2D>();
        MovementCollider = GetComponent<BoxCollider2D>();
        StateMachine.Initialize(IdleState);
        Initialize();
    }

    private void Initialize()
    {
        Anim.SetFloat(xState, 0f);
        Anim.SetFloat(Candied, 0f);
        afterShockTime = playerData.afterShockTimer;
        //candyTime = playerData.candyTimer;
        defaultValues.animationState = OliverStates.Normal;
        defaultValues.jumpVelocity = playerData.defaultJumpVelocity;
        defaultValues.wallJumpVelocity = playerData.defaultWallJumpVelocity;
        defaultValues.movementVelocity = playerData.NormalMovementVelocity;
        DefaultControls();
    }

    private void Update()
    {
        Core.LogicUpdate();
        StateMachine.CurrentState.LogicUpdate();
        if(candyMeter.gameObject.active)
        {
            Vector3 pos = Camera.main.WorldToScreenPoint(new Vector3 (this.gameObject.transform.position.x, this.gameObject.transform.position.y+1, this.gameObject.transform.position.z));
            candyMeter.transform.position = pos;
           
        }

        if (isDrinking)
        {
            DrunkState();
        }

        if (playerData.afterShockTimer > 0 && afterShock == true)
        {
            Anim.SetFloat(xState, 0f);
            candyTime = 0;
            candyMeter.gameObject.SetActive(false);
            playerData.afterShockTimer -= Time.deltaTime;
            Core.Movement.CanSetVelocity = false;
            defaultValues.animationState = OliverStates.AfterShock;
        }
        if (playerData.afterShockTimer <= 0 && afterShock == true)
        {
            afterShock = false;
            playerData.afterShockTimer = 1.5f;
            Anim.SetFloat(Candied, 0f);
            Core.Movement.CanSetVelocity = true;
            defaultValues.animationState = OliverStates.Normal;
        }

      
        isSugarPlatform = Core.CollisionSenses.SugarPlatform;
        if (!isSugarPlatform)
        {
            if (candyTime > 0)
            {
                Debug.Log(StateMachine.CurrentState);
                switch (StateMachine.CurrentState)
                {
                    
                    case PlayerJumpState:
                    case PlayerInAirState:
                        sugarPlatformDecreaseMultiplier = 0.01f;
                        break;
                    case PlayerWallSlideState:
                    case PlayerWallJumpState:
                    case PlayerLandState:
                    case PlayerLedgeClimbState:
                        sugarPlatformDecreaseMultiplier = 0.1f;
                        break;
                    case PlayerGroundedState:
                        sugarPlatformDecreaseMultiplier = 1f;
                        break;
                    default:
                        sugarPlatformDecreaseMultiplier = 0.2f;
                        break;
                }
                candyMeter.value = candyTime / playerData.candyTimer;
                candyTime -= Time.deltaTime * sugarPlatformDecreaseMultiplier;
            }
            else
            {
                candyMeter.gameObject.SetActive(false);
            }

            if (defaultValues.animationState != OliverStates.Cheesed && defaultValues.animationState != OliverStates.Drunk && defaultValues.animationState != OliverStates.AfterShock)
                defaultValues.animationState = OliverStates.Normal;
        }
    }

    private void PlayerAnimationStatusStates()
    {
        switch (defaultValues.animationState)
        {
            case OliverStates.Normal:
                defaultValues.jumpVelocity = playerData.defaultJumpVelocity;
                defaultValues.wallJumpVelocity = playerData.defaultWallJumpVelocity;
                defaultValues.movementVelocity = playerData.NormalMovementVelocity;
                Anim.SetFloat(xState, 0f);
                Anim.SetFloat(Candied, 0f);
                break;
            case OliverStates.Cheesed:
                defaultValues.jumpVelocity = playerData.cheeseJumpVelocity;
                defaultValues.wallJumpVelocity = playerData.cheeseWallJumpVelocity;
                Anim.SetFloat(xState, 0.5f);
                break;
            case OliverStates.Candied:
                defaultValues.jumpVelocity = playerData.defaultJumpVelocity;
                defaultValues.wallJumpVelocity = playerData.defaultWallJumpVelocity;
                defaultValues.movementVelocity = playerData.CandymovementVelocity;
                Anim.SetFloat(Candied, 0.5f);
                break;
            case OliverStates.AfterShock:
                Anim.SetFloat(Candied, 1f);
                Core.Movement.RB.velocity = new Vector2(0,RB.velocity.y);
                Core.Movement.CanSetVelocity = false;
                afterShock = true;
                break;
            case OliverStates.Drunk:
                Debug.Log("Drunk");
                break;
        }


          

         
        
       
    }

    private IEnumerator CheeseStatusState()
    {
        defaultValues.animationState = OliverStates.Cheesed;
        yield return new WaitForSeconds(playerData.cheeseTimer);
        defaultValues.animationState = OliverStates.Normal;
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Cheese"))
        {
            statusEffect.SetTrigger(status);
            StartCoroutine(CheeseStatusState());
        }
        if (other.gameObject.CompareTag("Alcohol"))
        {
            startTime = Time.time;  
            drunk.SetActive(true);
            statusEffect.SetTrigger(status);
            DrunkControls();
            isStunned();
            isDrunk();
        }
        if (other.gameObject.layer == LayerMask.NameToLayer("Ground"))
        {
            ContactPoint2D pointOfContact = other.contacts.FirstOrDefault(contact => contact.normal.y <= -0.99f && contact.collider.gameObject.layer == LayerMask.NameToLayer("Ground"));
            if (pointOfContact.normal.y <= -0.99f && pointOfContact.point != Vector2.zero)
            {
                collisionSenses.isTouchingCeilingGround = true;
                Debug.Log("Name:" + other.gameObject.name + " Contact:" + pointOfContact.ToString());
            }
        }
        if (other.gameObject.layer == LayerMask.NameToLayer("SolidPlatform"))
        {
            var pointOfContact = other.contacts.FirstOrDefault(contact => contact.normal.y <= -0.99f && contact.collider.gameObject.layer == LayerMask.NameToLayer("SolidPlatform"));
            if (pointOfContact.normal.y <= -0.99f && pointOfContact.point != Vector2.zero)
            {
                collisionSenses.isTouchingCeilingSolidPlatform = true;
                Debug.Log("Name:" + other.gameObject.name + " Contact:" + pointOfContact.ToString());
            }

        }

        if (other.gameObject.layer == LayerMask.NameToLayer("ThroughPlatform"))
        {
            var pointOfContact = other.contacts.FirstOrDefault(contact => contact.normal.y >= 0.99f && contact.collider.gameObject.layer == LayerMask.NameToLayer("ThroughPlatform"));
            if (pointOfContact.normal.y >= 0.99f && pointOfContact.point != Vector2.zero && this.GetComponent<Collider2D>().Distance(other.collider).distance >= -0.05f)
            { 
                collisionSenses.isTouchingThroughPlatform = true;
            }

        }

    }

    private void OnCollisionStay2D(Collision2D other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Ground"))
        {
            ContactPoint2D pointOfContact = other.contacts.FirstOrDefault(contact => contact.normal.y <= -0.99f && contact.collider.gameObject.layer == LayerMask.NameToLayer("Ground"));
            if (pointOfContact.normal.y <= -0.99f && pointOfContact.point != Vector2.zero)
            {
                collisionSenses.isTouchingCeilingGround = true;
                Debug.Log("Name:" + other.gameObject.name + " Contact:" + pointOfContact.ToString());
            }
            else
            {
                if (collisionSenses.isTouchingCeilingGround == true)
                {
                    collisionSenses.isTouchingCeilingGround = false;
                }
                    
            }
        }
        if (other.gameObject.layer == LayerMask.NameToLayer("SolidPlatform"))
        {
            var pointOfContact = other.contacts.FirstOrDefault(contact => contact.normal.y <= -0.99f && contact.collider.gameObject.layer == LayerMask.NameToLayer("SolidPlatform"));
            if (pointOfContact.normal.y <= -0.99f && pointOfContact.point != Vector2.zero)
            {
                collisionSenses.isTouchingCeilingSolidPlatform = true;
                Debug.Log("Name:" + other.gameObject.name + " Contact:" + pointOfContact.ToString());
            }


        }

        if (other.gameObject.layer == LayerMask.NameToLayer("ThroughPlatform"))
        {
            var pointOfContact = other.contacts.FirstOrDefault(contact => contact.normal.y >= 0.99f && contact.collider.gameObject.layer == LayerMask.NameToLayer("ThroughPlatform"));
            if (pointOfContact.normal.y >= 0.99f && pointOfContact.point != Vector2.zero &&this.GetComponent<Collider2D>().Distance(other.collider).distance >= -0.05f)
            {
                collisionSenses.isTouchingThroughPlatform = true;
            }

        }


    }

    private void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Ground"))
        {
            if(collisionSenses.isTouchingCeilingGround == true)
            collisionSenses.isTouchingCeilingGround = false;


        }

        if (other.gameObject.layer == LayerMask.NameToLayer("SolidPlatform"))
        {
            if (collisionSenses.isTouchingCeilingSolidPlatform == true)
                collisionSenses.isTouchingCeilingSolidPlatform = false;

        }

        if (other.gameObject.layer == LayerMask.NameToLayer("ThroughPlatform"))
        {
            if (collisionSenses.isTouchingThroughPlatform == true)
            {
                collisionSenses.isTouchingThroughPlatform = false;
            }

        }
    }

    private void OnDestroy()
    {
        if(gameObject == null)
            StateMachine.Initialize(DeathState);
    }

    private void FixedUpdate()
    {
        StateMachine.CurrentState.PhysicsUpdate();
        PlayerAnimationStatusStates();
    }
    #endregion

    #region Other Functions

    public void SetColliderHeight(float height)
    {
        Vector2 center = MovementCollider.offset;
        workspace.Set(MovementCollider.size.x, height);

        center.y += (height - MovementCollider.size.y) / 2;

        MovementCollider.size = workspace;
        MovementCollider.offset = center;
    }   

    private void AnimationTrigger() => StateMachine.CurrentState.AnimationTrigger();

    private void AnimtionFinishTrigger() => StateMachine.CurrentState.AnimationFinishTrigger();

    public void isNotDrunk() => isDrinking = false;
    public void isDrunk() => isDrinking = true;
    public void isNotStunned() => IsStunned = false;
    public void isStunned() => IsStunned = true;

    public void DrunkControls() 
    {
        //PlayerControls.Instance.left.value = 1;
        //PlayerControls.Instance.right.value = -1;
        PlayerControls.Instance.joystick.valueMultiplier = -1;
        PlayerControls.Instance.slide.button.Key = "Jump";
        PlayerControls.Instance.jump.button.Key = "Fire3";
    }
    public void DrunkState()
    {
        Anim.SetFloat(xState, 1.0f);
        Anim.SetFloat(Candied, 0.0f);
        if (Time.time >= startTime + playerData.Stunned)
        {
            DrunkControls();
            isNotStunned();
            drunk.SetActive(false);
            if (!Stunned && Time.time >= startTime + playerData.DrinkTimer)
            {
                isNotDrunk();
                Anim.SetFloat(xState, 0.0f);
                DefaultControls();
            }
        }
    }


    public void DefaultControls()
    {
        //PlayerControls.Instance.left.value = -1;
        //PlayerControls.Instance.right.value = 1;
        PlayerControls.Instance.joystick.valueMultiplier = 1;
        PlayerControls.Instance.jump.button.Key = "Jump";
        PlayerControls.Instance.slide.button.Key = "Fire3";
    }
    #endregion
}
