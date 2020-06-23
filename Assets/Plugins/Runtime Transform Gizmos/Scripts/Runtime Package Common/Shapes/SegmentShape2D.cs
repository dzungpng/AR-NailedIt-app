using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class SegmentShape2D : Shape2D
    {
        private Vector2 _startPoint = Vector2.zero;
        private Vector2 _endPoint = Vector2.right;
        private Vector2 _direction = Vector2.right;
        private float _length = 1.0f;
        private SegmentEpsilon _epsilon = new SegmentEpsilon();

        public float Length
        {
            get { return _length; }
            set
            {
                _length = Mathf.Abs(value);
                _endPoint = _startPoint + _direction * _length;
            }
        }
        public Vector2 StartPoint
        {
            get { return _startPoint; }
            set
            {
                _startPoint = value;
                _endPoint = _startPoint + _direction * _length;
            }
        }
        public Vector2 EndPoint
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
        public Vector2 Direction
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

        public void SetEndPtFromStart(Vector2 dirDromStart, float offset)
        {
            EndPoint = StartPoint + dirDromStart * offset;
        }

        public override void RenderBorder(Camera camera)
        {
            GLRenderer.DrawLine2D(_startPoint, _endPoint, camera);
        }

        public override void RenderArea(Camera camera)
        {
            GLRenderer.DrawLine2D(_startPoint, _endPoint, camera);
        }

        public override bool ContainsPoint(Vector2 point)
        {
            return SegmentMath.Is2DPointOnSegment(point, _startPoint, _endPoint, _epsilon);
        }

        public override Rect GetEncapsulatingRect()
        {
            return RectEx.FromPoints(new Vector2[] { _startPoint, _endPoint });
        }
    }
}
