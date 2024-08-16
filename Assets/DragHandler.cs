using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;       
public class ScrollEndDragHandler : MonoBehaviour,IBeginDragHandler, IEndDragHandler
{
    private ScrollRect scrollRect;
    private Scrollbar scrollBar;
    float startPosition;
    float endPosition;
    // This method will be called when dragging ends

    private void Awake()
    {
        scrollRect = GetComponent<ScrollRect>();
        scrollBar = scrollRect.horizontalScrollbar;
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        startPosition = scrollBar.value;
    }
    public void OnEndDrag(PointerEventData eventData)
    {
        endPosition = scrollBar.value;
        var difference = startPosition - endPosition;
        if(difference >= 0.015f)
        {
            Debug.Log("Left");
            UIFocus.Instance.FocusOnNearestObjectToCenter(-300);
        }
        else if(difference <= -0.015f)
        {

            Debug.Log("Right");
            UIFocus.Instance.FocusOnNearestObjectToCenter(300);
        }
        else
        {
            UIFocus.Instance.FocusOnNearestObjectToCenter(0);
        }
        Debug.Log(startPosition - endPosition);


        Debug.Log("Dragging ended");
    }
}