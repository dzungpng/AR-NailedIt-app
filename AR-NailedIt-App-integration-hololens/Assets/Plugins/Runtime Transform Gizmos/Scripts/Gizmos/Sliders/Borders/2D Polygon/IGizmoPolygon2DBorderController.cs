using UnityEngine;

namespace RTG
{
    public interface IGizmoPolygon2DBorderController
    {
        void UpdateHandles();
        void UpdateEpsilons();
        void UpdateTransforms();
    }
}
