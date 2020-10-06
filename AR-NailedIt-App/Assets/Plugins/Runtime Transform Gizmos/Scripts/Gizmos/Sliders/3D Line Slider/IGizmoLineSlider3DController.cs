using UnityEngine;

namespace RTG
{
    public interface IGizmoLineSlider3DController
    {
        void UpdateHandles();
        void UpdateTransforms(float zoomFactor);
        void UpdateEpsilons(float zoomFactor);
        float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor);
    }
}
