using UnityEngine;
using System;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    public enum SceneGizmoScreenCorner
    {
        TopLeft = 0,
        TopRight,
        BottomRight,
        BottomLeft
    }

    [Serializable]
    public class SceneGizmoLookAndFeel : Settings
    {
        private static readonly float _baseScreenSize = 90.0f;
        private static readonly float _invBaseScreenSize = 1.0f / _baseScreenSize;

        [SerializeField]
        private GizmoCap3DLookAndFeel _midCapLookAndFeel = new GizmoCap3DLookAndFeel();
        [SerializeField]
        private GizmoCap3DLookAndFeel[] _axesCapsLookAndFeel = new GizmoCap3DLookAndFeel[6];
        [SerializeField]
        private SceneGizmoScreenCorner _screenCorner = SceneGizmoScreenCorner.TopRight;
        [SerializeField]
        private Vector2 _screenOffset = Vector2.zero;
        [SerializeField]
        private float _screenSize = 90.0f;
        [SerializeField]
        private Color _axesLabelTint = Color.white;
        [SerializeField]
        private Color _camPrjSwitchLabelTint = ColorEx.KeepAllButAlpha(Color.white, 0.7f);
        [SerializeField]
        private bool _isCamPrjSwitchLabelVisible = true;

        private GizmoCap3DLookAndFeel AxisCapLookAndFeel { get { return _axesCapsLookAndFeel[0]; } }

        public SceneGizmoScreenCorner ScreenCorner { get { return _screenCorner; } set { _screenCorner = value; } }
        public Vector2 ScreenOffset { get { return _screenOffset; } set { _screenOffset = value; } }
        public float ScreenSize
        {
            get { return _screenSize; }
            set
            {
                _screenSize = Mathf.Max(2, value);
                OnScreenSizeChanged();
            }
        }
        public Color AxesLabelTint { get { return _axesLabelTint; } set { _axesLabelTint = value; } }
        public Color CamPrjSwitchLabelTint { get { return _camPrjSwitchLabelTint; } set { _camPrjSwitchLabelTint = value; } }
        public bool IsCamPrjSwitchLabelVisible { get { return _isCamPrjSwitchLabelVisible; } set { _isCamPrjSwitchLabelVisible = value; } }
        public Texture2D CamPerspModeLabelTexture { get { return TexturePool.Get.CamPerspMode; } }
        public Texture2D CamOrthoModeLabelTexture { get { return TexturePool.Get.CamOrthoMode; } }
        public Color HoveredColor { get { return AxisCapLookAndFeel.HoveredColor; } }
        public GizmoCap3DType AxesCapType { get { return AxisCapLookAndFeel.CapType; } }
        public GizmoCap3DType MidCapType { get { return _midCapLookAndFeel.CapType; } }
        public float MidCapBoxSize { get { return 1.01f * _screenSize * _invBaseScreenSize; } }
        public float MidCapSphereRadius { get { return 0.73f * _screenSize * _invBaseScreenSize; } }
        public float AxisConeHeight { get { return GizmoCap3DLookAndFeel.DefaultConeHeight * _screenSize * _invBaseScreenSize; } }
        public float AxisConeRadius { get { return GizmoCap3DLookAndFeel.DefaultConeRadius * _screenSize * _invBaseScreenSize; } }
        public float AxisPyramidWidth { get { return GizmoCap3DLookAndFeel.DefaultPyramidWidth * _screenSize * _invBaseScreenSize; } }
        public float AxisPyramidHeight { get { return GizmoCap3DLookAndFeel.DefaultPyramidHeight * _screenSize * _invBaseScreenSize; } }
        public float AxisPyramidDepth { get { return GizmoCap3DLookAndFeel.DefaultPyramidDepth * _screenSize * _invBaseScreenSize; } }
        public float AxisLabelScreenSize { get { return 10.0f * _screenSize * _invBaseScreenSize; } }
        public float AxisCamAlignFadeOutThreshold { get { return 0.91f; } }
        public float AxisCamAlignFadeOutDuration { get { return 0.2f; } }
        public float AxisCamAlignFadeOutAlpha { get { return 0.0f; } }

        public SceneGizmoLookAndFeel()
        {
            for (int axisIndex = 0; axisIndex < _axesCapsLookAndFeel.Length; ++axisIndex)
            {
                _axesCapsLookAndFeel[axisIndex] = new GizmoCap3DLookAndFeel();
            }

            SetMidCapColor(RTSystemValues.CenterAxisColor);
            SetMidCapType(GizmoCap3DType.Box);

            SetAxisCapColor(RTSystemValues.XAxisColor, 0, AxisSign.Positive);
            SetAxisCapColor(RTSystemValues.YAxisColor, 1, AxisSign.Positive);
            SetAxisCapColor(RTSystemValues.ZAxisColor, 2, AxisSign.Positive);
            SetAxisCapColor(RTSystemValues.CenterAxisColor, 0, AxisSign.Negative);
            SetAxisCapColor(RTSystemValues.CenterAxisColor, 1, AxisSign.Negative);
            SetAxisCapColor(RTSystemValues.CenterAxisColor, 2, AxisSign.Negative);
            SetAxisCapType(GizmoCap3DType.Cone);

            OnScreenSizeChanged();
        }

        public void SetMidCapColor(Color color)
        {
            _midCapLookAndFeel.Color = color;
        }

        public void SetAxisCapColor(Color color, int axisIndex, AxisSign axisSign)
        {
            GetAxisCapLookAndFeel(axisIndex, axisSign).Color = color;
        }

        public Color GetAxisCapColor(int axisIndex, AxisSign axisSign)
        {
            return GetAxisCapLookAndFeel(axisIndex, axisSign).Color;
        }

        public void SetHoveredColor(Color hoveredColor)
        {
            foreach (var lookAndFeel in _axesCapsLookAndFeel)
                lookAndFeel.HoveredColor = hoveredColor;

            _midCapLookAndFeel.HoveredColor = hoveredColor;
        }

        public void SetMidCapFillMode(GizmoFillMode3D fillMode)
        {
            _midCapLookAndFeel.FillMode = fillMode;
        }

        public void SetAxisCapFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _axesCapsLookAndFeel)
                lookAndFeel.FillMode = fillMode;
        }

        public void SetMidCapShadeMode(GizmoShadeMode shadeMode)
        {
            _midCapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetAxisCapShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _axesCapsLookAndFeel)
                lookAndFeel.ShadeMode = shadeMode;
        }

        public List<Enum> GetAllowedMidCapTypes()
        {
            return new List<Enum>() { GizmoCap3DType.Box, GizmoCap3DType.Sphere };
        }

        public List<Enum> GetAllowedAxesCapTypes()
        {
            return new List<Enum>() { GizmoCap3DType.Cone, GizmoCap3DType.Pyramid };
        }

        public bool IsMidCapTypeAllowed(GizmoCap3DType capType)
        {
            return capType == GizmoCap3DType.Box || capType == GizmoCap3DType.Sphere;
        }

        public void SetMidCapType(GizmoCap3DType capType)
        {
            if (IsMidCapTypeAllowed(capType)) _midCapLookAndFeel.CapType = capType;
        }

        public bool IsAxisCapTypeAllowed(GizmoCap3DType capType)
        {
            return capType == GizmoCap3DType.Cone || capType == GizmoCap3DType.Pyramid;
        }

        public void SetAxisCapType(GizmoCap3DType capType)
        {
            foreach (var lookAndFeel in _axesCapsLookAndFeel)
                lookAndFeel.CapType = capType;
        }

        public float GetAxesLabelWorldSize(Camera gizmoCam, Vector3 labelWorldPos)
        {
            return gizmoCam.ScreenToEstimatedWorldSize(labelWorldPos, AxisLabelScreenSize);
        }

        public Vector2 CalculateMaxPrjSwitchLabelRectSize()
        {
            Vector2 orthoTextureSize = new Vector2(CamOrthoModeLabelTexture.width, CamOrthoModeLabelTexture.height);
            Vector2 perspTextureSize = new Vector2(CamPerspModeLabelTexture.width, CamPerspModeLabelTexture.height);
            return Vector2.Max(orthoTextureSize, perspTextureSize);
        }

        public void ConnectMidCapLookAndFeel(GizmoCap3D midCap)
        {
            midCap.SharedLookAndFeel = _midCapLookAndFeel;
        }

        public void ConnectAxisCapLookAndFeel(GizmoCap3D axisCap, int axisIndex, AxisSign axisSign)
        {
            axisCap.SharedLookAndFeel = GetAxisCapLookAndFeel(axisIndex, axisSign);
        }

        private GizmoCap3DLookAndFeel GetAxisCapLookAndFeel(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _axesCapsLookAndFeel[axisIndex];
            return _axesCapsLookAndFeel[axisIndex + 3];
        }

        private void OnScreenSizeChanged()
        {
            _midCapLookAndFeel.BoxWidth = MidCapBoxSize;
            _midCapLookAndFeel.BoxHeight = MidCapBoxSize;
            _midCapLookAndFeel.BoxDepth = MidCapBoxSize;
            _midCapLookAndFeel.SphereRadius = MidCapSphereRadius;

            foreach (var axisCapLookAndFeel in _axesCapsLookAndFeel)
            {
                axisCapLookAndFeel.ConeHeight = AxisConeHeight;
                axisCapLookAndFeel.ConeRadius = AxisConeRadius;
            }
        }

#if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            bool newBool; Color newColor; Vector2 newVec2; float newFloat;
            GizmoShadeMode newShadeMode; SceneGizmoScreenCorner newScreenCorner;
            GizmoCap3DType newCapType;

            EditorGUILayoutEx.SectionHeader("Placement");
            var content = new GUIContent();
            content.text = "Screen corner";
            content.tooltip = "Allows you to specify the screen corner in which the gizmo will be rendered.";
            newScreenCorner = (SceneGizmoScreenCorner)EditorGUILayout.EnumPopup(content, ScreenCorner);
            if (newScreenCorner != ScreenCorner)
            {
                EditorUndoEx.Record(undoRecordObject);
                ScreenCorner = newScreenCorner;
            }

            content.text = "Screen offset";
            content.tooltip = "Allows you to apply an offset to the scene gizmo in screen space to change the location of where the gizmo is drawn on the screen.";
            newVec2 = EditorGUILayout.Vector2Field(content, ScreenOffset);
            if (newVec2 != ScreenOffset)
            {
                EditorUndoEx.Record(undoRecordObject);
                ScreenOffset = newVec2;
            }

            content.text = "Screen size";
            content.tooltip = "Allows you to change the gizmo screen size.";
            newFloat = EditorGUILayout.FloatField(content, ScreenSize);
            if (newFloat != ScreenSize)
            {
                EditorUndoEx.Record(undoRecordObject);
                ScreenSize = newFloat;
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Shapes");
            content.text = "Axes caps";
            content.tooltip = "Allows you to change the shape of the axes caps.";
            newCapType = (GizmoCap3DType)EditorGUILayoutEx.SelectiveEnumPopup(content, AxisCapLookAndFeel.CapType, GetAllowedAxesCapTypes());
            if (newCapType != AxisCapLookAndFeel.CapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisCapType(newCapType);
            }

            content.text = "Mid cap";
            content.tooltip = "Allows you to change the shape of the middle cap.";
            newCapType = (GizmoCap3DType)EditorGUILayoutEx.SelectiveEnumPopup(content, _midCapLookAndFeel.CapType, GetAllowedMidCapTypes());
            if (newCapType != _midCapLookAndFeel.CapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapType(newCapType);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Shading");
            content.text = "Axes caps";
            content.tooltip = "The type of shading that is applied to the axes caps.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, AxisCapLookAndFeel.ShadeMode);
            if (newShadeMode != AxisCapLookAndFeel.ShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisCapShadeMode(newShadeMode);
            }

            content.text = "Mid cap";
            content.tooltip = "The type of shading that is applied to the middle cap.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, _midCapLookAndFeel.ShadeMode);
            if (newShadeMode != _midCapLookAndFeel.ShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapShadeMode(newShadeMode);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            string[] axesCapLabels = new string[] { "Positive X", "Positive Y", "Positive Z", "Negative X", "Negative Y", "Negative Z" };
            int[] axesIndices = new int[] { 0, 1, 2, 0, 1, 2 };
            AxisSign[] axesSigns = new AxisSign[] { AxisSign.Positive, AxisSign.Positive, AxisSign.Positive, AxisSign.Negative, AxisSign.Negative, AxisSign.Negative };
            for (int axisIndex = 0; axisIndex < 6; ++axisIndex)
            {
                content.text = axesCapLabels[axisIndex];
                content.tooltip = "The color of the " + axesCapLabels[axisIndex].ToLower() + ".";

                var lookAndFeel = GetAxisCapLookAndFeel(axesIndices[axisIndex], axesSigns[axisIndex]);
                newColor = EditorGUILayout.ColorField(content, lookAndFeel.Color);
                if (newColor != lookAndFeel.Color)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetAxisCapColor(newColor, axesIndices[axisIndex], axesSigns[axisIndex]);
                }
            }

            content.text = "Mid cap";
            content.tooltip = "Allows you to change the color of the mid cap.";
            newColor = EditorGUILayout.ColorField(content, _midCapLookAndFeel.Color);
            if (newColor != _midCapLookAndFeel.Color)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapColor(newColor);
            }

            content.text = "Hovered color";
            content.tooltip = "Gizmo hovered color.";
            newColor = EditorGUILayout.ColorField(content, AxisCapLookAndFeel.HoveredColor);
            if (newColor != AxisCapLookAndFeel.HoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetHoveredColor(newColor);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Labels");
            EditorGUILayout.HelpBox("The alpha value of the axes labels is ignored. The alpha component will always have the same value as the corresponding axis.", MessageType.Info);
            content.text = "Axes label tint";
            content.tooltip = "Allows you to change the color of the labels associated with the gizmo axes. Note: The alpha component is ignored. The alpha value will " +
                              "always be retrieved from the color of the associated axis.";
            newColor = EditorGUILayout.ColorField(content, AxesLabelTint);
            if (newColor != AxesLabelTint)
            {
                EditorUndoEx.Record(undoRecordObject);
                AxesLabelTint = newColor;
            }

            content.text = "Cam prj switch label tint";
            content.tooltip = "Allows you to change the color of the label that is used to display the current camera projection type (perspective or ortho).";
            newColor = EditorGUILayout.ColorField(content, CamPrjSwitchLabelTint);
            if (newColor != CamPrjSwitchLabelTint)
            {
                EditorUndoEx.Record(undoRecordObject);
                CamPrjSwitchLabelTint = newColor;
            }

            content.text = "Show prj switch label";
            content.tooltip = "If this is checked, the gizmo will render a label which indicates the current camera projection type (perspective or ortho). " +
                              "This label can also be used to switch between the 2 camera projection modes.";
            newBool = EditorGUILayout.ToggleLeft(content, IsCamPrjSwitchLabelVisible);
            if (newBool != IsCamPrjSwitchLabelVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsCamPrjSwitchLabelVisible = newBool;
            }
        }
#endif
    }
}