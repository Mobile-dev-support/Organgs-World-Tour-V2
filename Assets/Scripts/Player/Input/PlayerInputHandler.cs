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
    public bool GrabInput { get; private set; }
    public bool DashInput { get; private set; }
    public bool DashInputStop { get; private set; }

    public bool[] AttackInputs { get; private set; }

    [SerializeField]
    private float inputHoldTime = 0.2f;

    private float jumpInputStartTime;
    private float dashInputStartTime;

    private void Start()
    {
        int count = Enum.GetValues(typeof(CombatInputs)).Length;
        AttackInputs = new bool[count];
        cam = Camera.main;
    }

    private void Update()
    {
        OnMoveInput(RawMovementInput);
        MovementControl();
    }

    private void FixedUpdate()
    {
        CheckJumpInputHoldTime();
    }

    private void MovementControl()
    {
#if UNITY_EDITOR
        RawMovementInput = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
        if (Input.GetButtonDown("Jump"))
        {
            OnJumpInput();
        }
        else if (Input.GetButtonUp("Jump"))
        {
            OnJumpInputStop();
        }
        if (Input.GetButtonDown("Fire3"))
        {
            OnSlideInput();
        }
        else if (Input.GetButtonUp("Fire3"))
        {
            OnSlideInputStop();
        }
#endif
#if UNITY_ANDROID
        RawMovementInput = new Vector2(SimpleInput.GetAxis("Horizontal"), SimpleInput.GetAxis("Vertical"));
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
#endif
#if UNITY_IOS
        RawMovementInput = new Vector2(SimpleInput.GetAxis("Horizontal"), SimpleInput.GetAxis("Vertical"));
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
#endif
    }

    public void OnPrimaryAttackInput()
    {
        //if (context.started)
        //{
        AttackInputs[(int)CombatInputs.primary] = true;
        //}

        //if (context.canceled)
        //{
        AttackInputs[(int)CombatInputs.primary] = false;
        //}
    }

    public void OnSecondaryAttackInput()
    {
        //if (context.started)
        //{
        AttackInputs[(int)CombatInputs.secondary] = true;
        //}

        //if (context.canceled)
        //{
        AttackInputs[(int)CombatInputs.secondary] = false;
        //}
    }

    public void OnMoveInput(Vector2 _axis)
    {
        _axis = RawMovementInput;
        NormInputX = Mathf.RoundToInt(RawMovementInput.x);
        NormInputY = Mathf.RoundToInt(RawMovementInput.y);

    }

    public void OnJumpInput()
    {
        //if (context.started)
        //{
        JumpInput = true;
        JumpInputStop = false;
        jumpInputStartTime = Time.time;
        //}

        //if (context.canceled)
        //{
        //JumpInputStop = true;
        //}
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


    public void OnGrabInput()
    {
        //if (context.started)
        //{
        GrabInput = true;
        //}

        //if (context.canceled)
        //{
        GrabInput = false;
        //}
    }

    public void UseJumpInput() => JumpInput = false;

    public void UseDashInput() => DashInput = false;

    private void CheckJumpInputHoldTime()
    {
        if (Time.time >= jumpInputStartTime + inputHoldTime)
        {
            JumpInput = false;
        }
    }
}

public enum CombatInputs
{
    primary,
    secondary
}
