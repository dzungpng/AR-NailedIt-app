using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class CircleShape2D : Shape2D
    {
        private Vector2 _center = ModelCenter;
        private float _radius = 1.0f;
        private float _rotationDegrees = 0.0f;
        private int _numBorderPoints = 100;
        private List<Vector2> _modelBorderPoints = new List<Vector2>();
        private bool _areModelBorderPointsDirty = true;
        private CircleEpsilon _epsilon = new CircleEpsilon();
        private Shape2DPtContainMode _ptContainMode = Shape2DPtContainMode.InsideArea;

        public Vector2 Center { get { return _center; } set { _center = value; } }
        public float Radius { get { return _radius; } set { _radius = Mathf.Abs(value); } }
        public float RotationDegrees { get { return _rotationDegrees; } set { _rotationDegrees = value; } }
        public Vector2 Right { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward) * ModelRight; } }
        public Vector2 Up { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward) * ModelUp; } }
        public CircleEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float RadiusEps { get { return _epsilon.RadiusEps; } set { _epsilon.RadiusEps = value; } }
        public float WireEps { get { return _epsilon.WireEps; } set { _epsilon.WireEps = value; } }
        public int NumBorderPoints { get { return _numBorderPoints; } set { _numBorderPoints = Mathf.Max(value, 4); _areModelBorderPointsDirty = true; } }
        public Shape2DPtContainMode PtContainMode { get { return _ptContainMode; } set { _ptContainMode = value; } }

        public static Vector2 ModelRight { get { return Vector2.right; } }
        public static Vector2 ModelUp { get { return Vector2.up; } }
        public static Vector2 ModelCenter { get { return Vector2.zero; } }

        public Vector2 GetExtentPoint(Shape2DExtentPoint extentPt)
        {
            switch (extentPt)
            {
                case Shape2DExtentPoint.Left:

                    return _center - Right * _radius;

                case Shape2DExtentPoint.Top:

                    return _center + Up * _radius;

                case Shape2DExtentPoint.Right:

                    return _center + Right * _radius;

                case Shape2DExtentPoint.Bottom:

                    return _center - Up * _radius;
            }

            return Vector2.zero;
        }

        public override void RenderBorder(Camera camera)
        {
            if (_areModelBorderPointsDirty) CalcModelBorderPoints();
            GLRenderer.DrawLines2D(_modelBorderPoints, _center, Vector2Ex.FromValue(_radius), camera);
        }

        public override void RenderArea(Camera camera)
        {
            if (_areModelBorderPointsDirty) CalcModelBorderPoints();
            GLRenderer.DrawTriangleFan2D(ModelCenter, _modelBorderPoints, _center, Vector2Ex.FromValue(_radius), camera);
        }

        public override bool ContainsPoint(Vector2 point)
        {
            if (_ptContainMode == Shape2DPtContainMode.InsideArea)
                return CircleMath.Contains2DPoint(point, _center, _radius, _epsilon);
            else 
                return CircleMath.Is2DPointOnBorder(point, _center, _radius, _epsilon);
        }

        public List<Vector2> GetExtentPoints()
        {
            return CircleMath.Calc2DExtentPoints(_center, _radius, _rotationDegrees);
        }

        public override Rect GetEncapsulatingRect()
        {
            return RectEx.FromPoints(GetExtentPoints());
        }

        private void CalcModelBorderPoints()
        {
            _modelBorderPoints = PrimitiveFactory.Generate2DCircleBorderPointsCW(Vector2.zero, 1.0f, _numBorderPoints);
            _areModelBorderPointsDirty = false;
        }
    }
}
