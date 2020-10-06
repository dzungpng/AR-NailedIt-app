using UnityEngine;

namespace RTG
{
    public class SceneGizmoCamPrjSwitchLabel 
    {
        private SceneGizmo _sceneGizmo;

        private GizmoHandle _handle;
        private QuadShape2D _labelQuad = new QuadShape2D();

        public GizmoHandle Handle { get { return _handle; } }
        public int Id { get { return _handle.Id; } }

        public SceneGizmoCamPrjSwitchLabel(SceneGizmo sceneGizmo)
        {
            _sceneGizmo = sceneGizmo;
            _handle = _sceneGizmo.Gizmo.CreateHandle(GizmoHandleId.SceneGizmoCamPrjSwitchLabel);
            _handle.Add2DShape(_labelQuad);

            sceneGizmo.Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            sceneGizmo.Gizmo.PreHandlePicked += OnGizmoHandlePicked;
        }

        public void OnGUI()
        {
            var sgLookAndFeel = _sceneGizmo.LookAndFeel;
            Camera gizmoCamera = _sceneGizmo.SceneGizmoCamera.Camera;
            if (sgLookAndFeel.IsCamPrjSwitchLabelVisible)
            {
                if (_sceneGizmo.SceneGizmoCamera.SceneCamera != RTFocusCamera.Get.TargetCamera ||
                    !RTFocusCamera.Get.IsDoingProjectionSwitch)
                {
                    Texture2D labelTexture = gizmoCamera.orthographic ? sgLookAndFeel.CamOrthoModeLabelTexture : sgLookAndFeel.CamPerspModeLabelTexture;
                    GUIEx.PushColor(sgLookAndFeel.CamPrjSwitchLabelTint);

                    Rect drawRect = RectEx.FromTexture2D(labelTexture).PlaceBelowCenterHrz(gizmoCamera.pixelRect).InvertScreenY();
                    drawRect.center = new Vector2(drawRect.center.x, Screen.height - 1 - _labelQuad.Center.y);

                    GUI.DrawTexture(drawRect, labelTexture);
                    GUIEx.PopColor();
                }
                else
                {
                    Texture2D destLabelTexture = sgLookAndFeel.CamOrthoModeLabelTexture;
                    Texture2D sourceLabelTexture = sgLookAndFeel.CamPerspModeLabelTexture;
                    if (RTFocusCamera.Get.PrjSwitchTransitionType == CameraPrjSwitchTransition.Type.ToPerspective)
                    {
                        destLabelTexture = sgLookAndFeel.CamPerspModeLabelTexture;
                        sourceLabelTexture = sgLookAndFeel.CamOrthoModeLabelTexture;
                    }

                    AnimationCurve srcAnimCurve = AnimationCurve.EaseInOut(0.0f, sgLookAndFeel.CamPrjSwitchLabelTint.a, 1.0f, 0.0f);
                    AnimationCurve destAnimCurve = AnimationCurve.EaseInOut(0.0f, 0.0f, 1.0f, sgLookAndFeel.CamPrjSwitchLabelTint.a);

                    float destAlpha = destAnimCurve.Evaluate(RTFocusCamera.Get.PrjSwitchProgress);
                    float srcAlpha = srcAnimCurve.Evaluate(RTFocusCamera.Get.PrjSwitchProgress);

                    GUIEx.PushColor(ColorEx.KeepAllButAlpha(sgLookAndFeel.CamPrjSwitchLabelTint, srcAlpha));
                    Rect drawRect = RectEx.FromTexture2D(sourceLabelTexture).PlaceBelowCenterHrz(gizmoCamera.pixelRect).InvertScreenY();
                    drawRect.center = new Vector2(drawRect.center.x, Screen.height - 1 - _labelQuad.Center.y);
                    GUI.DrawTexture(drawRect, sourceLabelTexture);
                    GUIEx.PopColor();

                    GUIEx.PushColor(ColorEx.KeepAllButAlpha(sgLookAndFeel.CamPrjSwitchLabelTint, destAlpha));
                    drawRect = RectEx.FromTexture2D(destLabelTexture).PlaceBelowCenterHrz(gizmoCamera.pixelRect).InvertScreenY();
                    drawRect.center = new Vector2(drawRect.center.x, Screen.height - 1 - _labelQuad.Center.y);
                    GUI.DrawTexture(drawRect, destLabelTexture);
                    GUIEx.PopColor();
                }
            }
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            _handle.Is2DVisible = _sceneGizmo.LookAndFeel.IsCamPrjSwitchLabelVisible;
            UpdateTransform();
        }

        private void UpdateTransform()
        {
            var sgLookAndFeel = _sceneGizmo.LookAndFeel;
            Camera gizmoCamera = _sceneGizmo.SceneGizmoCamera.Camera;

            Texture2D labelTexture = gizmoCamera.orthographic ? sgLookAndFeel.CamOrthoModeLabelTexture : sgLookAndFeel.CamPerspModeLabelTexture;
            Rect labelRect = RectEx.FromTexture2D(labelTexture);

            // Note: Use the maximum texture size to account for textures of different sizes. When
            //       drawing the label, we will keep the original texture size to avoid stretching
            //       but we will place its center at '_labelQuad.Center' to avoid sudden changes in
            //       position when doing projection switches.
            labelRect.size = sgLookAndFeel.CalculateMaxPrjSwitchLabelRectSize();
            labelRect = labelRect.PlaceBelowCenterHrz(_sceneGizmo.SceneGizmoCamera.Camera.pixelRect);

            _labelQuad.Center = labelRect.center;
            _labelQuad.Size = labelRect.size;
        }

        private void OnGizmoHandlePicked(Gizmo gizmo, int handleId)
        {
            if (handleId == _handle.Id) RTFocusCamera.Get.PerformProjectionSwitch();
        }
    }
}
