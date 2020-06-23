using UnityEngine;

namespace RTG
{
    public class SceneGizmoMidCap : SceneGizmoCap
    {
        public SceneGizmoMidCap(SceneGizmo sceneGizmo)
            :base(sceneGizmo, GizmoHandleId.SceneGizmoMidCap)
        {
            sceneGizmo.LookAndFeel.ConnectMidCapLookAndFeel(_cap);
            sceneGizmo.Gizmo.PreHandlePicked += OnGizmoHandlePicked;

            sceneGizmo.Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
        }

        public override void Render(Camera camera)
        {
            _cap.Render(camera);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            _sceneGizmo.LookAndFeel.ConnectMidCapLookAndFeel(_cap);
        }

        private void OnGizmoHandlePicked(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId) RTFocusCamera.Get.PerformProjectionSwitch();
        }
    }
}
