using System;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class RotationGizmoLookAndFeel3D : Settings
    {
        [SerializeField]
        private bool _isMidCapVisible = true;
        [SerializeField]
        private GizmoCap3DLookAndFeel _midCapLookAndFeel = new GizmoCap3DLookAndFeel();

        [SerializeField]
        private bool[] _axesVis = new bool[3];
        [SerializeField]
        private GizmoPlaneSlider3DLookAndFeel[] _axesLookAndFeel = new GizmoPlaneSlider3DLookAndFeel[3];

        [SerializeField]
        private bool _isCamLookSliderVisible = true;
        [SerializeField]
        private float _camLookSliderRadiusOffset = 0.65f;
        [SerializeField]
        private GizmoPlaneSlider2DLookAndFeel _camLookSliderLookAndFeel = new GizmoPlaneSlider2DLookAndFeel();

        public float Scale { get { return _midCapLookAndFeel.Scale; } }
        public float Radius { get { return _midCapLookAndFeel.SphereRadius; } }
        public bool UseZoomFactor { get { return _midCapLookAndFeel.UseZoomFactor; } }
        public Color XBorderColor { get { return _axesLookAndFeel[0].BorderColor; } }
        public Color YBorderColor { get { return _axesLookAndFeel[1].BorderColor; } }
        public Color ZBorderColor { get { return _axesLookAndFeel[2].BorderColor; } }
        public Color HoveredColor { get { return _axesLookAndFeel[0].HoveredColor; } }
        public float AxisTorusThickness { get { return _axesLookAndFeel[0].BorderTorusThickness; } }
        public float AxisCylTorusWidth { get { return _axesLookAndFeel[0].BorderCylTorusWidth; } }
        public float AxisCylTorusHeight { get { return _axesLookAndFeel[0].BorderCylTorusHeight; } }
        public float AxisCullAlphaScale { get { return _axesLookAndFeel[0].BorderCircleCullAlphaScale; } }
        public GizmoShadeMode ShadeMode { get { return _midCapLookAndFeel.ShadeMode; } }
        public GizmoCircle3DBorderType AxisBorderType { get { return _axesLookAndFeel[0].CircleBorderType; } }
        public GizmoFillMode3D AxisBorderFillMode { get { return _axesLookAndFeel[0].BorderFillMode; } }
        public int NumAxisTorusWireAxialSlices { get { return _axesLookAndFeel[0].NumBorderTorusWireAxialSlices; } }
        public Color RotationArcColor { get { return _axesLookAndFeel[0].RotationArcLookAndFeel.Color; } }
        public Color RotationArcBorderColor { get { return _axesLookAndFeel[0].RotationArcLookAndFeel.BorderColor; } }
        public bool UseShortestRotationArc { get { return _axesLookAndFeel[0].RotationArcLookAndFeel.UseShortestRotation; } }
        public bool IsRotationArcVisible { get { return _axesLookAndFeel[0].IsRotationArcVisible; } }
        public Color MidCapColor { get { return _midCapLookAndFeel.Color; } }
        public Color MidCapBorderColor { get { return _midCapLookAndFeel.SphereBorderColor; } }
        public Color HoveredMidCapColor { get { return _midCapLookAndFeel.HoveredColor; } }
        public bool IsMidCapVisible { get { return _isMidCapVisible; } }
        public bool IsMidCapBorderVisible { get { return _midCapLookAndFeel.IsSphereBorderVisible; } }
        public float CamLookSliderRadiusOffset { get { return _camLookSliderRadiusOffset; } }
        public Color CamLookSliderBorderColor { get { return _camLookSliderLookAndFeel.BorderColor; } }
        public Color CamLookSliderHoveredBorderColor { get { return _camLookSliderLookAndFeel.HoveredBorderColor; } }
        public GizmoPolygon2DBorderType CamLookSliderPolyBorderType { get { return _camLookSliderLookAndFeel.PolygonBorderType; } }
        public float CamLookSliderPolyBorderThickness { get { return _camLookSliderLookAndFeel.BorderPolyThickness; } }
        public bool IsCamLookSliderVisible { get { return _isCamLookSliderVisible; } }

        public RotationGizmoLookAndFeel3D()
        {
            for (int sliderIndex = 0; sliderIndex < _axesLookAndFeel.Length; ++sliderIndex)
            {
                _axesLookAndFeel[sliderIndex] = new GizmoPlaneSlider3DLookAndFeel();
                _axesLookAndFeel[sliderIndex].PlaneType = GizmoPlane3DType.Circle;
            }

            SetAxisVisible(0, true);
            SetAxisVisible(1, true);
            SetAxisVisible(2, true);

            _midCapLookAndFeel.CapType = GizmoCap3DType.Sphere;
            _camLookSliderLookAndFeel.PlaneType = GizmoPlane2DType.Polygon;

            Color midCapColor = new Color(0.3f, 0.3f, 0.3f, 0.12f);
            SetMidCapColor(midCapColor);
            SetHoveredMidCapColor(midCapColor);
            SetMidCapBorderVisible(true);
            SetMidCapBorderColor(Color.white);
            SetRadius(6.5f);

            SetAxisBorderColor(0, RTSystemValues.XAxisColor);
            SetAxisBorderColor(1, RTSystemValues.YAxisColor);
            SetAxisBorderColor(2, RTSystemValues.ZAxisColor);
            SetHoveredColor(RTSystemValues.HoveredAxisColor);
            SetCamLookSliderPolyBorderThickness(4.0f);
            SetCamLookSliderBorderColor(Color.white);
            SetCamLookSliderHoveredBorderColor(RTSystemValues.HoveredAxisColor);
            SetNumAxisTorusWireAxialSlices(2);
        }

        public bool IsAxisVisible(int axisIndex)
        {
            return _axesVis[axisIndex];
        }

        public void SetAxisVisible(int axisIndex, bool isVisible)
        {
            _axesVis[axisIndex] = isVisible;
        }

        public void SetShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
            {
                lookAndFeel.ShadeMode = shadeMode;
                lookAndFeel.BorderShadeMode = shadeMode;
            }

            _midCapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetAxisBorderFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.BorderFillMode = fillMode;
        }

        public void SetNumAxisTorusWireAxialSlices(int numSlices)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.NumBorderTorusWireAxialSlices = numSlices;
        }

        public void SetUseZoomFactor(bool useZoomFactor)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.UseZoomFactor = useZoomFactor;

            _midCapLookAndFeel.UseZoomFactor = useZoomFactor;
        }

        public void SetScale(float scale)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.Scale = scale;

            _midCapLookAndFeel.Scale = scale;
        }

        public void SetRadius(float radius)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.CircleRadius = radius;

            _midCapLookAndFeel.SphereRadius = radius;
        }

        public void SetAxisBorderCullAlphaScale(float scale)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.BorderCircleCullAlphaScale = scale;
        }

        public void SetAxisBorderType(GizmoCircle3DBorderType borderType)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.CircleBorderType = borderType;
        }

        public void SetAxisTorusThickness(float thickness)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.BorderTorusThickness = thickness;
        }

        public void SetAxisCylTorusWidth(float width)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.BorderCylTorusWidth = width;
        }

        public void SetAxisCylTorusHeight(float height)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.BorderCylTorusHeight = height;
        }

        public void SetMidCapVisible(bool isVisible)
        {
            _isMidCapVisible = isVisible;
        }

        public void SetMidCapColor(Color color)
        {
            _midCapLookAndFeel.Color = color;
        }

        public void SetHoveredMidCapColor(Color color)
        {
            _midCapLookAndFeel.HoveredColor = color;
        }

        public void SetMidCapBorderVisible(bool isVisible)
        {
            _midCapLookAndFeel.IsSphereBorderVisible = isVisible;
        }

        public void SetMidCapBorderColor(Color color)
        {
            _midCapLookAndFeel.SphereBorderColor = color;
        }

        public void SetAxisBorderColor(int axisIndex, Color color)
        {
            _axesLookAndFeel[axisIndex].BorderColor = color;
        }

        public void SetHoveredColor(Color hoveredColor)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
            {
                lookAndFeel.HoveredColor = hoveredColor;
                lookAndFeel.HoveredBorderColor = hoveredColor;
            }
        }

        public void SetRotationArcColor(Color color)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.RotationArcLookAndFeel.Color = color;

            _camLookSliderLookAndFeel.RotationArcLookAndFeel.Color = color;
        }

        public void SetRotationArcBorderColor(Color color)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.RotationArcLookAndFeel.BorderColor = color;

            _camLookSliderLookAndFeel.RotationArcLookAndFeel.BorderColor = color;
        }

        public void SetUseShortestRotationArc(bool useShortest)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.RotationArcLookAndFeel.UseShortestRotation = useShortest;

            _camLookSliderLookAndFeel.RotationArcLookAndFeel.UseShortestRotation = useShortest;
        }

        public void SetRotationArcVisible(bool isVisible)
        {
            foreach (var lookAndFeel in _axesLookAndFeel)
                lookAndFeel.IsRotationArcVisible = isVisible;

            _camLookSliderLookAndFeel.IsRotationArcVisible = isVisible;
        }

        public void SetCamLookSliderRadiusOffset(float offset)
        {
            _camLookSliderRadiusOffset = Mathf.Max(0.0f, offset);
        }

        public void SetCamLookSliderBorderColor(Color color)
        {
            _camLookSliderLookAndFeel.BorderColor = color;
        }

        public void SetCamLookSliderHoveredBorderColor(Color color)
        {
            _camLookSliderLookAndFeel.HoveredBorderColor = color;
        }

        public void SetCamLookSliderVisible(bool isVisible)
        {
            _isCamLookSliderVisible = isVisible;
        }

        public void SetCamLookSliderPolyBorderType(GizmoPolygon2DBorderType polyBorderType)
        {
            _camLookSliderLookAndFeel.PolygonBorderType = polyBorderType;
        }

        public void SetCamLookSliderPolyBorderThickness(float thickness)
        {
            _camLookSliderLookAndFeel.BorderPolyThickness = thickness;
        }

        public void ConnectSliderLookAndFeel(GizmoPlaneSlider3D slider, int axisIndex)
        {
            slider.SharedLookAndFeel = _axesLookAndFeel[axisIndex];
        }

        public void ConnectMidCapLookAndFeel(GizmoCap3D cap)
        {
            cap.SharedLookAndFeel = _midCapLookAndFeel;
        }

        public void ConnectCamLookSliderLookAndFeel(GizmoPlaneSlider2D slider)
        {
            slider.SharedLookAndFeel = _camLookSliderLookAndFeel;  
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool; Color newColor; int newInt;
            GizmoShadeMode newShadeMode;
            GizmoCircle3DBorderType newCircleBorderType;
            GizmoFillMode3D newFillMode3D;
            GizmoPolygon2DBorderType newPolyBorder2DType;

            EditorGUILayoutEx.SectionHeader("Scale and size");
            var content = new GUIContent();
            content.text = "Use zoom factor";
            content.tooltip = "If this is checked, the gizmo will maintain a constant size regardless of its distance from the camera.";
            newBool = EditorGUILayout.ToggleLeft(content, UseZoomFactor);
            if (newBool != UseZoomFactor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetUseZoomFactor(newBool);
            }

            content.text = "Scale";
            content.tooltip = "The gizmo 3D scale. This is useful when you need to make the gizmo bigger or smaller because it maintains the relationship between different size properties.";
            newFloat = EditorGUILayout.FloatField(content, Scale);
            if (newFloat != Scale)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScale(newFloat);
            }

            content.text = "Radius";
            content.tooltip = "The radius of the rotation sphere. The final radius of the gizmo is actually: radius * scale * zoomFactor (if \'Use zoom factor\' is true).";
            newFloat = EditorGUILayout.FloatField(content, Radius);
            if (newFloat != Radius)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRadius(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider border");
            content.text = "Axis border type";
            content.tooltip = "The type of shape that is used to draw the axis slider borders.";
            newCircleBorderType = (GizmoCircle3DBorderType)EditorGUILayout.EnumPopup(content, AxisBorderType);
            if (newCircleBorderType != AxisBorderType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderType(newCircleBorderType);
            }

            if (AxisBorderType == GizmoCircle3DBorderType.Torus)
            {
                content.text = "Torus thickness";
                content.tooltip = "The torus thickness for the axis sliders when the border type is set to \'Torus\'.";
                newFloat = EditorGUILayout.FloatField(content, AxisTorusThickness);
                if(newFloat != AxisTorusThickness)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetAxisTorusThickness(newFloat);
                }
            }
            else
            if (AxisBorderType == GizmoCircle3DBorderType.CylindricalTorus)
            {
                content.text = "Torus width";
                content.tooltip = "The torus width for the axis sliders when the border type is set to \'CylindricalTorus\'. The width extends inside the area of the circle.";
                newFloat = EditorGUILayout.FloatField(content, AxisCylTorusWidth);
                if (newFloat != AxisCylTorusWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetAxisCylTorusWidth(newFloat);
                }

                content.text = "Torus height";
                content.tooltip = "The torus height for the axis sliders when the border type is set to \'CylindricalTorus\'. The height is perpendicular to the circle area.";
                newFloat = EditorGUILayout.FloatField(content, AxisCylTorusHeight);
                if (newFloat != AxisCylTorusHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetAxisCylTorusHeight(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            content.text = "X border";
            content.tooltip = "The border color of the X axis slider.";
            newColor = EditorGUILayout.ColorField(content, XBorderColor);
            if(newColor != XBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderColor(0, newColor);
            }

            content.text = "Y border";
            content.tooltip = "The border color of the Y axis slider.";
            newColor = EditorGUILayout.ColorField(content, YBorderColor);
            if (newColor != YBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderColor(1, newColor);
            }

            content.text = "Z border";
            content.tooltip = "The border color of the Z axis slider.";
            newColor = EditorGUILayout.ColorField(content, ZBorderColor);
            if (newColor != ZBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderColor(2, newColor);
            }

            content.text = "Hovered";
            content.tooltip = "The hovered color.";
            newColor = EditorGUILayout.ColorField(content, HoveredColor);
            if(newColor != HoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetHoveredColor(newColor);
            }

            content.text = "Mid cap";
            content.tooltip = "The color of middle cap.";
            newColor = EditorGUILayout.ColorField(content, MidCapColor);
            if (newColor != MidCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapColor(newColor);
            }

            content.text = "Hovered mid cap";
            content.tooltip = "The middle cap hovered color.";
            newColor = EditorGUILayout.ColorField(content, HoveredMidCapColor);
            if (newColor != HoveredMidCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetHoveredMidCapColor(newColor);
            }

            content.text = "Axis border cull alpha scale";
            content.tooltip = "Allows you to specify an alpha scale value for the axis border pixels which are hidden behind the mid cap.";
            newFloat = EditorGUILayout.FloatField(content, AxisCullAlphaScale);
            if (newFloat != AxisCullAlphaScale)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderCullAlphaScale(newFloat);
            }

            content.text = "Shade mode";
            content.tooltip = "The type of shading that is applied to the gizmo handles.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, ShadeMode);
            if (newShadeMode != ShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetShadeMode(newShadeMode);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Fill");
            content.text = "Axis border";
            content.tooltip = "Fill mode for the axes borders.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, AxisBorderFillMode);
            if (newFillMode3D != AxisBorderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderFillMode(newFillMode3D);
            }

            if (AxisBorderFillMode == GizmoFillMode3D.Wire)
            {
                content.text = "Num torus axial slices";
                content.tooltip = "If a torus axis border is used, this is the number of axial slices used for wireframe rendering.";
                newInt = EditorGUILayout.IntField(content, NumAxisTorusWireAxialSlices);
                if (newInt != NumAxisTorusWireAxialSlices)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetNumAxisTorusWireAxialSlices(newInt);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Rotation arc");
            content.text = "Is visible";
            content.tooltip = "If this is checked, a rotation arc will appear during rotation. This does not apply to rotations performed with the mid cap.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRotationArcVisible);
            if (newBool != IsRotationArcVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRotationArcVisible(newBool);
            }

            content.text = "Fill color";
            content.tooltip = "The rotation arc fill color.";
            newColor = EditorGUILayout.ColorField(content, RotationArcColor);
            if (newColor != RotationArcColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRotationArcColor(newColor);
            }

            content.text = "Border color";
            content.tooltip = "The rotation arc border color.";
            newColor = EditorGUILayout.ColorField(content, RotationArcBorderColor);
            if (newColor != RotationArcBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRotationArcBorderColor(newColor);
            }

            content.text = "Use shortest arc";
            content.tooltip = "If this is checked, the rotation arc will never exceed 180 degrees and it will always choose the shortest rotation angle.";
            newBool = EditorGUILayout.ToggleLeft(content, UseShortestRotationArc);
            if (newBool != UseShortestRotationArc)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetUseShortestRotationArc(newBool);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Camera look slider");
            content.text = "Border type";
            content.tooltip = "The type of border which is used to draw the circle that rotates around the camera look axis.";
            newPolyBorder2DType = (GizmoPolygon2DBorderType)EditorGUILayout.EnumPopup(content, CamLookSliderPolyBorderType);
            if(newPolyBorder2DType != CamLookSliderPolyBorderType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookSliderPolyBorderType(newPolyBorder2DType);
            }

            if (CamLookSliderPolyBorderType == GizmoPolygon2DBorderType.Thick)
            {
                content.text = "Border thickness";
                content.tooltip = "When a thick border is used, this property represents the border thickness.";
                newFloat = EditorGUILayout.FloatField(content, CamLookSliderPolyBorderThickness);
                if(newFloat != CamLookSliderPolyBorderThickness)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetCamLookSliderPolyBorderThickness(newFloat);
                }
            }

            content.text = "Radius offset";
            content.tooltip = "This value is added to the \'Radius\' property to calculate the radius of the circle which can be used to rotate around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, CamLookSliderRadiusOffset);
            if (newFloat != CamLookSliderRadiusOffset)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookSliderRadiusOffset(newFloat);
            }

            content.text = "Border color";
            content.tooltip = "The border color for the circle which can be used to rotate around the camera look axis.";
            newColor = EditorGUILayout.ColorField(content, CamLookSliderBorderColor);
            if (newColor != CamLookSliderBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookSliderBorderColor(newColor);
            }

            content.text = "Border hovered color";
            content.tooltip = "The hovered border color for the circle which can be used to rotate around the camera look axis.";
            newColor = EditorGUILayout.ColorField(content, CamLookSliderHoveredBorderColor);
            if (newColor != CamLookSliderHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookSliderHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Visibility");
            content.text = "X axis";
            content.tooltip = "Controls the visibility of the X axis rotation slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsAxisVisible(0));
            if (newBool != IsAxisVisible(0))
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisVisible(0, newBool);
            }

            content.text = "Y axis";
            content.tooltip = "Controls the visibility of the Y axis rotation slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsAxisVisible(1));
            if (newBool != IsAxisVisible(1))
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisVisible(1, newBool);
            }

            content.text = "Z axis";
            content.tooltip = "Controls the visibility of the Z axis rotation slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsAxisVisible(2));
            if (newBool != IsAxisVisible(2))
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisVisible(2, newBool);
            }

            content.text = "Camera look slider";
            content.tooltip = "Controls the visibility of the circle slider which can be used to rotate aroudn the camera look vector.";
            newBool = EditorGUILayout.ToggleLeft(content, IsCamLookSliderVisible);
            if (newBool != IsCamLookSliderVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookSliderVisible(newBool);
            }

            content.text = "Mid cap";
            content.tooltip = "Controls the visibility of the mid cap.";
            newBool = EditorGUILayout.ToggleLeft(content, IsMidCapVisible);
            if (newBool != IsMidCapVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapVisible(newBool);
            }

            content.text = "Mid cap border";
            content.tooltip = "Controls the visibility of the mid cap border.";
            newBool = EditorGUILayout.ToggleLeft(content, IsMidCapBorderVisible);
            if (newBool != IsMidCapBorderVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapBorderVisible(newBool);
            }
        }
        #endif
    }
}
