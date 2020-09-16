using UnityEngine;

namespace RTG
{
    public interface IGizmoDragSession
    {
        bool IsActive { get; }
        GizmoDragChannel DragChannel { get; }
        Vector3 TotalDragOffset { get; }
        Quaternion TotalDragRotation { get; }
        Vector3 TotalDragScale { get; }
        Vector3 RelativeDragOffset { get; }
        Quaternion RelativeDragRotation { get; }
        Vector3 RelativeDragScale { get; }

        bool ContainsTargetTransform(GizmoTransform transform);
        void AddTargetTransform(GizmoTransform transform);
        void RemoveTargetTransform(GizmoTransform transform);
        bool Begin();
        bool Update();
        void End();
    }
}
