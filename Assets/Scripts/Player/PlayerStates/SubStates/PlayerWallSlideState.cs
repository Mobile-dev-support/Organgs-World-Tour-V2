using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWallSlideState : PlayerTouchingWallState
{
    public PlayerWallSlideState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();

        if (!isExitingState)
        {
            core.Movement.SetVelocityY(-playerData.wallSlideVelocity);
        }

        if (player.candyTime > 0)
        {
            player.candyMeter.value = player.candyTime / playerData.candyTimer;
            player.candyTime -= Time.deltaTime/2;
        }
        else
        {
            player.candyMeter.gameObject.SetActive(false);
        }
    }
}
