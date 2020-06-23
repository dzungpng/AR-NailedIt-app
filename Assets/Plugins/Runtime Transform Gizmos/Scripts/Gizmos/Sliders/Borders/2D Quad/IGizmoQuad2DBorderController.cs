using UnityEngine;

namespace RTG
{
    public interface IGizmoQuad2DBorderController
    {
        void UpdateHandles();
        void UpdateEpsilons();
        void UpdateTransforms();
    }
}
