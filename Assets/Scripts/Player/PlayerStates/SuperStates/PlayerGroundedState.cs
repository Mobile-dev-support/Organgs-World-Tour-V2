using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGroundedState : PlayerState
{
    protected int xInput;
    protected int yInput;

    protected bool Stunned;
    protected bool isTouchingCeiling;
    protected bool isTouchingWall;
    protected bool isTouchingWallBack;
    protected bool isSlippery;
    protected bool isSugarPlatform;
    protected bool isCurrentlySliding;
    protected int xState = Animator.StringToHash("xState");
    protected int Candied = Animator.StringToHash("Candied");

    private bool JumpInput;
    private bool isGrounded;
    private bool isDead;
    private bool isStickingToPlatform;
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
        if (isSugarPlatform && !player.isCandied)
        {
            playerData.candyTimer = 5f;
            player.isCandied = true;
        }

        if (isSlippery && !isTouchingWall)
        {
            playerData.movementVelocity = playerData.speedOnIce;
        }
        else if(!isSlippery && !player.afterShock && !player.isDrinking)
        {
            playerData.movementVelocity = playerData.NormalMovementVelocity;
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
            stateMachine.ChangeState(player.JumpState);
        }
        else if (!isGrounded && !isSlippery && !isStickingToPlatform && !isThroughPlatform && !isSugarPlatform && !isDead)
        {
            player.InAirState.StartCoyoteTime();
            stateMachine.ChangeState(player.InAirState);
        }
        else if (isDead || ( !isCurrentlySliding && (isTouchingCeiling || isTouchingCeilingSolidPlatform) && (isGrounded || isSlippery || isStickingToPlatform || isSugarPlatform))
            || (isTouchingWall && isTouchingWallBack && (isGrounded || isSlippery || !isThroughPlatform || isSugarPlatform)) || player.transform.rotation.z != 0)
        {
            stateMachine.ChangeState(player.DeathState);
        }
        else if(player.isDrinking)
        {
            DrunkState();
        }
    }

    private void DrunkState()
    {
        player.Anim.SetFloat(xState, 1.0f);
        if (Time.time >= startTime + playerData.Stunned)
        {
            player.isNotStunned();
            player.drunk.SetActive(false);
            if (!Stunned && Time.time >= startTime + playerData.DrinkTimer)
            {
                player.isNotDrunk();
                player.Anim.SetFloat(xState, 0.0f);
            }
        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
