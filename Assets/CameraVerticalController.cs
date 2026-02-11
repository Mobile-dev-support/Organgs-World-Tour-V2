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
    public float playerToCenterX;
    public float playerToCenterY;
    public float initialPositionY;
    public float initialPositionX;
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
        if (vCam != null && vCam.Follow != null)
        {
            float depth =
                Mathf.Abs(
                    Camera.main.transform.position.z -
                    vCam.Follow.position.z
                );

            float screenCenterY =
                Camera.main.ScreenToWorldPoint(
                    new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, depth)
                ).y;
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
            MoveCamera(eventData.position.x - initialPositionX, eventData.position.y - initialPositionY);
            Debug.Log("Touched Moving: " + (eventData.position.y - initialPositionY));
        }
        
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        initialPositionY = eventData.position.y;
        initialPositionX = eventData.position.x;
        started = true;

    }

    private void MoveCamera(float touchDeltaX, float touchDeltaY)
    {
        vCamTransposer.m_LookaheadTime = 0f;
        vCamTransposer.m_LookaheadSmoothing = 0;
        vCamTransposer.m_DeadZoneHeight = 0f;
        vCamTransposer.m_DeadZoneWidth = 0f;

        float maxOffset = 3.8f * (vCam.m_Lens.OrthographicSize / 4.5f);

        float normalizedX = touchDeltaX / Screen.width;
        float normalizedY = touchDeltaY / Screen.height;

        float offsetX = Mathf.Clamp(normalizedX * maxOffset * 0.8f, -maxOffset, maxOffset);

        float offsetY = Mathf.Clamp(
            (normalizedY * maxOffset * 2f) + playerToCenterY,
            -maxOffset,
            maxOffset
        );

        Transform follow = vCam.Follow;
        Quaternion inverseRotation = Quaternion.Inverse(follow.rotation);

        Vector3 worldOffset = new Vector3(offsetX, offsetY, 0);
        Vector3 localOffset = inverseRotation * worldOffset;

        vCamTransposer.m_TrackedObjectOffset = localOffset;
    }



    private void ResetCamera()
    {
        vCamTransposer.m_LookaheadTime = 0.3f;
        vCamTransposer.m_LookaheadSmoothing = 20;

        vCamTransposer.m_TrackedObjectOffset.y = 0;
        vCamTransposer.m_TrackedObjectOffset.x = 0;
    }
}
