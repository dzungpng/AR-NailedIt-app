using UnityEngine;

namespace RTG
{
    public interface IGizmoCircle3DBorderController
    {
        void UpdateHandles();
        void UpdateEpsilons(float zoomFactor);
        void UpdateTransforms(float zoomFactor);
    }
}
