using System;
using UnityEngine;

namespace RTG
{
    public class SegmentShape3D : Shape3D
    {
        private Vector3 _startPoint = Vector3.zero;
        private Vector3 _endPoint = Vector3.right;
        private Vector3 _direction = Vector3.right;
        private float _length = 1.0f;
        private SegmentEpsilon _epsilon = new SegmentEpsilon();

        public float Length
        {
            get { return _length; }
            set
            {
                _length = Mathf.Abs(value);
                _endPoint = _startPoint + _direction * value;
            }
        }
        public Vector3 StartPoint
        {
            get { return _startPoint; }
            set
            {
                _startPoint = value;
                _endPoint = _startPoint + _direction * _length;
            }
        }
        public Vector3 EndPoint
        {
            get { return _endPoint; }
            set
            {
                _endPoint = value;
                _direction = (_endPoint - _startPoint);
                _length = _direction.magnitude;
                _direction.Normalize();
            }
        }
        public Vector3 Direction
        {
            get { return _direction; }
            set
            {
                _direction = value.normalized;
                _endPoint = _startPoint + _direction * _length;
            }
        }
        public SegmentEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float RaycastEps { get { return _epsilon.RaycastEps; } set { _epsilon.RaycastEps = value; } }
        public float PtOnSegmentEps { get { return _epsilon.PtOnSegmentEps; } set { _epsilon.PtOnSegmentEps = value; } }

        public void SetEndPtFromStart(Vector3 dirDromStart, float offset)
        {
            EndPoint = StartPoint + dirDromStart * offset;
        }

        public override void RenderSolid()
        {
            GLRenderer.DrawLine3D(_startPoint, _endPoint);
        }

        public override void RenderWire()
        {
            GLRenderer.DrawLine3D(_startPoint, _endPoint);
        }

        public override bool Raycast(Ray ray, out float t)
        {
            return SegmentMath.Raycast(ray, out t, _startPoint, _endPoint, _epsilon);
        }

        public override AABB GetAABB()
        {
            return new AABB(new Vector3[] { _startPoint, _endPoint});
        }
    }
}
