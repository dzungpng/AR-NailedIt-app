using UnityEngine;

namespace RTG
{
    public interface IGizmoPlaneSlider3DController
    {
        void UpdateHandles();
        void UpdateTransforms(float zoomFactor);
        void UpdateEpsilons(float zoomFactor);
    }
}
