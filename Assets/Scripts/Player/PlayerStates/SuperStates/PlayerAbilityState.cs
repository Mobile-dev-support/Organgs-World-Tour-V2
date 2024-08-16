using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAbilityState : PlayerState
{
    protected bool isAbilityDone;

    private bool isGrounded;
    private bool isSlippery;
    private bool isStickingToPlatform;
    private bool isThroughPlatform;
    private bool isSugarPlatform;
    private bool isDead;

    public PlayerAbilityState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void DoChecks()
    {
        base.DoChecks();
        isGrounded = core.CollisionSenses.Ground;
        isSlippery = core.CollisionSenses.SlipperyPlatform;
        isStickingToPlatform = core.CollisionSenses.SolidPlatform;
        isThroughPlatform = core.CollisionSenses.ThroughPlatform;
        isSugarPlatform = core.CollisionSenses.SugarPlatform;
        isDead = core.CollisionSenses.Trap;
    }

    public override void Enter()
    {
        base.Enter();
        
        isAbilityDone = false;
    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();

        if (isAbilityDone)
        {
            if ((isGrounded || isSlippery || isStickingToPlatform || isThroughPlatform || isSugarPlatform) && core.Movement.CurrentVelocity.y < 0.01f)
            {
                stateMachine.ChangeState(player.IdleState);
            }
            else
            {
                stateMachine.ChangeState(player.InAirState);
            }
        }
        else if (isDead)
        {
            Debug.Log("Death in ability state");
            stateMachine.ChangeState(player.DeathState);
        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
