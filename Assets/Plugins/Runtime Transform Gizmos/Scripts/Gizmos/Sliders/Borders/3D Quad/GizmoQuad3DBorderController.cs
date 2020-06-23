using UnityEngine;

namespace RTG
{
    public abstract class GizmoQuad3DBorderController : IGizmoQuad3DBorderController
    {
        protected GizmoQuad3DBorderControllerData _data;

        public GizmoQuad3DBorderController(GizmoQuad3DBorderControllerData data)
        {
            _data = data;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateEpsilons(float zoomFactor);
        public abstract void UpdateTransforms(float zoomFactor);
    }
}
