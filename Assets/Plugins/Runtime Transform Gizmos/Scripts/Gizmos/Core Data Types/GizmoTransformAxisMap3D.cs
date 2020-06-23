using UnityEngine;

namespace RTG
{
    public class GizmoTransformAxisMap3D
    {
        private Vector3 _freeAxis = Vector3.right;
        private AxisDescriptor _mappedAxisDesc = new AxisDescriptor(0, AxisSign.Positive);
        private GizmoTransform _transform;

        public AxisDescriptor MappedAxisDesc { get { return _mappedAxisDesc; } }
        public int MappedAxisIndex { get { return _mappedAxisDesc.Index; } }
        public AxisSign MappedAxisSign { get { return _mappedAxisDesc.Sign; } }
        public bool IsMapped { get { return _transform != null; } }
        public Vector3 Axis
        {
            get
            {
                if (IsMapped) return _transform.GetAxis3D(_mappedAxisDesc);
                return _freeAxis;
            }
        }
        public GizmoTransform Transform { get { return _transform; } }

        public void Map(GizmoTransform transform, int axisIndex, AxisSign axisSign)
        {
            if (transform == null) return;

            _mappedAxisDesc = new AxisDescriptor(axisIndex, axisSign);
            _transform = transform;
        }

        public void Unmap()
        {
            _transform = null;
        }

        public void SetAxis(Vector3 axis)
        {
            if (IsMapped) SetMappedAxis(axis);
            else SetFreeAxis(axis);
        }

        public void SetMappedAxis(Vector3 axis)
        {
            if (!IsMapped) return;

            Vector3 perp180 = _transform.GetAxis3D(0, AxisSign.Positive);
            if (_mappedAxisDesc.Index == 0) perp180 = _transform.GetAxis3D(1, AxisSign.Positive);

            _transform.Rotate3D(QuaternionEx.FromToRotation3D(Axis, axis, perp180));
        }

        public void SetFreeAxis(Vector3 axis)
        {
            _freeAxis = axis.normalized;
        }
    }
}
