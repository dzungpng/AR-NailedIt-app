using UnityEngine;

namespace RTG
{
    public abstract class GizmoRATriangle3DBorderController : IGizmoRATriangle3DBorderController
    {
        protected GizmoRATriangle3DBorderControllerData _data;

        public GizmoRATriangle3DBorderController(GizmoRATriangle3DBorderControllerData controllerData)
        {
            _data = controllerData;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateEpsilons(float zoomFactor);
        public abstract void UpdateTransforms(float zoomFactor);
    }
}
