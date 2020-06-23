using UnityEngine;

namespace RTG
{
    public abstract class GizmoPlaneSlider2DController : IGizmoPlaneSlider2DController
    {
        protected GizmoPlaneSlider2DControllerData _data;

        public GizmoPlaneSlider2DController(GizmoPlaneSlider2DControllerData controllerData)
        {
            _data = controllerData;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateTransforms();
        public abstract void UpdateEpsilons();
        public abstract Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt);
    }
}
