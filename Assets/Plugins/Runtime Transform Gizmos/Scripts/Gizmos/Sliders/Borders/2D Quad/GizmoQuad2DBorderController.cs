using UnityEngine;

namespace RTG
{
    public abstract class GizmoQuad2DBorderController : IGizmoQuad2DBorderController
    {
        protected GizmoQuad2DBorderControllerData _data;

        public GizmoQuad2DBorderController(GizmoQuad2DBorderControllerData data)
        {
            _data = data;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateEpsilons();
        public abstract void UpdateTransforms();
    }
}
