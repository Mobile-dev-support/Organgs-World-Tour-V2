using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveState : State
{
    protected D_MoveState stateData;

    protected bool isDetectingWall;
    protected bool isGrounded;
    protected bool isDead;
    //protected bool isDetectingLedge;
    protected bool isDetectingLedgeHorizontal;
    protected bool isPlayerInMinAgroRange;

    public MoveState(Entity etity, FiniteStateMachine stateMachine, string animBoolName, D_MoveState stateData) : base(etity, stateMachine, animBoolName)
    {
        this.stateData = stateData;
    }

    public override void DoChecks()
    {
        base.DoChecks();
        isGrounded = core.CollisionSenses.Ground;
        //isDetectingLedge = core.CollisionSenses.LedgeVertical;
        isDetectingLedgeHorizontal = core.CollisionSenses.LedgeHorizontal;
        isDetectingWall = core.CollisionSenses.WallFront;
        isPlayerInMinAgroRange = entity.CheckPlayerInMinAgroRange();
        isDead = core.CollisionSenses.Trap;
    }

    public override void Enter()
    {
        base.Enter();
        core.Movement.SetVelocityX(stateData.movementSpeed * core.Movement.FacingDirection);

    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
        core.Movement.SetVelocityX(stateData.movementSpeed * core.Movement.FacingDirection);
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
