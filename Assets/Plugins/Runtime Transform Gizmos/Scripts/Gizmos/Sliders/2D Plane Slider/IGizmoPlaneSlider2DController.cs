using UnityEngine;

namespace RTG
{
    public interface IGizmoPlaneSlider2DController
    {
        void UpdateHandles();
        void UpdateTransforms();
        void UpdateEpsilons();
        Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt);
    }
}
