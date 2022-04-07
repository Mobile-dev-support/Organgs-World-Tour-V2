using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpState : State
{
    protected D_JumpState stateData;

    protected bool isDetectingWall;
    protected bool isDetectingLedge;
    protected bool isDetectingLedgeHorizontal;
    protected bool isGrounded;
    protected bool performCloseRangeAction;
    protected bool isPlayerInMaxAgroRange;
    protected bool isJumpOver;
    protected bool isDead;

    public JumpState(Entity etity, FiniteStateMachine stateMachine, string animBoolName, D_JumpState stateData) : base(etity, stateMachine, animBoolName)
    {
        this.stateData = stateData;
    }

    public override void DoChecks()
    {
        base.DoChecks();
        //isDetectingLedgeHorizontal = core.CollisionSenses.LedgeHorizontal;
        performCloseRangeAction = entity.CheckPlayerInCloseRangeAction();
        isPlayerInMaxAgroRange = entity.CheckPlayerInMaxAgroRange();
        isGrounded = core.CollisionSenses.Ground;
        isDead = core.CollisionSenses.Trap;
    }

    public override void Enter()
    {
        base.Enter();

        isJumpOver = false;

        core.Movement.SetVelocity(stateData.jumpSpeed, stateData.jumpAngle, core.Movement.FacingDirection);
    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();

        if (Time.time >= startTime + stateData.jumpTime && isGrounded)
        {
            isJumpOver = true;
        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }

}
