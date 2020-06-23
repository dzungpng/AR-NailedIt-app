using UnityEngine;

namespace RTG
{
    public interface IGizmoQuad3DBorderController
    {
        void UpdateHandles();
        void UpdateEpsilons(float zoomFactor);
        void UpdateTransforms(float zoomFactor);
    }
}
