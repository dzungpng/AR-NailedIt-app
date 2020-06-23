using UnityEngine;

namespace RTG
{
    public class GizmoPolygon2DBorderControllerData
    {
        public Gizmo Gizmo;
        public GizmoPlaneSlider2D PlaneSlider;
        public GizmoPolygon2DBorder Border;
        public GizmoHandle TargetHandle;
        public PolygonShape2D TargetPolygon;
        public PolygonShape2D BorderPolygon;
        public PolygonShape2D ThickBorderPolygon;
        public int BorderPolygonIndex;
        public int ThickBorderPolygonIndex;
    }
}
