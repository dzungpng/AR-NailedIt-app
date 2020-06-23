using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class EqTriangle2D : Shape2D
    {
        private float _sideLength = 1.0f;
        private float _rotationDegrees = 0.0f;
        private TriangleEpsilon _epsilon = new TriangleEpsilon();

        private Vector2[] _points = new Vector2[3];
        private Vector2 _centroid = ModelCentroid;
        private bool _arePointsDirty = true;

        public float SideLength { get { return _sideLength; } set { _sideLength = Mathf.Abs(value); _arePointsDirty = true; } }
        public Vector2 Centroid
        {
            get { return _centroid; }
            set
            {
                Vector2 offset = value - _centroid;
                _centroid = value;

                _points[0] += offset;
                _points[1] += offset;
                _points[2] += offset;
            }
        }
        public float Altitude { get { return _sideLength * TriangleMath.EqTriangleAltFactor; } }
        public float CentroidAltitude { get { return Altitude / 3.0f; } }
        public float RotationDegrees { get { return _rotationDegrees; } set { _rotationDegrees = value; } }
        public Quaternion Rotation { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward); } }
        public TriangleEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float AreaEps { get { return _epsilon.AreaEps; } set { _epsilon.AreaEps = value; } }
        public Vector2 Right { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward) * ModelRight; } }
        public Vector2 Up { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward) * ModelUp; } }

        public static Vector2 ModelRight { get { return Vector2.right; } }
        public static Vector2 ModelUp { get { return Vector2.up; } }
        public static Vector2 ModelCentroid { get { return Vector2.zero; } }

        public Vector2 GetPoint(EqTrianglePoint point)
        {
            if (_arePointsDirty) OnPointsFoundDirty();
            return _points[(int)point];
        }

        public void SetPoint(EqTrianglePoint point, Vector2 pointValue)
        {
            Vector2 offset = pointValue - GetPoint(point);
            _points[0] += offset;
            _points[1] += offset;
            _points[2] += offset;
        }

        public Vector2 GetEdgeMidPoint(EqTriangleEdge edge)
        {
            if (edge == EqTriangleEdge.LeftTop) return GetPoint(EqTrianglePoint.Left) + GetEdge(edge).normalized * 0.5f;
            if (edge == EqTriangleEdge.TopRight) return GetPoint(EqTrianglePoint.Top) + GetEdge(edge).normalized * 0.5f;
            return GetPoint(EqTrianglePoint.Right) + GetEdge(edge).normalized * 0.5f;
        }

        public Vector2 GetEdge(EqTriangleEdge edge)
        {
            if (edge == EqTriangleEdge.LeftTop) return GetPoint(EqTrianglePoint.Top) - GetPoint(EqTrianglePoint.Left);
            if (edge == EqTriangleEdge.TopRight) return GetPoint(EqTrianglePoint.Right) - GetPoint(EqTrianglePoint.Top);
            return GetPoint(EqTrianglePoint.Left) - GetPoint(EqTrianglePoint.Right);
        }

        public override void RenderArea(Camera camera)
        {
            GLRenderer.DrawTriangleFan2D(GetPoint(EqTrianglePoint.Left), new List<Vector2>() { GetPoint(EqTrianglePoint.Top), GetPoint(EqTrianglePoint.Right) }, camera);
        }

        public override void RenderBorder(Camera camera)
        {
            GLRenderer.DrawLineLoop2D(new List<Vector2>() { GetPoint(EqTrianglePoint.Left), GetPoint(EqTrianglePoint.Top), GetPoint(EqTrianglePoint.Right) }, camera);
        }

        public override bool ContainsPoint(Vector2 point)
        {
            return TriangleMath.Contains2DPoint(point, GetPoint(EqTrianglePoint.Left), GetPoint(EqTrianglePoint.Top), GetPoint(EqTrianglePoint.Right), _epsilon);
        }

        public override Rect GetEncapsulatingRect()
        {
            if (_arePointsDirty) OnPointsFoundDirty();
            return RectEx.FromPoints(_points);
        }

        private void OnPointsFoundDirty()
        {
            var points = TriangleMath.CalcEqTriangle2DPoints(_centroid, _sideLength, Rotation);
            _points[(int)EqTrianglePoint.Left] = points[(int)EqTrianglePoint.Left];
            _points[(int)EqTrianglePoint.Top] = points[(int)EqTrianglePoint.Top];
            _points[(int)EqTrianglePoint.Right] = points[(int)EqTrianglePoint.Right];

            _arePointsDirty = false;
        }
    }
}
