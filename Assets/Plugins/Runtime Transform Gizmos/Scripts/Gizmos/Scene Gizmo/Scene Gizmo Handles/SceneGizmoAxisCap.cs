using UnityEngine;

namespace RTG
{
    public class SceneGizmoAxisCap : SceneGizmoCap
    {
        private AxisDescriptor _axisDesc;
        private BoxFace _midAxisBoxFace;
        private GizmoTransform _zoomFactorTransform = new GizmoTransform();

        private ColorRef _color = new ColorRef();
        private ColorTransition _colorTransition;
        private Texture2D _labelTexture;

        public SceneGizmoAxisCap(SceneGizmo sceneGizmo, int id, AxisDescriptor gizmoAxisDesc)
            : base(sceneGizmo, id)
        {
            _axisDesc = gizmoAxisDesc;
            _midAxisBoxFace = _axisDesc.GetAssociatedBoxFace();
            _cap.SetZoomFactorTransform(_zoomFactorTransform);

            if (_axisDesc.IsPositive)
            {
                if (_axisDesc.Index == 0) _labelTexture = TexturePool.Get.XAxisLabel;
                else if (_axisDesc.Index == 1) _labelTexture = TexturePool.Get.YAxisLabel;
                else _labelTexture = TexturePool.Get.ZAxisLabel;
            }

            _colorTransition = new ColorTransition(_color);
            _cap.Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            _cap.Gizmo.PreHandlePicked += OnGizmoHandlePicked;
            _sceneGizmo.LookAndFeel.ConnectAxisCapLookAndFeel(_cap, _axisDesc.Index, _axisDesc.Sign);
        }

        public override void Render(Camera camera)
        {
            var sgLookAndFeel = _sceneGizmo.LookAndFeel;
            RTSceneGizmoCamera sceneGizmoCamera = _sceneGizmo.SceneGizmoCamera;

            _cap.Render(camera);

            if (_axisDesc.IsPositive)
            {
                GizmoLabelMaterial labelMaterial = GizmoLabelMaterial.Get;
                labelMaterial.SetZWriteEnabled(false);
                labelMaterial.SetZTestLessEqual();
                labelMaterial.SetColor(ColorEx.KeepAllButAlpha(sgLookAndFeel.AxesLabelTint, _color.Value.a));
                labelMaterial.SetTexture(_labelTexture);
                labelMaterial.SetPass(0);

                Vector3 gizmoAxis = _sceneGizmo.Gizmo.Transform.GetAxis3D(_axisDesc);
                Vector3 labelScale = Vector3Ex.FromValue(sgLookAndFeel.GetAxesLabelWorldSize(sceneGizmoCamera.Camera, _cap.Position));
                Vector3 labelPos = _cap.Position + gizmoAxis * (labelScale.x * 0.5f);

                Vector2 labelScreenPos = sceneGizmoCamera.Camera.WorldToScreenPoint(labelPos);
                Vector2 midAxisScreenPos = sceneGizmoCamera.Camera.WorldToScreenPoint(_sceneGizmo.SceneGizmoCamera.LookAtPoint);
                Vector2 labelScreenDir = (labelScreenPos - midAxisScreenPos).normalized;

                float absDotCamLook = Mathf.Abs(Vector3Ex.AbsDot(sceneGizmoCamera.Look, gizmoAxis));
                labelScreenPos = labelScreenPos + Vector2.Scale(labelScreenDir, Vector2Ex.FromValue(sgLookAndFeel.AxisLabelScreenSize)) * absDotCamLook;
                labelPos = sceneGizmoCamera.Camera.ScreenToWorldPoint(new Vector3(labelScreenPos.x, labelScreenPos.y, (labelPos - sceneGizmoCamera.WorldPosition).magnitude));

                Quaternion labelRotation = Quaternion.LookRotation(sceneGizmoCamera.Look, sceneGizmoCamera.Up);
                Matrix4x4 labelTransformMtx = Matrix4x4.TRS(labelPos, labelRotation, labelScale);

                Graphics.DrawMeshNow(MeshPool.Get.UnitQuadXY, labelTransformMtx);
            }
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            _sceneGizmo.LookAndFeel.ConnectAxisCapLookAndFeel(_cap, _axisDesc.Index, _axisDesc.Sign);

            UpdateColor();
            UpdateHoverPermission();
            UpdateTransform(gizmo.FocusCamera);
        }

        private void UpdateHoverPermission()
        {
            if (_colorTransition.IsActive || _colorTransition.TransitionState == ColorTransition.State.CompleteFadeOut) _cap.SetHoverable(false);
            else _cap.SetHoverable(true);
        }

        private void UpdateColor()
        {
            var sgLookAndFeel = _sceneGizmo.LookAndFeel;
            Color lookAndFeelColor = sgLookAndFeel.GetAxisCapColor(_axisDesc.Index, _axisDesc.Sign);
            if (_cap.IsHovered) lookAndFeelColor = sgLookAndFeel.HoveredColor;
            ColorTransition.State ctState = _colorTransition.TransitionState;

            Vector3 axis = _sceneGizmo.Gizmo.Transform.GetAxis3D(_axisDesc);
            float alignment = Vector3Ex.AbsDot(axis, _sceneGizmo.SceneGizmoCamera.Look);
            if (alignment > sgLookAndFeel.AxisCamAlignFadeOutThreshold)
            {
                if (ctState != ColorTransition.State.CompleteFadeOut &&
                   ctState != ColorTransition.State.FadingOut)
                {
                    _colorTransition.DurationInSeconds = sgLookAndFeel.AxisCamAlignFadeOutDuration;
                    _colorTransition.FadeOutColor = ColorEx.KeepAllButAlpha(lookAndFeelColor, sgLookAndFeel.AxisCamAlignFadeOutAlpha);
                    _colorTransition.BeginFadeOut(true);
                }
            }
            else
            {
                if (ctState != ColorTransition.State.FadingIn &&
                    ctState != ColorTransition.State.CompleteFadeIn &&
                    ctState != ColorTransition.State.Ready)
                {
                    _colorTransition.DurationInSeconds = sgLookAndFeel.AxisCamAlignFadeOutDuration;
                    _colorTransition.FadeInColor = lookAndFeelColor;
                    _colorTransition.BeginFadeIn(true);
                }
                else _color.Value = lookAndFeelColor;
            }

            _colorTransition.Update(Time.deltaTime);
            _cap.OverrideColor.IsActive = true;
            _cap.OverrideColor.Color = _color.Value;
        }

        private void UpdateTransform(Camera camera)
        {
            Vector3 midAxisPos = _sceneGizmo.SceneGizmoCamera.LookAtPoint;
            RTSceneGizmoCamera sceneGizmoCamera = _sceneGizmo.SceneGizmoCamera;
            Vector3 axisDirection = _sceneGizmo.Gizmo.Transform.GetAxis3D(_axisDesc);

            _zoomFactorTransform.Position3D = midAxisPos;
            float zoomFactor = _cap.GetZoomFactor(camera);

            Vector3 midCapSize = _sceneGizmo.LookAndFeel.MidCapType == GizmoCap3DType.Box ?
                Vector3Ex.FromValue(_sceneGizmo.LookAndFeel.MidCapBoxSize * zoomFactor) : Vector3Ex.FromValue(_sceneGizmo.LookAndFeel.MidCapSphereRadius * 2.0f * zoomFactor);
            Vector3 midBoxFaceCenter = BoxMath.CalcBoxFaceCenter(midAxisPos, midCapSize, Quaternion.identity, _midAxisBoxFace);
            _cap.CapSlider3DInvert(axisDirection, midBoxFaceCenter);
        }

        private void OnGizmoHandlePicked(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId)
            {
                Quaternion targetRotation = Quaternion.LookRotation(-_sceneGizmo.Gizmo.Transform.GetAxis3D(_axisDesc), Vector3.up);
                RTFocusCamera.Get.PerformRotationSwitch(targetRotation);
            }
        }
    }
}