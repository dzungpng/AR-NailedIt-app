using UnityEngine;

namespace RTG
{
    public class GizmoHandleShape2D
    {
        private bool _isVisible = true;
        private bool _isHoverable = true;
        private Shape2D _shape;

        public Shape2D Shape { get { return _shape; } }
        public bool IsVisible { get { return _isVisible; } set { _isVisible = value; } }
        public bool IsHoverable { get { return _isHoverable; } set { _isHoverable = value; } }

        public GizmoHandleShape2D(Shape2D shape)
        {
            _shape = shape;
        }
    }
}
