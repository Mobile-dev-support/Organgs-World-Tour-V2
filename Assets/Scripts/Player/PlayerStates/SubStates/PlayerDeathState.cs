using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDeathState : PlayerGroundedState
{
    public PlayerDeathState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }
    public override void DoChecks()
    {
        base.DoChecks();
    }

    public override void Enter()
    {
        base.Enter();
        Die();
    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
    }

    private void Die()
    {
        GameObject deathChunk = GameObject.Instantiate(playerData.deathChunk, player.transform.position, playerData.deathChunk.transform.rotation) as GameObject;
        CameraShake.Instance.ShakeCamera(5f, .1f);
        playerData.movementVelocity = playerData.NormalMovementVelocity;
        playerData.jumpVelocity = playerData.defaultJumpVelocity;
        playerData.wallJumpVelocity = playerData.defaultWallJumpVelocity;
        player.Anim.SetFloat("xState", 0f);
        player.Anim.SetFloat("Candied", 0f);
        if (Fader.Instance != null)
        {
            Fader.Instance.BGFader(true);
            CountdownTimer.Instance.enabled = false;
        }

        if (Energy.Instance != null)
        {
            Energy.Instance.UseLife();
            if(Energy.Instance.extraLife > 0)
            {
                ScoringMechanism.Instance.NoOfLives = Energy.Instance.currentLife;
                GameManager.Instance.Respawn();
            }
            else
            {
                if (Energy.Instance.currentLife > 0)
                {
                    ScoringMechanism.Instance.NoOfLives = Energy.Instance.currentLife;
                    GameManager.Instance.Respawn();
                }
                else
                {
                    MainMenu.Instance.GameOverLevel();
                }
            }
        }
        else
        {
            GameManager.Instance.Respawn();
        }
        Object.Destroy(player.gameObject, 0.09f);
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }

} 
