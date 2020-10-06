using UnityEngine;

namespace RTG
{
    public abstract class GizmoCap : IGizmoCap
    {
        private Gizmo _gizmo;
        private GizmoHandle _handle;
        private bool _isVisible = true;
        private bool _isHoverable = true;

        protected GizmoHandle Handle { get { return _handle; } }

        public Gizmo Gizmo { get { return _gizmo; } }
        public int HandleId { get { return _handle.Id; } }
        public bool IsVisible { get { return _isVisible; } }
        public bool IsHoverable { get { return _isHoverable; } }
        public bool IsHovered { get { return _gizmo.HoverHandleId == HandleId; } }
        public Priority HoverPriority3D { get { return Handle.HoverPriority3D; } }
        public Priority HoverPriority2D { get { return Handle.HoverPriority2D; } }
        public Priority GenericHoverPriority { get { return Handle.GenericHoverPriority; } }

        public GizmoCap(Gizmo gizmo, int handleId)
        {
            _gizmo = gizmo;
            _handle = Gizmo.CreateHandle(handleId);
        }

        public void SetVisible(bool isVisible)
        {
            if (_isVisible == isVisible) return;

            _isVisible = isVisible;
            OnVisibilityStateChanged();
        }

        public void SetHoverable(bool isHoverable)
        {
            if (_isHoverable == isHoverable) return;

            _isHoverable = isHoverable;
            OnHoverableStateChanged();
        }

        public abstract void Render(Camera camera);

        protected abstract void OnVisibilityStateChanged();
        protected abstract void OnHoverableStateChanged();
    }
}
