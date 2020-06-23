using UnityEngine;

namespace RTG
{
    public abstract class GizmoPlaneSlider3DController : IGizmoPlaneSlider3DController
    {
        protected GizmoPlaneSlider3DControllerData _data;

        public GizmoPlaneSlider3DController(GizmoPlaneSlider3DControllerData controllerData)
        {
            _data = controllerData;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateTransforms(float zoomFactor);
        public abstract void UpdateEpsilons(float zoomFactor);
    }
}
