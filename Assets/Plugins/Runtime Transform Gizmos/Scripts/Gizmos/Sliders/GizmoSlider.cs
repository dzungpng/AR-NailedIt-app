using UnityEngine;

namespace RTG
{
    /// <summary>
    /// Abstract slider base class which can be derived to define behaviours
    /// for different types of sliders. A slider is a gizmo entity that allows
    /// for moving, rotating and/or scaling entities.
    /// </summary>
    public abstract class GizmoSlider : IGizmoSlider
    {
        private GizmoHandle _handle;
        private Gizmo _gizmo;

        private bool _isVisible = true;
        private bool _isHoverable = true;
        protected GizmoHandle Handle { get { return _handle; } }

        /// <summary>
        /// Returns the gizmo that owns the slider handle.
        /// </summary>
        public Gizmo Gizmo { get { return _gizmo; } }
        /// <summary>
        /// Returns the id of the slider handle.
        /// </summary>
        public int HandleId { get { return _handle.Id; } }
        /// <summary>
        /// Checks if the slider is visible.
        /// </summary>
        public bool IsVisible { get { return _isVisible; } }
        /// <summary>
        /// Checks if the slider is hoverable.
        /// </summary>
        public bool IsHoverable { get { return _isHoverable; } }
        /// <summary>
        /// Checks if the slider is hovered.
        /// </summary>
        public bool IsHovered { get { return _gizmo.HoverHandleId == HandleId; } }
        /// <summary>
        /// Returns the slider's 3D hover priority. This property is only useful 
        /// when the slider uses 3D shapes.
        /// </summary>
        public Priority HoverPriority3D { get { return Handle.HoverPriority3D; } }
        /// <summary>
        /// Returns the slider's 2D hover priority. This property is only useful
        /// when the slider uses 2D shapes.
        /// </summary>
        public Priority HoverPriority2D { get { return Handle.HoverPriority2D; } }
        /// <summary>
        /// Returns the slider's generic hover priority.
        /// </summary>
        public Priority GenericHoverPriority { get { return Handle.GenericHoverPriority; } }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="gizmo">The gizmo which owns the slider.</param>
        /// <param name="handleId">The id of the slider handle.</param>
        public GizmoSlider(Gizmo gizmo, int handleId)
        {
            _gizmo = gizmo;
            _handle = Gizmo.CreateHandle(handleId);
        }

        /// <summary>
        /// Sets the visibility state of the slider. A visible slider will be rendered,
        /// and it can also be hovered if it is set to be hoverable (see 'SetHoverable').
        /// </summary>
        public void SetVisible(bool isVisible)
        {
            _isVisible = isVisible;
            OnVisibilityStateChanged();
        }

        /// <summary>
        /// Sets the hoverable state of the slider. A hoverable slider can be hovered
        /// ONLY if it is visible (see 'SetVisible'). So passing true to this function
        /// will only allow the slider to be hovered if it is also visible.
        /// </summary>
        public void SetHoverable(bool isHoverable)
        {
            _isHoverable = isHoverable;
            OnHoverableStateChanged();
        }

        public abstract void SetSnapEnabled(bool isEnabled);
        public abstract void Render(Camera camera);

        protected abstract void OnVisibilityStateChanged();
        protected abstract void OnHoverableStateChanged();
    }
}
