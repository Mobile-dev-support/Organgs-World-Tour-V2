using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine;
using Unity.Cinemachine;
using UnityEngine.UI;
public class CameraVerticalController : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerMoveHandler
{
    public static CameraVerticalController Instance;
    [SerializeField]
    private CinemachineVirtualCamera vCam;
    [SerializeField]
    private CinemachineFramingTransposer vCamTransposer;
    public RectTransform panel;
    public float playerToCenter;
    public float initialPosition;
    private bool started;
    // Start is called before the first frame update
    void Start()
    {
        if(Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(this);
        }
    }

    private void Update()
    {
        if(vCam != null && vCam.Follow !=  null)
        {
            playerToCenter = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width / 2, Screen.height / 2, Camera.main.transform.position.z)).y -  vCam.Follow.transform.position.y;
        }
    }

    public void SetCameras()
    {
        vCam = GameObject.Find("CM vcam1").GetComponent<CinemachineVirtualCamera>();
        vCamTransposer = vCam.GetCinemachineComponent<CinemachineFramingTransposer>();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (started)
        {
            started = false;
            ResetCamera();
        }
       

    }

    public void OnPointerMove(PointerEventData eventData)
    {
        if (started)
        {
            MoveCamera(eventData.position.y - initialPosition);
            Debug.Log("Touched Moving: " + (eventData.position.y - initialPosition));
        }
        
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        initialPosition = eventData.position.y;
        started = true;

    }

    private void MoveCamera(float touchPositionDifference)
    {
        vCamTransposer.m_LookaheadTime = 0f;
        vCamTransposer.m_LookaheadSmoothing = 0;
        // Calculate the maximum and minimum offset values
        float maxOffset = 3.8f * (vCam.m_Lens.OrthographicSize / 4.5f);
        float minOffset = -3.8f * (vCam.m_Lens.OrthographicSize / 4.5f);

        // Scale the touch difference to be within the range [minOffset, maxOffset]
        float scaledOffset = Mathf.Clamp((touchPositionDifference / 80.0f * maxOffset) + playerToCenter, minOffset, maxOffset);

        // Set the calculated offset
        vCamTransposer.m_DeadZoneHeight = 0;
        vCamTransposer.m_TrackedObjectOffset.y = scaledOffset;
    }

    private void ResetCamera()
    {
        vCamTransposer.m_LookaheadTime = 0.3f;
        vCamTransposer.m_LookaheadSmoothing = 20;
        vCamTransposer.m_DeadZoneHeight = 0.25f;
        vCamTransposer.m_TrackedObjectOffset.y = 0;
    }
}
