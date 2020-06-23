using UnityEngine;

namespace RTG
{
    public class GizmoQuad3DBorderControllerData
    {
        public Gizmo Gizmo;
        public GizmoPlaneSlider3D PlaneSlider;
        public GizmoQuad3DBorder Border;
        public GizmoHandle TargetHandle;
        public QuadShape3D TargetQuad;
        public QuadShape3D BorderQuad;
        public BoxShape3D TopBox;
        public BoxShape3D RightBox;
        public BoxShape3D BottomBox;
        public BoxShape3D LeftBox;
        public BoxShape3D TopLeftBox;
        public BoxShape3D TopRightBox;
        public BoxShape3D BottomRightBox;
        public BoxShape3D BottomLeftBox;
        public int BorderQuadIndex;
        public int TopBoxIndex;
        public int RightBoxIndex;
        public int BottomBoxIndex;
        public int LeftBoxIndex;
        public int TopLeftBoxIndex;
        public int TopRightBoxIndex;
        public int BottomRightBoxIndex;
        public int BottomLeftBoxIndex;
    }
}
