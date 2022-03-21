using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class PlayerIdleState : PlayerGroundedState
{
    private bool SlideInput;

    public PlayerIdleState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void DoChecks()
    {
        base.DoChecks();
    }

    public override void Enter()
    {
        base.Enter();

        if (isSlippery && !isTouchingWall)
        {
            playerData.movementVelocity = playerData.speedOnIce;
            xInput = core.Movement.FacingDirection;
            player.RB.AddForce(new Vector2(playerData.movementVelocity * xInput *
            playerData.slipperyMultiplier, player.RB.velocity.y));
            player.Anim.SetFloat("xSlide", 0.3333333f);
        }

        core.Movement.SetVelocityX(0f);

    }

    public override void Exit()
    {
        base.Exit();
        isSlippery = false;
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
        SlideInput = player.InputHandler.SlideInput;
        if (!isExitingState)
        {
            if (!player.afterShock && !player.isDrinking)
            {
                if (xInput != 0)
                {
                    stateMachine.ChangeState(player.MoveState);
                }
                else if (SlideInput && !isTouchingWall && Time.time >= startTime + playerData.slideAgainTimer)
                {
                    stateMachine.ChangeState(player.CrouchIdleState);
                }
            }
        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
