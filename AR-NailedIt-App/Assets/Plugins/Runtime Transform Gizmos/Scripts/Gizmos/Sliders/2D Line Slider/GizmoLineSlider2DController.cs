using UnityEngine;

namespace RTG
{
    public abstract class GizmoLineSlider2DController : IGizmoLineSlider2DController
    {
        protected GizmoLineSlider2DControllerData _data;

        public GizmoLineSlider2DController(GizmoLineSlider2DControllerData controllerData)
        {
            _data = controllerData;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateTransforms();
        public abstract void UpdateEpsilons(); 
    }
}
