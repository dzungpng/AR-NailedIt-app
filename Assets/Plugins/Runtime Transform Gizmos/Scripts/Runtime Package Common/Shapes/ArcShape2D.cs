using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class ArcShape2D : Shape2D
    {
        public enum BorderRenderFlags
        {
            None = 0,
            ExtremitiesBorder = 1,
            ArcBorder = 2,
            All = ExtremitiesBorder | ArcBorder
        }

        public class BorderRenderDescriptor
        {
            private BorderRenderFlags _borderFlags = BorderRenderFlags.All;
            public BorderRenderFlags BorderFlags { get { return _borderFlags; } set { _borderFlags = value; } }
        }

        private BorderRenderDescriptor _borderRenderDesc = new BorderRenderDescriptor();
        private Rect _rect = new Rect();
        private bool _forceShortestArc;
        private float _radius;
        private Vector2 _origin;
        private Vector2 _startPoint;
        private Vector2 _endPoint;
        private List<Vector2> _borderPoints;
        private float _degreeAngleFromStart;
        private int _numBorderPoints = 100;
        private bool _areBorderPointsDirty = true;
        private ArcEpsilon _epsilon = new ArcEpsilon();

        public float Radius 
        {
            get { return _radius; } 
            set
            {
                _radius = value;
                _startPoint = _origin + (_startPoint - _origin).normalized * _radius;

                CalculateEndPoint();
                _areBorderPointsDirty = true;
            }
        }
        public bool ForceShortestArc
        {
            get { return _forceShortestArc; }
            set
            {
                _forceShortestArc = value;

                CalculateEndPoint();
                _areBorderPointsDirty = true;
            }
        }
        public float DegreeAngleFromStart
        {
            get { return _degreeAngleFromStart; }
            set
            {
                _degreeAngleFromStart = value % 360.0f;
                CalculateEndPoint();
                _areBorderPointsDirty = true;
            }
        }
        public float AbsDegreeAngleFromStart { get { return Mathf.Abs(_degreeAngleFromStart); } }
        public Vector2 Origin
        {
            get { return _origin; }
            set
            {
                Vector2 toStartPtDir = (_startPoint - _origin).normalized;
                _origin = value;
                _startPoint = _origin + toStartPtDir * _radius;

                CalculateEndPoint();
                _areBorderPointsDirty = true;
            }
        }
        public int NumBorderPoints
        {
            get { return _numBorderPoints; }
            set
            {
                _numBorderPoints = Mathf.Max(3, value);
                _areBorderPointsDirty = true;
            }
        }
        public Vector2 StartPoint { get { return _startPoint; } }
        public Vector2 EndPoint { get { return _endPoint; } }
        public ArcEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float AreaEps { get { return _epsilon.AreaEps; } set { _epsilon.AreaEps = value; } }
        public BorderRenderDescriptor BorderRenderDesc { get { return _borderRenderDesc; } }

        public override void RenderArea(Camera camera)
        {
            if (_areBorderPointsDirty) OnBorderPointsFoundDirty();
            GLRenderer.DrawTriangleFan2D(_origin, _borderPoints, camera);
        }

        public override void RenderBorder(Camera camera)
        {
            if (_areBorderPointsDirty) OnBorderPointsFoundDirty();

            if ((_borderRenderDesc.BorderFlags & BorderRenderFlags.ArcBorder) != 0)
                GLRenderer.DrawLines2D(_borderPoints, camera);
            if ((_borderRenderDesc.BorderFlags & BorderRenderFlags.ExtremitiesBorder) != 0) 
                GLRenderer.DrawLines2D(new List<Vector2>() { _origin, StartPoint, _origin, EndPoint }, camera);
        }

        public void SetArcData(Vector2 startPoint, float radius)
        {
            _startPoint = startPoint;
            Radius = radius;
        }

        public override Rect GetEncapsulatingRect()
        {
            if (_areBorderPointsDirty) OnBorderPointsFoundDirty();
            return _rect;
        }

        public override bool ContainsPoint(Vector2 point)
        {
            if (_forceShortestArc || AbsDegreeAngleFromStart <= 180.0f)
                return ArcMath.ShArcContains2DPoint(point, _origin, _startPoint, _degreeAngleFromStart, _epsilon);
            else
                return ArcMath.LgArcContains2DPoint(point, _origin, _startPoint, _degreeAngleFromStart, _epsilon);
        }

        private void OnBorderPointsFoundDirty()
        {
            _borderPoints = PrimitiveFactory.Generate2DArcBorderPoints(_origin, _startPoint, _degreeAngleFromStart, _forceShortestArc, _numBorderPoints);
            _rect = RectEx.FromPoints(_borderPoints);
            _areBorderPointsDirty = false;
        }

        private void CalculateEndPoint()
        {
            Vector3 toStartPt = (_startPoint - _origin);
            _endPoint = _origin.ToVector3() + Quaternion.AngleAxis(DegreeAngleFromStart, Vector3.forward) * toStartPt;
        }
    }
}
