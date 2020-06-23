using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoRotationArc2D
    {
        public enum ArcType
        {
            Standard = 0,
            PolyProjected
        }

        private ArcShape2D _arc = new ArcShape2D();
        private ArcType _type = ArcType.Standard;
        private PolygonShape2D _projectionPoly;
        private int _numProjectedPoints = 100;

        public float RotationAngle { get { return _arc.DegreeAngleFromStart; } set { _arc.DegreeAngleFromStart = value; } }
        public ArcType Type { get { return _type; } set { _type = value; } }
        public PolygonShape2D ProjectionPoly { get { return _projectionPoly; } set { _projectionPoly = value; } }
        public int NumProjectedPoints { get { return _numProjectedPoints; } set { _numProjectedPoints = Mathf.Max(3, value); } }

        public void SetArcData(Vector2 arcOrigin, Vector2 arcStart, float radius)
        {
            _arc.Origin = arcOrigin;
            _arc.SetArcData(arcStart, radius);
        }

        public void Render(GizmoRotationArc2DLookAndFeel lookAndFeel, Camera camera)
        {
            if (_type == ArcType.Standard || _projectionPoly == null)
            {
                _arc.ForceShortestArc = lookAndFeel.UseShortestRotation;
                if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.Area) != 0)
                {
                    GizmoSolidMaterial solidMaterial = GizmoSolidMaterial.Get;
                    solidMaterial.ResetValuesToSensibleDefaults();
                    solidMaterial.SetCullModeOff();
                    solidMaterial.SetLit(false);
                    solidMaterial.SetColor(lookAndFeel.Color);
                    solidMaterial.SetPass(0);
                    _arc.RenderArea(camera);
                }

                ArcShape2D.BorderRenderFlags arcWireFlags = ArcShape2D.BorderRenderFlags.None;
                if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.ArcBorder) != 0) arcWireFlags |= ArcShape2D.BorderRenderFlags.ArcBorder;
                if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.ExtremitiesBorder) != 0) arcWireFlags |= ArcShape2D.BorderRenderFlags.ExtremitiesBorder;

                GizmoLineMaterial lineMaterial = GizmoLineMaterial.Get;
                lineMaterial.ResetValuesToSensibleDefaults();
                lineMaterial.SetColor(lookAndFeel.BorderColor);
                lineMaterial.SetPass(0);
                _arc.RenderBorder(camera);
            }
            else
            if (_type == ArcType.PolyProjected && _projectionPoly != null)
            {
                var arcBorderPoints = PrimitiveFactory.Generate2DArcBorderPoints(_arc.Origin, _arc.StartPoint, _arc.DegreeAngleFromStart, lookAndFeel.UseShortestRotation, NumProjectedPoints);
                arcBorderPoints = PrimitiveFactory.ProjectArcPointsOnPoly2DBorder(_arc.Origin, arcBorderPoints, _projectionPoly.GetPoints());

                if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.Area) != 0)
                {
                    GizmoSolidMaterial solidMaterial = GizmoSolidMaterial.Get;
                    solidMaterial.ResetValuesToSensibleDefaults();
                    solidMaterial.SetCullModeOff();
                    solidMaterial.SetLit(false);
                    solidMaterial.SetColor(lookAndFeel.Color);
                    solidMaterial.SetPass(0);

                    GLRenderer.DrawTriangleFan2D(_arc.Origin, arcBorderPoints, camera);
                }

                if (lookAndFeel.FillFlags != GizmoRotationArcFillFlags.None)
                {
                    GizmoLineMaterial lineMaterial = GizmoLineMaterial.Get;
                    lineMaterial.ResetValuesToSensibleDefaults();
                    lineMaterial.SetColor(lookAndFeel.BorderColor);
                    lineMaterial.SetPass(0);

                    if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.ArcBorder) != 0)
                        GLRenderer.DrawLines2D(arcBorderPoints, camera);

                    if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.ExtremitiesBorder) != 0)
                        GLRenderer.DrawLines2D(new List<Vector2> { _arc.Origin, arcBorderPoints[0], _arc.Origin, arcBorderPoints[arcBorderPoints.Count - 1] }, camera);
                }
            }
        }
    }
}
