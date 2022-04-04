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
    public Transform DashDirectionIndicator { get; private set; }
    public BoxCollider2D MovementCollider { get; private set; }
    public PlayerInventory Inventory { get; private set; }
    public bool afterShock { get; private set; }
    public bool isDrinking { get; private set; }
    public bool isCandied { get; set; }
    #endregion

    #region Other Variables         
    public GameObject drunk;
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
        DashDirectionIndicator = transform.Find("DashDirectionIndicator");
        MovementCollider = GetComponent<BoxCollider2D>();
        Inventory = GetComponent<PlayerInventory>();
        if (Energy.Instance != null)
        {
            ScoringMechanism.Instance.NoOfLives = Energy.Instance.currentLife;
        }
        isCheesed = false;
        ScoringMechanism.Instance.NumberOfLives();
        StateMachine.Initialize(IdleState);
    }

    private void OnEnable()
    {
        //Core.CollisionSenses.ground = 
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
            Anim.SetFloat("xSlide", 0.6666667f);
            playerData.jumpVelocity = playerData.cheeseJumpVelocity;
            playerData.wallJumpVelocity = playerData.cheeseWallJumpVelocity;
            if (playerData.cheeseTimer < 0)
            {
                playerData.cheeseTimer = 2f;
                playerData.jumpVelocity = playerData.defaultJumpVelocity;
                playerData.wallJumpVelocity = playerData.defaultWallJumpVelocity;
                Anim.SetFloat("xSlide", 0.0f);
                isCheesed = false;
            }
        }
        if (isCandied)
        {
            playerData.candyTimer -= Time.deltaTime;
            playerData.movementVelocity = playerData.CandymovementVelocity;
            if (playerData.candyTimer < 0)
            {
                playerData.candyTimer = 5f;
                playerData.movementVelocity = playerData.NormalMovementVelocity;
                Anim.SetFloat("xSlide", 1.0f);
                afterShock = true;
            }
        }
        if (afterShock)
        {
            Core.Movement.SetVelocityZero();
            Core.Movement.CanSetVelocity = false;
            playerData.afterShockTimer -= Time.deltaTime;
            if (playerData.afterShockTimer < 0)
            {
                afterShock = false;
                playerData.afterShockTimer = 2f;
                Anim.SetFloat("xSlide", 0.0f);
                Core.Movement.CanSetVelocity = true;
                isCandied = false;
            }
        }
        if (isDrinking)
        {
            Core.Movement.SetVelocityZero();
            Core.Movement.CanSetVelocity = false;
            playerData.DrinkTimer -= Time.deltaTime;
            Anim.SetFloat("xSlide", 1.0f);
            if (playerData.DrinkTimer < 0)
            {
                isDrinking = false;
                playerData.DrinkTimer = 2f;
                Anim.SetFloat("xSlide", 0.0f);
                drunk.SetActive(false);
                Core.Movement.CanSetVelocity = true;
            }
        }
    }

    private void OnDestroy()
    {
        playerData.movementVelocity = playerData.NormalMovementVelocity;
        playerData.jumpVelocity = playerData.defaultJumpVelocity;
        playerData.wallJumpVelocity = playerData.defaultWallJumpVelocity;
        Anim.SetFloat("xSlide", 0.0f);
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

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Cheese"))
        {
            playerData.cheeseTimer = 2f;
            isCheesed = true;
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Alcohol"))
        {
            drunk.SetActive(true);
            isDrinking = true;
        }
    }

    #endregion
}
