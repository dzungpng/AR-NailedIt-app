using UnityEngine;

namespace RTG
{
    public class GizmoHandleShape3D
    {
        private bool _isVisible = true;
        private bool _isHoverable = true;
        private Shape3D _shape;

        public Shape3D Shape { get { return _shape; } }
        public bool IsVisible { get { return _isVisible; } set { _isVisible = value; } }
        public bool IsHoverable { get { return _isHoverable; } set { _isHoverable = value; } }

        public GizmoHandleShape3D(Shape3D shape)
        {
            _shape = shape;
        }
    }
}
