using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoScaleGuide
    {
        private GizmoScaleGuideLookAndFeel _lookAndFeel = new GizmoScaleGuideLookAndFeel();
        private GizmoScaleGuideLookAndFeel _sharedLookAndFeel;

        public GizmoScaleGuideLookAndFeel LookAndFeel { get { return _sharedLookAndFeel == null ? _lookAndFeel : _sharedLookAndFeel;} }
        public GizmoScaleGuideLookAndFeel SharedLookAndFeel { get { return _sharedLookAndFeel; } set { _sharedLookAndFeel = value; } }

        public void Render(IEnumerable<GameObject> gameObjects, Camera camera)
        {
            if (gameObjects == null) return;

            var material = GizmoLineMaterial.Get;
            material.ResetValuesToSensibleDefaults();

            foreach(var gameObj in gameObjects)
            {
                Transform transform = gameObj.transform;
                Vector3 axesOrigin = transform.position;
                Vector3 right = transform.right;
                Vector3 up = transform.up;
                Vector3 look = transform.forward;

                float zoomFactor = 1.0f;
                if(LookAndFeel.UseZoomFactor) zoomFactor = camera.EstimateZoomFactor(axesOrigin);
                float axisLength = LookAndFeel.AxisLength * zoomFactor;

                Vector3 startPt = axesOrigin - right * axisLength;
                Vector3 endPt = axesOrigin + right * axisLength;
                material.SetColor(LookAndFeel.XAxisColor);
                material.SetPass(0);
                GLRenderer.DrawLine3D(startPt, endPt);

                startPt = axesOrigin - up * axisLength;
                endPt = axesOrigin + up * axisLength;
                material.SetColor(LookAndFeel.YAxisColor);
                material.SetPass(0);
                GLRenderer.DrawLine3D(startPt, endPt);

                startPt = axesOrigin - look * axisLength;
                endPt = axesOrigin + look * axisLength;
                material.SetColor(LookAndFeel.ZAxisColor);
                material.SetPass(0);
                GLRenderer.DrawLine3D(startPt, endPt);
            }
        }
    }
}
