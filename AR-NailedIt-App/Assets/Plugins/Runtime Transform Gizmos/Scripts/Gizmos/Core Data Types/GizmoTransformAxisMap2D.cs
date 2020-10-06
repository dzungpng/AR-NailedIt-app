using UnityEngine;

namespace RTG
{
    public class GizmoTransformAxisMap2D
    {
        private Vector2 _freeAxis = Vector2.right;
        private AxisDescriptor _mappedAxisDesc = new AxisDescriptor(0, AxisSign.Positive);
        private GizmoTransform _transform;

        public AxisDescriptor MappedAxisDesc { get { return _mappedAxisDesc; } }
        public int MappedAxisIndex { get { return _mappedAxisDesc.Index; } }
        public AxisSign MappedAxisSign { get { return _mappedAxisDesc.Sign; } }
        public bool IsMapped { get { return _transform != null; } }
        public Vector2 Axis
        {
            get
            {
                if (IsMapped) return _transform.GetAxis2D(_mappedAxisDesc);
                return _freeAxis;
            }
        }
        public GizmoTransform Transform { get { return _transform; } }

        public void Map(GizmoTransform transform, int axisIndex, AxisSign axisSign)
        {
            if (transform == null || axisIndex > 1) return;

            _mappedAxisDesc = new AxisDescriptor(axisIndex, axisSign);
            _transform = transform;
        }

        public void Unmap()
        {
            _transform = null;
        }

        public void SetAxis(Vector2 axis)
        {
            if (IsMapped) SetMappedAxis(axis);
            else SetFreeAxis(axis);
        }

        public void SetMappedAxis(Vector2 axis)
        {
            if (!IsMapped) return;
            _transform.Rotate2D(QuaternionEx.FromToRotation2D(Axis, axis));
        }

        public void SetFreeAxis(Vector2 axis)
        {
            _freeAxis = axis.normalized;
        }
    }
}
