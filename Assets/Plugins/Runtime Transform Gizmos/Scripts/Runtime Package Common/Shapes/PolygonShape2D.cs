using System;
using System.Collections.Generic;
using UnityEngine;

namespace RTG
{
    public class PolygonShape2D : Shape2D
    {
        public enum ThickBorderFillMode
        {
            Filled = 0,
            Border
        }

        public class BorderRenderDescriptor
        {
            private Shape2DBorderType _borderType = Shape2DBorderType.Thin;
            private float _thickness = 5.0f;
            private Shape2DBorderDirection _direction = Shape2DBorderDirection.Outward;
            private ThickBorderFillMode _fillMode = ThickBorderFillMode.Filled;

            public Shape2DBorderType BorderType { get { return _borderType; } set { _borderType = value; } }
            public float Thickness { get { return _thickness; } set { _thickness = Mathf.Abs(value); } }
            public Shape2DBorderDirection Direction { get { return _direction; } set { _direction = value; } }
            public ThickBorderFillMode FillMode { get { return _fillMode; } set { _fillMode = value; } }
        }

        private Rect _rect;
        private bool _isRectDirty = true;
        private bool _isClosed;
        private List<Vector2> _cwPolyPoints = new List<Vector2>(100);
        private List<Vector2> _thickCwBorderPoints = new List<Vector2>(100);
        private bool _isThickBorderDirty = true;
        private PolygonEpsilon _epsilon = new PolygonEpsilon();
        private Shape2DPtContainMode _ptContainMode = Shape2DPtContainMode.InsideArea;
        private BorderRenderDescriptor _borderRenderDesc = new BorderRenderDescriptor();

        public int NumPoints { get { return _cwPolyPoints.Count; } }
        public PolygonEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float AreaEps { get { return _epsilon.AreaEps; } set { _epsilon.AreaEps = value; } }
        public float WireEps { get { return _epsilon.WireEps; } set { _epsilon.WireEps = value; } }
        public float ThickWireEps { get { return _epsilon.ThickWireEps; } set { _epsilon.ThickWireEps = value; } }
        public bool IsClosed { get { return _isClosed; } }
        public Shape2DPtContainMode PtContainMode { get { return _ptContainMode; } set { _ptContainMode = value; } }
        public BorderRenderDescriptor BorderRenderDesc { get { return _borderRenderDesc; } }

        public Vector2 GetExtentPoint(Shape2DExtentPoint extentPt)
        {
            Rect rect = GetEncapsulatingRect();
            switch (extentPt)
            {
                case Shape2DExtentPoint.Left:

                    return rect.center - Vector2.right * rect.width * 0.5f;

                case Shape2DExtentPoint.Top:

                    return rect.center + Vector2.up * rect.height * 0.5f;

                case Shape2DExtentPoint.Right:

                    return rect.center + Vector2.right * rect.width * 0.5f;

                case Shape2DExtentPoint.Bottom:

                    return rect.center - Vector2.up * rect.height * 0.5f;
            }

            return Vector2.zero;
        }

        public override void RenderArea(Camera camera)
        {
            GLRenderer.DrawTriangleFan2D(GetEncapsulatingRect().center, _cwPolyPoints, camera);
        }

        public override void RenderBorder(Camera camera)
        {
            if(_borderRenderDesc.BorderType == Shape2DBorderType.Thin)
                GLRenderer.DrawLines2D(_cwPolyPoints, camera);           
            else
            {
                if (_isThickBorderDirty) CalculateThickBorderPoints();

                if (_borderRenderDesc.FillMode == ThickBorderFillMode.Border)
                {         
                    GLRenderer.DrawLines2D(_cwPolyPoints, camera);
                    GLRenderer.DrawLines2D(_thickCwBorderPoints, camera);
                }
                else
                {
                    var borderDir = _borderRenderDesc.Direction == Shape2DBorderDirection.Inward ? PrimitiveFactory.PolyBorderDirection.Inward : PrimitiveFactory.PolyBorderDirection.Outward;
                    var quadPts = PrimitiveFactory.Generate2DPolyBorderQuadsCW(_cwPolyPoints, _thickCwBorderPoints, borderDir, _isClosed);
                    GLRenderer.DrawQuads2D(quadPts, camera);
                }
            }
        }

        public List<Vector2> GetPoints()
        {
            return new List<Vector2>(_cwPolyPoints);
        }

        public override Rect GetEncapsulatingRect()
        {
            if (_isRectDirty) CalculateRect();
            return _rect;
        }

        public void CopyPoints(PolygonShape2D sourcePoly)
        {
            _isClosed = sourcePoly._isClosed;
            if (sourcePoly.NumPoints != 0) _cwPolyPoints = new List<Vector2>(sourcePoly._cwPolyPoints);
            else _cwPolyPoints.Clear();

            _isThickBorderDirty = true;
            _isRectDirty = true;
        }

        public void SetClockwisePoints(List<Vector2> cwBorderPoints, bool isClosed)
        {
            int numPoints = cwBorderPoints.Count;
            _cwPolyPoints.Clear();

            for(int ptIndex = 0; ptIndex < numPoints; ++ptIndex)
            {
                Vector2 currentPt = cwBorderPoints[ptIndex];
                Vector2 nextPt = cwBorderPoints[(ptIndex + 1) % numPoints];
                
                _cwPolyPoints.Add(currentPt);
            }

            _isRectDirty = true;
            _isClosed = isClosed;
        }

        public void MakeSphereBorder(Vector3 sphereCenter, float sphereRadius, int numPoints, Camera camera)
        {
            var sphereBorderPoints = PrimitiveFactory.GenerateSphereBorderPoints(camera, sphereCenter, sphereRadius, numPoints);
            SetClockwisePoints(camera.ConvertWorldToScreenPoints(sphereBorderPoints), true);
        }

        public override bool ContainsPoint(Vector2 point)
        {
            if(_borderRenderDesc.BorderType == Shape2DBorderType.Thin)
            {
                if (_ptContainMode == Shape2DPtContainMode.InsideArea)
                    return PolygonMath.Contains2DPoint(point, _cwPolyPoints, _isClosed, _epsilon);
                else
                    return PolygonMath.Is2DPointOnBorder(point, _cwPolyPoints, _isClosed, _epsilon);
            }
            else
            {
                if (_ptContainMode == Shape2DPtContainMode.InsideArea)
                    return PolygonMath.Contains2DPoint(point, _cwPolyPoints, _isClosed, _epsilon);
                else
                {
                    if (_isThickBorderDirty) CalculateThickBorderPoints();
                    return PolygonMath.Is2DPointOnThickBorder(point, _cwPolyPoints, _thickCwBorderPoints, _isClosed, _epsilon);
                }
            }
        }

        private void CalculateRect()
        {
            _rect = RectEx.FromPoints(_cwPolyPoints);
            _isRectDirty = false;
        }

        private void CalculateThickBorderPoints()
        {
            var borderDir = _borderRenderDesc.Direction == Shape2DBorderDirection.Inward ? PrimitiveFactory.PolyBorderDirection.Inward : PrimitiveFactory.PolyBorderDirection.Outward;
            _thickCwBorderPoints = PrimitiveFactory.Generate2DPolyBorderPointsCW(_cwPolyPoints, borderDir, _borderRenderDesc.Thickness, _isClosed);

            _isThickBorderDirty = false;
        }
    }
}
