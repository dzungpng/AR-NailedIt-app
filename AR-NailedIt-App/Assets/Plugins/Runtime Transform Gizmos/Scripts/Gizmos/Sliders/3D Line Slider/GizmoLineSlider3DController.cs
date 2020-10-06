using UnityEngine;

namespace RTG
{
    public abstract class GizmoLineSlider3DController : IGizmoLineSlider3DController
    {
        protected GizmoLineSlider3DControllerData _data;

        public GizmoLineSlider3DController(GizmoLineSlider3DControllerData controllerData)
        {
            _data = controllerData;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateTransforms(float zoomFactor);
        public abstract void UpdateEpsilons(float zoomFactor);
        public abstract float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor);
    }
}
