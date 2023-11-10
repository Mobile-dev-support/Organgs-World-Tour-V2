using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace SimpleInputNamespace
{
	public class AxisInputUI : MonoBehaviour, IPointerExitHandler, IPointerEnterHandler
	{
		public SimpleInput.AxisInput axis = new SimpleInput.AxisInput();
		public float value = 1f;

		private void Awake()
		{
			Graphic graphic = GetComponent<Graphic>();
			if( graphic != null )
				graphic.raycastTarget = true;
		}

		private void OnEnable()
		{
			axis.StartTracking();
		}

		private void OnDisable()
		{
			axis.StopTracking();
		}

		public void OnPointerEnter( PointerEventData eventData )
		{
			axis.value = value;
		}

		public void OnPointerExit( PointerEventData eventData )
		{
			axis.value = 0f;
		}

		
	}
}