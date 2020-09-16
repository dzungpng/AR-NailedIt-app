using UnityEngine;

namespace RTG
{
    public class SceneGizmoCamViewportUpdater : ISceneGizmoCamViewportUpdater
    {
        private SceneGizmo _sceneGizmo;

        public SceneGizmoCamViewportUpdater(SceneGizmo sceneGizmo)
        {
            _sceneGizmo = sceneGizmo;
        }

        public void Update(RTSceneGizmoCamera sceneGizmoCamera)
        {
            SceneGizmoLookAndFeel lookAndFeel = _sceneGizmo.LookAndFeel;
            Vector2 screenOffset = lookAndFeel.ScreenOffset;
            Rect sceneCameraViewRect = sceneGizmoCamera.SceneCamera.pixelRect;
            Vector2 camPrjSwitchLabelRectSize = lookAndFeel.CalculateMaxPrjSwitchLabelRectSize();
            bool usesPrjSwitchLabel = lookAndFeel.IsCamPrjSwitchLabelVisible;
            float screenSize = lookAndFeel.ScreenSize;

            if (lookAndFeel.ScreenCorner == SceneGizmoScreenCorner.TopRight)
                sceneGizmoCamera.Camera.pixelRect = new Rect(sceneCameraViewRect.xMax - screenSize + screenOffset.x, sceneCameraViewRect.yMax - screenSize + screenOffset.y, screenSize, screenSize);
            else
            if (lookAndFeel.ScreenCorner == SceneGizmoScreenCorner.TopLeft)
                sceneGizmoCamera.Camera.pixelRect = new Rect(sceneCameraViewRect.xMin + screenOffset.x, sceneCameraViewRect.yMax - screenSize + screenOffset.y, screenSize, screenSize);
            else
            if (lookAndFeel.ScreenCorner == SceneGizmoScreenCorner.BottomRight)
                sceneGizmoCamera.Camera.pixelRect = new Rect(sceneCameraViewRect.xMax - screenSize + screenOffset.x,
                    sceneCameraViewRect.yMin + (usesPrjSwitchLabel ? camPrjSwitchLabelRectSize.y + 1.0f : 0.0f) + screenOffset.y, screenSize, screenSize);
            else
                sceneGizmoCamera.Camera.pixelRect = new Rect(sceneCameraViewRect.xMin + screenOffset.x,
                    sceneCameraViewRect.yMin + (usesPrjSwitchLabel ? camPrjSwitchLabelRectSize.y + 1.0f : 0.0f) + screenOffset.y, screenSize, screenSize);
        }
    }
}
