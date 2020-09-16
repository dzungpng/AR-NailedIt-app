using UnityEngine;

namespace RTG
{
    public class GizmoCircle3DBorderControllerData
    {
        public Gizmo Gizmo;
        public GizmoPlaneSlider3D PlaneSlider;
        public GizmoCircle3DBorder Border;
        public GizmoHandle TargetHandle;
        public CircleShape3D TargetCircle;
        public CircleShape3D BorderCircle;
        public TorusShape3D BorderTorus;
        public CylTorusShape3D BorderCylTorus;
        public int BorderCircleIndex;
        public int BorderTorusIndex;
        public int BorderCylTorusIndex;
    }
}
