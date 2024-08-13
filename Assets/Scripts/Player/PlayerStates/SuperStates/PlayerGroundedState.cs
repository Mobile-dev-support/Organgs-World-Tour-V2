using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGroundedState : PlayerState
{
    protected int xInput;
    protected int yInput;

    [SerializeField]protected bool Stunned;
    [SerializeField] protected bool isTouchingCeiling;
    [SerializeField] protected bool isTouchingWall;
    [SerializeField] protected bool isTouchingWallBack;
    [SerializeField] protected bool isSlippery;
    [SerializeField] protected bool isSugarPlatform;
    protected bool isCurrentlySliding;
    protected int xState = Animator.StringToHash("xState");
    protected int Candied = Animator.StringToHash("Candied");

    [SerializeField] private bool JumpInput;
    [SerializeField] private bool isGrounded;
    [SerializeField] private bool isDead;
    [SerializeField] private bool isStickingToPlatform;
    private bool isTouchingCeilingSolidPlatform;
    private int istouchingWall = Animator.StringToHash("isTouchingWall");

    private bool isThroughPlatform;



    public PlayerGroundedState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void DoChecks()
    {
        
        base.DoChecks();
        Stunned = player.IsStunned;
        isDead = core.CollisionSenses.Trap;
        isGrounded = core.CollisionSenses.Ground;
        isTouchingWall = core.CollisionSenses.WallFront;
        isTouchingWallBack = core.CollisionSenses.WallBack;
        isThroughPlatform = core.CollisionSenses.ThroughPlatform;
        isTouchingCeiling = core.CollisionSenses.Ceiling;
        isSlippery = core.CollisionSenses.SlipperyPlatform;
        isStickingToPlatform = core.CollisionSenses.SolidPlatform;
        isTouchingCeilingSolidPlatform = core.CollisionSenses.SolidPlatformCeiling;
        isSugarPlatform = core.CollisionSenses.SugarPlatform;
        player.Anim.SetBool(istouchingWall, isTouchingWall);

        if (isSugarPlatform && player.defaultValues.animationState != OliverStates.AfterShock)
        {
            Debug.Log("Candied");
            if (player.defaultValues.animationState != OliverStates.Candied)
            {
                Debug.Log("Candied2");
                playerData.candyTimer = 5f;
                player.defaultValues.animationState = OliverStates.Candied;

            }
          
        }

        if (isSlippery && !isTouchingWall)
        {
            player.defaultValues.movementVelocity = playerData.speedOnIce;
        }
        else if(!isSlippery && !player.afterShock && !player.isDrinking)
        {
            player.defaultValues.movementVelocity = playerData.NormalMovementVelocity;
            player.Anim.SetFloat(xState, 0.0f);
            player.Anim.SetFloat(Candied, 0.0f);
        }
    }

    public override void Enter()
    {
        base.Enter();
        player.JumpState.ResetAmountOfJumpsLeft();
    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
        xInput = player.InputHandler.NormInputX;
        yInput = player.InputHandler.NormInputY;
        JumpInput = player.InputHandler.JumpInput;
        if (JumpInput && player.JumpState.CanJump() && !isDead && !player.afterShock && !player.IsStunned)
        {
            player.slideCooldown = 0;
            stateMachine.ChangeState(player.JumpState);
        }
        else if (!isGrounded && !isSlippery && !isStickingToPlatform && !isThroughPlatform && !isSugarPlatform && !isDead)
        {
            player.InAirState.StartCoyoteTime();
            stateMachine.ChangeState(player.InAirState);
        }
        else if (isDead || (!isCurrentlySliding && (isTouchingCeiling || isTouchingCeilingSolidPlatform) && (isGrounded || isSlippery || isStickingToPlatform || isSugarPlatform))
            || player.transform.rotation.z != 0)
        {
            Debug.Log("Player died because of touching ceiling");
            stateMachine.ChangeState(player.DeathState);
        }
        else if(player.isDrinking && !isDead)
        {
            DrunkState();
        }

        /*if (isSugarPlatform)
        {
            player.defaultValues.animationState = OliverStates.Candied;
        }*/
    }

    public void DrunkState()
    {
        player.Anim.SetFloat(xState, 1.0f);
        if (Time.time >= startTime + playerData.Stunned)
        {
            player.DrunkControls();
            player.isNotStunned();
            player.drunk.SetActive(false);
            if (!Stunned && Time.time >= startTime + playerData.DrinkTimer)
            {
                player.isNotDrunk();
                player.Anim.SetFloat(xState, 0.0f);
                player.DefaultControls();
            }
        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
