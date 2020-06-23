using UnityEngine;

namespace RTG
{
    public struct GizmoBehaviorInitParams
    {
        public Gizmo Gizmo;
    }

    public interface IGizmoBehaviour
    {
        Gizmo Gizmo { get; }
        bool IsEnabled { get; }

        void Init_SystemCall(GizmoBehaviorInitParams initParams);
        void SetEnabled(bool enabled);

        void OnAttached();
        void OnDetached();
        void OnEnabled();
        void OnDisabled();
        void OnGizmoEnabled();
        void OnGizmoDisabled();

        void OnGizmoHandlePicked(int handleId);
        bool OnGizmoCanBeginDrag(int handleId);
        void OnGizmoAttemptHandleDragBegin(int handleId);
        void OnGizmoHoverEnter(int handleId);
        void OnGizmoHoverExit(int handleId);
        void OnGizmoDragBegin(int handleId);
        void OnGizmoDragUpdate(int handleId);
        void OnGizmoDragEnd(int handleId);

        void OnGizmoUpdateBegin();
        void OnGizmoUpdateEnd();

        void OnGUI();
        void OnGizmoRender(Camera camera);
    }
}
