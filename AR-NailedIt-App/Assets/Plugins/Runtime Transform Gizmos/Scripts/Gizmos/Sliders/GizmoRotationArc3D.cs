using UnityEngine;

namespace RTG
{
    public class GizmoRotationArc3D
    {
        private ArcShape3D _arc = new ArcShape3D();

        public float RotationAngle { get { return _arc.DegreeAngleFromStart; } set { _arc.DegreeAngleFromStart = value; } }
        public float Radius { get { return _arc.Radius; } set { _arc.Radius = value; } }

        public void SetArcData(Vector3 rotationAxis, Vector3 arcOrigin, Vector3 arcStart, float radius)
        {
            Plane arcPlane = new Plane(rotationAxis, arcOrigin);
            _arc.SetArcData(arcPlane, arcOrigin, arcStart, radius);
        }

        public void Render(GizmoRotationArc3DLookAndFeel lookAndFeel)
        {
            _arc.ForceShortestArc = lookAndFeel.UseShortestRotation;
            if((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.Area) != 0)
            {
                GizmoSolidMaterial solidMaterial = GizmoSolidMaterial.Get;
                solidMaterial.ResetValuesToSensibleDefaults();
                solidMaterial.SetCullModeOff();
                solidMaterial.SetLit(false);
                solidMaterial.SetColor(lookAndFeel.Color);
                solidMaterial.SetPass(0);
                _arc.RenderSolid();
            }

            ArcShape3D.WireRenderFlags arcWireFlags = ArcShape3D.WireRenderFlags.None;
            if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.ArcBorder) != 0) arcWireFlags |= ArcShape3D.WireRenderFlags.ArcBorder;
            if ((lookAndFeel.FillFlags & GizmoRotationArcFillFlags.ExtremitiesBorder) != 0) arcWireFlags |= ArcShape3D.WireRenderFlags.ExtremitiesBorder;

            GizmoLineMaterial lineMaterial = GizmoLineMaterial.Get;
            lineMaterial.ResetValuesToSensibleDefaults();
            lineMaterial.SetColor(lookAndFeel.BorderColor);
            lineMaterial.SetPass(0);
            _arc.RenderWire();
        }
    }
}
