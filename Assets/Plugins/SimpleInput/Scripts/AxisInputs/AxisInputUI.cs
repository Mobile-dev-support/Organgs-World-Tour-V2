using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace SimpleInputNamespace
{
	public class AxisInputUI : MonoBehaviour, IPointerExitHandler, IPointerEnterHandler
	{
		public SimpleInput.AxisInput axis = new SimpleInput.AxisInput();
		public float value;
		bool moving;

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

        private void Update()
        {
            if(moving)
			{
                axis.value = value;
            }
			else
			{
                axis.value = 0;
            }
        }
        public void OnPointerEnter( PointerEventData eventData )
		{
            moving = true;
        }


		public void OnPointerExit( PointerEventData eventData )
		{
           moving = false;
		}

		
	}
}