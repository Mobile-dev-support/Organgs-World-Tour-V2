using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInputHandler : MonoBehaviour
{
    //private PlayerInput playerInput;
    private Camera cam;

    public Vector2 RawMovementInput { get; private set; }
    public Vector2 RawDashDirectionInput { get; private set; }
    public Vector2Int DashDirectionInput { get; private set; }
    public int NormInputX { get; private set; }
    public int NormInputY { get; private set; }
    public bool JumpInput { get; private set; }
    public bool SlideInput { get; private set; }
    public bool JumpInputStop { get; private set; }


    public bool[] AttackInputs { get; private set; }

    [SerializeField]
    private float inputHoldTime = 0.2f;

    private float jumpInputStartTime;

    private void Start()
    {
        cam = Camera.main;
    }

    private void Update()
    {
        MovementControl();
        OnMoveInput();
    }

    private void FixedUpdate()
    {
        CheckJumpInputHoldTime();
    }

    private void MovementControl()
    {
        RawMovementInput = new Vector2(SimpleInput.GetAxisRaw("Horizontal"), SimpleInput.GetAxisRaw("Vertical"));
        if (SimpleInput.GetButtonDown("Jump"))
        {
            OnJumpInput();
        }
        else if (SimpleInput.GetButtonUp("Jump"))
        {
            OnJumpInputStop();
        }
        if(SimpleInput.GetButtonDown("Fire3"))
        {
            OnSlideInput();
        }
        else if (SimpleInput.GetButtonUp("Fire3"))
        {
            OnSlideInputStop();
        }
    }

    public void OnMoveInput()
    {
        NormInputX = Mathf.RoundToInt(RawMovementInput.x);
        NormInputY = Mathf.RoundToInt(RawMovementInput.y);
    }

    public void OnJumpInput()
    {
        JumpInput = true;
        JumpInputStop = false;
        jumpInputStartTime = Time.time;
    }

    public void OnSlideInput()
    {
        SlideInput = true;
    }

    public void OnSlideInputStop()
    {
        SlideInput = false;
    }

    public void OnJumpInputStop()
    {
        JumpInputStop = true;
    }

    public void UseJumpInput() => JumpInput = false;

    private void CheckJumpInputHoldTime()
    {
        if (Time.time >= jumpInputStartTime + inputHoldTime)
        {
            JumpInput = false;
        }
    }
}
