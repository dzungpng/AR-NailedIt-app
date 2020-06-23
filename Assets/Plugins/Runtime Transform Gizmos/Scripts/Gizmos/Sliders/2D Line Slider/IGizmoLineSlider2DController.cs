using UnityEngine;

namespace RTG
{
    public interface IGizmoLineSlider2DController
    {
        void UpdateHandles();
        void UpdateTransforms();
        void UpdateEpsilons();
    }
}
