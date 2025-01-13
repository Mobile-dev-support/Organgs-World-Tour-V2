using DG.Tweening.Core.Easing;
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

        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.ButtonSound(deathChunk.GetComponent<AudioSource>().clip);
        }
       
        CameraShake.Instance.ShakeCamera(5f, .1f);
        Object.Destroy(player.gameObject);
        if(Fader.Instance != null)
        {
            Fader.Instance.BGFader(true);
            CountdownTimer.Instance.enabled = false;
            player.isNotDrunk();

        }
        if (BasicLife.Instance.life > 1)
        {
            BasicLife.Instance.SubtractLife(1);
            GameManager.Instance.Respawn();
        }
        else
        {
            if (BasicLife.Instance.life == 0)
            {
                if (BasicLife.Instance.extraLife > 1)
                {
                    BasicLife.Instance.SubtractExtraLife(1);
                    GameManager.Instance.Respawn();
                }
                else
                {
                    BasicLife.Instance.SubtractExtraLife(1);
                    MainMenu.Instance.GameOverScreen(1);
                }
            }
            else
            {
                BasicLife.Instance.SubtractLife(1);
                if (BasicLife.Instance.extraLife < 1)
                {
                    MainMenu.Instance.GameOverScreen(1);
                }
                else
                {
                    GameManager.Instance.Respawn();
                }
            }
            
        }

    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }

} 
