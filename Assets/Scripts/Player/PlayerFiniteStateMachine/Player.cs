using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

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

    [SerializeField]
    private PlayerData playerData;
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
    public bool isCandied { get; set; }
    public bool Stunned { get; set; }
#endregion

#region Other Variables         
    public GameObject drunk;
    public Animator statusEffect;
    private int Candied = Animator.StringToHash("Candied");
    private int xState = Animator.StringToHash("xState");
    private int status = Animator.StringToHash("status");
    public ParticleSystem dust;
    private Vector2 workspace;
    private bool isCheesed;
    #endregion

    #region Unity Callback Functions
    private void Awake()
    {
        Core = GetComponentInChildren<Core>();
        if (Energy.Instance != null)
        {
            playerData.health = Energy.Instance.currentLife;
        }

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
        Anim = GetComponent<Animator>();
        InputHandler = GetComponent<PlayerInputHandler>();
        RB = GetComponent<Rigidbody2D>();
        MovementCollider = GetComponent<BoxCollider2D>();
        if (Energy.Instance != null)
        {
            ScoringMechanism.Instance.NoOfLives = Energy.Instance.currentLife;
            ScoringMechanism.Instance.NumberOfLives();
            DefaultControls();
        }
        isCheesed = false;
        playerData.movementVelocity = playerData.NormalMovementVelocity;
        playerData.jumpVelocity = playerData.defaultJumpVelocity;
        playerData.wallJumpVelocity = playerData.defaultWallJumpVelocity;
        Anim.SetFloat(xState, 0f);
        Anim.SetFloat(Candied, 0f);
        StateMachine.Initialize(IdleState);
    }

    private void Update()
    {
        Core.LogicUpdate();
        StateMachine.CurrentState.LogicUpdate();
    }

    private void EnemyCollisions()
    {
        if (isCheesed)
        {

            playerData.cheeseTimer -= Time.deltaTime;
            Anim.SetFloat(xState, 0.5f);
            playerData.jumpVelocity = playerData.cheeseJumpVelocity;
            playerData.wallJumpVelocity = playerData.cheeseWallJumpVelocity;

            if (playerData.cheeseTimer < 0)
            {
                playerData.cheeseTimer = 2f;
                playerData.jumpVelocity = playerData.defaultJumpVelocity;
                playerData.wallJumpVelocity = playerData.defaultWallJumpVelocity;
                Anim.SetFloat(xState, 0f);
<<<<<<< Updated upstream
                isCheesed = false;
            }
        }
        if (isCandied)
        {
            playerData.candyTimer -= Time.deltaTime;
            playerData.movementVelocity = playerData.CandymovementVelocity;
            Anim.SetFloat(Candied, 0.5f);
            if (playerData.candyTimer < 0)
            {
                playerData.candyTimer = 5f;
                playerData.movementVelocity = playerData.NormalMovementVelocity;
=======
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
                Core.Movement.RB.linearVelocity = new Vector2(0,RB.linearVelocity.y);
                Core.Movement.CanSetVelocity = false;
>>>>>>> Stashed changes
                afterShock = true;
            }
        }
        if (afterShock)
        {
            Anim.SetFloat(Candied, 1f);
            Core.Movement.SetVelocityZero();
            Core.Movement.CanSetVelocity = false;
            playerData.afterShockTimer -= Time.deltaTime;
            if (playerData.afterShockTimer < 0)
            {
                afterShock = false;
                playerData.afterShockTimer = 2f;
                Anim.SetFloat(Candied, 0f);
                Core.Movement.CanSetVelocity = true;
                isCandied = false;
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
        EnemyCollisions();
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

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Cheese"))
        {
            playerData.cheeseTimer = 2f;
            statusEffect.SetTrigger(status);
            isCheesed = true;
        }
        if (other.gameObject.CompareTag("Alcohol"))
        {
            drunk.SetActive(true);
            statusEffect.SetTrigger(status);
            DrunkControls();
            isStunned();
            isDrunk();
        }
    }

    public void DrunkControls() 
    {
        PlayerControls.Instance.left.value = 1;
        PlayerControls.Instance.right.value = -1;
        PlayerControls.Instance.slide.button.Key = "Jump";
        PlayerControls.Instance.jump.button.Key = "Fire3";
    }

    public void DefaultControls()
    {
        PlayerControls.Instance.left.value = -1;
        PlayerControls.Instance.right.value = 1;
        PlayerControls.Instance.jump.button.Key = "Jump";
        PlayerControls.Instance.slide.button.Key = "Fire3";
    }
    #endregion
}
