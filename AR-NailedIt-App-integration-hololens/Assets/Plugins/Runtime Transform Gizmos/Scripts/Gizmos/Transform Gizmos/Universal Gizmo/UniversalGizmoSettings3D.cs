using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class UniversalGizmoSettings3D : Settings
    {
        [SerializeField]
        private UniversalGizmoSettingsCategory _displayCategory = UniversalGizmoSettingsCategory.Move;

        #region Move
        [SerializeField]
        private GizmoObjectVertexSnapSettings _mvVertexSnapSettings = new GizmoObjectVertexSnapSettings();
        [SerializeField]
        private GizmoLineSlider3DSettings[] _mvSglSliderSettings = new GizmoLineSlider3DSettings[6];
        [SerializeField]
        private GizmoPlaneSlider3DSettings[] _mvDblSliderSettings = new GizmoPlaneSlider3DSettings[3];

        public GizmoObjectVertexSnapSettings VertexSnapSettings { get { return _mvVertexSnapSettings; } }
        public float MvLineSliderHoverEps { get { return _mvSglSliderSettings[0].LineHoverEps; } }
        public float MvBoxSliderHoverEps { get { return _mvSglSliderSettings[0].BoxHoverEps; } }
        public float MvCylinderSliderHoverEps { get { return _mvSglSliderSettings[0].CylinderHoverEps; } }
        public float MvXSnapStep { get { return GetMvSglSliderSettings(0, AxisSign.Positive).OffsetSnapStep; } }
        public float MvYSnapStep { get { return GetMvSglSliderSettings(1, AxisSign.Positive).OffsetSnapStep; } }
        public float MvZSnapStep { get { return GetMvSglSliderSettings(2, AxisSign.Positive).OffsetSnapStep; } }
        public float MvDragSensitivity { get { return _mvSglSliderSettings[0].OffsetSensitivity; } }
        #endregion

        #region Rotate
        [SerializeField]
        private float _rtCamRightSnapStep = 15.0f;
        [SerializeField]
        private float _rtCamUpSnapStep = 15.0f;

        [SerializeField]
        private GizmoPlaneSlider3DSettings[] _rtSliderSettings = new GizmoPlaneSlider3DSettings[3];
        [SerializeField]
        private GizmoPlaneSlider2DSettings _rtCamLookSliderSettings = new GizmoPlaneSlider2DSettings();

        public float RtAxisLineHoverEps { get { return _rtSliderSettings[0].BorderLineHoverEps; } }
        public float RtAxisTorusHoverEps { get { return _rtSliderSettings[0].BorderTorusHoverEps; } }
        public float RtCamLookLineHoverEps { get { return _rtCamLookSliderSettings.BorderLineHoverEps; } }
        public float RtCamLookThickHoverEps { get { return _rtCamLookSliderSettings.ThickBorderPolyHoverEps; } }
        public bool RtCanHoverCulledPixels { get { return !_rtSliderSettings[0].IsCircleHoverCullEnabled; } }
        public GizmoSnapMode RtSnapMode { get { return _rtSliderSettings[0].RotationSnapMode; } }
        public float RtXSnapStep { get { return _rtSliderSettings[0].RotationSnapStep; } }
        public float RtYSnapStep { get { return _rtSliderSettings[1].RotationSnapStep; } }
        public float RtZSnapStep { get { return _rtSliderSettings[2].RotationSnapStep; } }
        public float RtCamRightSnapStep { get { return _rtCamRightSnapStep; } }
        public float RtCamUpSnapStep { get { return _rtCamUpSnapStep; } }
        public float RtCamLookSnapStep { get { return _rtCamLookSliderSettings.RotationSnapStep; } }
        public float RtDragSensitivity { get { return _rtSliderSettings[0].RotationSensitivity; } }
        #endregion

        #region Scale
        [SerializeField]
        private float _scUniformSnapStep = 0.1f;
        [SerializeField]
        private GizmoLineSlider3DSettings[] _scSglSliderSettings = new GizmoLineSlider3DSettings[6];
        [SerializeField]
        private GizmoPlaneSlider3DSettings[] _scDblSliderSettings = new GizmoPlaneSlider3DSettings[3];

        public float ScLineSliderHoverEps { get { return _scSglSliderSettings[0].LineHoverEps; } }
        public float ScBoxSliderHoverEps { get { return _scSglSliderSettings[0].BoxHoverEps; } }
        public float ScCylinderSliderHoverEps { get { return _scSglSliderSettings[0].CylinderHoverEps; } }
        public float ScXSnapStep { get { return GetScSglSliderSettings(0, AxisSign.Positive).ScaleSnapStep; } }
        public float ScYSnapStep { get { return GetScSglSliderSettings(1, AxisSign.Positive).ScaleSnapStep; } }
        public float ScZSnapStep { get { return GetScSglSliderSettings(2, AxisSign.Positive).ScaleSnapStep; } }
        public float ScXYSnapStep { get { return GetScDblSliderSettings(PlaneId.XY).ProportionalScaleSnapStep; } }
        public float ScYZSnapStep { get { return GetScDblSliderSettings(PlaneId.YZ).ProportionalScaleSnapStep; } }
        public float ScZXSnapStep { get { return GetScDblSliderSettings(PlaneId.ZX).ProportionalScaleSnapStep; } }
        public float ScUniformSnapStep { get { return _scUniformSnapStep; } }
        public float ScDragSensitivity { get { return _scSglSliderSettings[0].ScaleSensitivity; } }
        #endregion

        public UniversalGizmoSettingsCategory DisplayCategory { get { return _displayCategory; } set { _displayCategory = value; } }

        public UniversalGizmoSettings3D()
        {
            // Move
            for (int axisIndex = 0; axisIndex < _mvSglSliderSettings.Length; ++axisIndex)
            {
                _mvSglSliderSettings[axisIndex] = new GizmoLineSlider3DSettings();
            }

            for (int axisIndex = 0; axisIndex < _mvDblSliderSettings.Length; ++axisIndex)
            {
                _mvDblSliderSettings[axisIndex] = new GizmoPlaneSlider3DSettings();
                _mvDblSliderSettings[axisIndex].AreaHoverEps = 0.0f;
                _mvDblSliderSettings[axisIndex].BorderLineHoverEps = 0.0f;
                _mvDblSliderSettings[axisIndex].BorderBoxHoverEps = 0.0f;
            }

            // Rotation
            for (int sliderIndex = 0; sliderIndex < _rtSliderSettings.Length; ++sliderIndex)
            {
                _rtSliderSettings[sliderIndex] = new GizmoPlaneSlider3DSettings();
            }

            SetRtCamLookLineHoverEps(7.0f);
            SetRtCanHoverCulledPixels(false);
            SetRtAxisTorusHoverEps(0.4f);

            // Scale
            for (int axisIndex = 0; axisIndex < _scSglSliderSettings.Length; ++axisIndex)
            {
                _scSglSliderSettings[axisIndex] = new GizmoLineSlider3DSettings();
            }

            for (int axisIndex = 0; axisIndex < _scDblSliderSettings.Length; ++axisIndex)
            {
                _scDblSliderSettings[axisIndex] = new GizmoPlaneSlider3DSettings();
                _scDblSliderSettings[axisIndex].ScaleMode = GizmoDblAxisScaleMode.Proportional;
                _scDblSliderSettings[axisIndex].AreaHoverEps = 0.0f;
                _scDblSliderSettings[axisIndex].BorderLineHoverEps = 0.0f;
                _scDblSliderSettings[axisIndex].BorderBoxHoverEps = 0.0f;
            }

            SetScDragSensitivity(0.6f);
        }

        #region Move
        public void SetMvLineSliderHoverEps(float eps)
        {
            foreach (var settings in _mvSglSliderSettings)
                settings.LineHoverEps = eps;
        }

        public void SetMvBoxSliderHoverEps(float eps)
        {
            foreach (var settings in _mvSglSliderSettings)
            {
                settings.BoxHoverEps = eps;
            }
        }

        public void SetMvCylinderSliderHoverEps(float eps)
        {
            foreach (var settings in _mvSglSliderSettings)
            {
                settings.CylinderHoverEps = eps;
            }
        }

        public void SetMvXSnapStep(float snapStep)
        {
            GetMvSglSliderSettings(0, AxisSign.Positive).OffsetSnapStep = snapStep;
            GetMvSglSliderSettings(0, AxisSign.Negative).OffsetSnapStep = snapStep;
            GetMvDblSliderSettings(PlaneId.XY).OffsetSnapStepRight = snapStep;
            GetMvDblSliderSettings(PlaneId.ZX).OffsetSnapStepUp = snapStep;
        }

        public void SetMvYSnapStep(float snapStep)
        {
            GetMvSglSliderSettings(1, AxisSign.Positive).OffsetSnapStep = snapStep;
            GetMvSglSliderSettings(1, AxisSign.Negative).OffsetSnapStep = snapStep;
            GetMvDblSliderSettings(PlaneId.XY).OffsetSnapStepUp = snapStep;
            GetMvDblSliderSettings(PlaneId.YZ).OffsetSnapStepRight = snapStep;
        }

        public void SetMvZSnapStep(float snapStep)
        {
            GetMvSglSliderSettings(2, AxisSign.Positive).OffsetSnapStep = snapStep;
            GetMvSglSliderSettings(2, AxisSign.Negative).OffsetSnapStep = snapStep;
            GetMvDblSliderSettings(PlaneId.YZ).OffsetSnapStepUp = snapStep;
            GetMvDblSliderSettings(PlaneId.ZX).OffsetSnapStepRight = snapStep;
        }

        public void SetMvDragSensitivity(float sensitivity)
        {
            foreach (var settings in _mvSglSliderSettings)
                settings.OffsetSensitivity = sensitivity;

            foreach (var settings in _mvDblSliderSettings)
                settings.OffsetSensitivity = sensitivity;
        }

        public void ConnectMvSliderSettings(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedSettings = GetMvSglSliderSettings(axisIndex, axisSign);
        }

        public void ConnectMvDblSliderSettings(GizmoPlaneSlider3D dblSlider, PlaneId planeId)
        {
            dblSlider.SharedSettings = GetMvDblSliderSettings(planeId);
        }

        public void Inherit(MoveGizmoSettings3D settings)
        {
            SetMvLineSliderHoverEps(settings.LineSliderHoverEps);
            SetMvBoxSliderHoverEps(settings.BoxSliderHoverEps);
            SetMvCylinderSliderHoverEps(settings.CylinderSliderHoverEps);
            SetMvDragSensitivity(settings.DragSensitivity);
            SetMvXSnapStep(settings.XSnapStep);
            SetMvYSnapStep(settings.YSnapStep);
            SetMvZSnapStep(settings.ZSnapStep);

            settings.VertexSnapSettings.Transfer(_mvVertexSnapSettings);
        }

        private GizmoLineSlider3DSettings GetMvSglSliderSettings(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSliderSettings[axisIndex];
            else return _mvSglSliderSettings[3 + axisIndex];
        }

        private GizmoPlaneSlider3DSettings GetMvDblSliderSettings(PlaneId planeId)
        {
            return _mvDblSliderSettings[(int)planeId];
        }
        #endregion

        #region Rotation
        public void SetRtCanHoverCulledPixels(bool canHover)
        {
            foreach (var settings in _rtSliderSettings)
                settings.IsCircleHoverCullEnabled = !canHover;
        }

        public void SetRtAxisLineHoverEps(float eps)
        {
            foreach (var settings in _rtSliderSettings)
                settings.BorderLineHoverEps = eps;
        }

        public void SetRtAxisTorusHoverEps(float eps)
        {
            foreach (var settings in _rtSliderSettings)
                settings.BorderTorusHoverEps = eps;
        }

        public void SetRtCamLookLineHoverEps(float eps)
        {
            _rtCamLookSliderSettings.BorderLineHoverEps = eps;
        }

        public void SetRtCamLookThickHoverEps(float eps)
        {
            _rtCamLookSliderSettings.ThickBorderPolyHoverEps = eps;
        }

        public void SetRtAxisSnapStep(int axisIndex, float snapStep)
        {
            _rtSliderSettings[axisIndex].RotationSnapStep = snapStep;
        }

        public void SetRtCamRightSnapStep(float snapStep)
        {
            _rtCamRightSnapStep = Mathf.Max(1e-4f, snapStep);
        }

        public void SetRtCamUpSnapStep(float snapStep)
        {
            _rtCamUpSnapStep = Mathf.Max(1e-4f, snapStep);
        }

        public void SetRtCamLookSnapStep(float snapStep)
        {
            _rtCamLookSliderSettings.RotationSnapStep = snapStep;
        }

        public void SetRtSnapMode(GizmoSnapMode snapMode)
        {
            foreach (var settings in _rtSliderSettings)
                settings.RotationSnapMode = snapMode;

            _rtCamLookSliderSettings.RotationSnapMode = snapMode;
        }

        public void SetRtDragSensitivity(float sensitivity)
        {
            foreach (var settings in _rtSliderSettings)
                settings.RotationSensitivity = sensitivity;

            _rtCamLookSliderSettings.RotationSensitivity = sensitivity;
        }

        public void ConnectRtSliderSettings(GizmoPlaneSlider3D slider, int axisIndex)
        {
            slider.SharedSettings = _rtSliderSettings[axisIndex];
        }

        public void ConnectRtCamLookSliderSettings(GizmoPlaneSlider2D slider)
        {
            slider.SharedSettings = _rtCamLookSliderSettings;
        }

        public void Inherit(RotationGizmoSettings3D settings)
        {
            SetRtAxisLineHoverEps(settings.AxisLineHoverEps);
            SetRtAxisTorusHoverEps(settings.AxisTorusHoverEps);
            SetRtCamLookThickHoverEps(settings.CamLookThickHoverEps);
            SetRtCamLookLineHoverEps(settings.CamLookLineHoverEps);
            SetRtCamLookSnapStep(settings.CamLookSnapStep);
            SetRtCamRightSnapStep(settings.CamRightSnapStep);
            SetRtCamUpSnapStep(settings.CamUpSnapStep);
            SetRtCanHoverCulledPixels(settings.CanHoverCulledPixels);
            SetRtDragSensitivity(settings.DragSensitivity);
            SetRtSnapMode(settings.SnapMode);
            SetRtAxisSnapStep(0, settings.XSnapStep);
            SetRtAxisSnapStep(1, settings.YSnapStep);
            SetRtAxisSnapStep(2, settings.ZSnapStep);
        }
        #endregion

        #region Scale
        public void SetScLineSliderHoverEps(float eps)
        {
            foreach (var settings in _scSglSliderSettings)
                settings.LineHoverEps = eps;
        }

        public void SetScBoxSliderHoverEps(float eps)
        {
            foreach (var settings in _scSglSliderSettings)
            {
                settings.BoxHoverEps = eps;
            }
        }

        public void SetScCylinderSliderHoverEps(float eps)
        {
            foreach (var settings in _scSglSliderSettings)
            {
                settings.CylinderHoverEps = eps;
            }
        }

        public void SetScXSnapStep(float snapStep)
        {
            GetScSglSliderSettings(0, AxisSign.Positive).ScaleSnapStep = snapStep;
            GetScSglSliderSettings(0, AxisSign.Negative).ScaleSnapStep = snapStep;
            GetScDblSliderSettings(PlaneId.XY).ScaleSnapStepRight = snapStep;
            GetScDblSliderSettings(PlaneId.ZX).ScaleSnapStepUp = snapStep;
        }

        public void SetScYSnapStep(float snapStep)
        {
            GetScSglSliderSettings(1, AxisSign.Positive).ScaleSnapStep = snapStep;
            GetScSglSliderSettings(1, AxisSign.Negative).ScaleSnapStep = snapStep;
            GetScDblSliderSettings(PlaneId.XY).ScaleSnapStepUp = snapStep;
            GetScDblSliderSettings(PlaneId.YZ).ScaleSnapStepRight = snapStep;
        }

        public void SetScZSnapStep(float snapStep)
        {
            GetScSglSliderSettings(2, AxisSign.Positive).ScaleSnapStep = snapStep;
            GetScSglSliderSettings(2, AxisSign.Negative).ScaleSnapStep = snapStep;
            GetScDblSliderSettings(PlaneId.YZ).ScaleSnapStepUp = snapStep;
            GetScDblSliderSettings(PlaneId.ZX).ScaleSnapStepRight = snapStep;
        }

        public void SetScXYSnapStep(float snapStep)
        {
            GetScDblSliderSettings(PlaneId.XY).ProportionalScaleSnapStep = snapStep;
        }

        public void SetScYZSnapStep(float snapStep)
        {
            GetScDblSliderSettings(PlaneId.YZ).ProportionalScaleSnapStep = snapStep;
        }

        public void SetScZXSnapStep(float snapStep)
        {
            GetScDblSliderSettings(PlaneId.ZX).ProportionalScaleSnapStep = snapStep;
        }

        public void SetScUniformScaleSnapStep(float snapStep)
        {
            _scUniformSnapStep = Mathf.Max(1e-4f, snapStep);
        }

        public void SetScDragSensitivity(float sensitivity)
        {
            foreach (var settings in _scSglSliderSettings)
                settings.ScaleSensitivity = sensitivity;
        }

        public void ConnectScSliderSettings(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedSettings = GetScSglSliderSettings(axisIndex, axisSign);
        }

        public void ConnectScDblSliderSettings(GizmoPlaneSlider3D dblSlider, PlaneId planeId)
        {
            dblSlider.SharedSettings = GetScDblSliderSettings(planeId);
        }

        public void Inherit(ScaleGizmoSettings3D settings)
        {
            SetScLineSliderHoverEps(settings.LineSliderHoverEps);
            SetScCylinderSliderHoverEps(settings.CylinderSliderHoverEps);
            SetScBoxSliderHoverEps(settings.BoxSliderHoverEps);
            SetScDragSensitivity(settings.DragSensitivity);
            SetScUniformScaleSnapStep(settings.UniformSnapStep);
            SetScXSnapStep(settings.XSnapStep);
            SetScYSnapStep(settings.YSnapStep);
            SetScZSnapStep(settings.ZSnapStep);
            SetScXYSnapStep(settings.XYSnapStep);
            SetScYZSnapStep(settings.YZSnapStep);
            SetScZXSnapStep(settings.ZXSnapStep);
        }

        private GizmoLineSlider3DSettings GetScSglSliderSettings(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _scSglSliderSettings[axisIndex];
            else return _scSglSliderSettings[3 + axisIndex];
        }

        private GizmoPlaneSlider3DSettings GetScDblSliderSettings(PlaneId planeId)
        {
            return _scDblSliderSettings[(int)planeId];
        }
        #endregion

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            if (DisplayCategory == UniversalGizmoSettingsCategory.Move) RenderMoveContent(undoRecordObject);
            else if (DisplayCategory == UniversalGizmoSettingsCategory.Rotate) RenderRotateContent(undoRecordObject);
            else if (DisplayCategory == UniversalGizmoSettingsCategory.Scale) RenderScaleContent(undoRecordObject);
        }

        private void RenderMoveContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;

            EditorGUILayoutEx.SectionHeader("Hover epsilon");
            var content = new GUIContent();
            content.text = "Line slider";
            content.tooltip = "Controls the precision used when hovering line sliders.";
            newFloat = EditorGUILayout.FloatField(content, MvLineSliderHoverEps);
            if (newFloat != MvLineSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvLineSliderHoverEps(newFloat);
            }

            content.text = "Box slider";
            content.tooltip = "Controls the precision used when hovering box sliders.";
            newFloat = EditorGUILayout.FloatField(content, MvBoxSliderHoverEps);
            if (newFloat != MvBoxSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvBoxSliderHoverEps(newFloat);
            }

            content.text = "Cylinder slider";
            content.tooltip = "Controls the precision used when hovering cylinder sliders.";
            newFloat = EditorGUILayout.FloatField(content, MvCylinderSliderHoverEps);
            if (newFloat != MvCylinderSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvCylinderSliderHoverEps(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Snapping");
            content.text = "X";
            content.tooltip = "Allows you to specify the snap step for the X axis.";
            newFloat = EditorGUILayout.FloatField(content, MvXSnapStep);
            if (newFloat != MvXSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvXSnapStep(newFloat);
            }

            content.text = "Y";
            content.tooltip = "Allows you to specify the snap step for the Y axis.";
            newFloat = EditorGUILayout.FloatField(content, MvYSnapStep);
            if (newFloat != MvYSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvYSnapStep(newFloat);
            }

            content.text = "Z";
            content.tooltip = "Allows you to specify the snap step for the Z axis.";
            newFloat = EditorGUILayout.FloatField(content, MvZSnapStep);
            if (newFloat != MvZSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvZSnapStep(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Drag sensitivity");
            content.text = "Sensitivity";
            content.tooltip = "This value allows you to scale the slider drag speed.";
            newFloat = EditorGUILayout.FloatField(content, MvDragSensitivity);
            if (newFloat != MvDragSensitivity)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDragSensitivity(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Vertex snapping");
            _mvVertexSnapSettings.RenderEditorGUI(undoRecordObject);
        }

        private void RenderRotateContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool;
            GizmoSnapMode newSnapMode;

            EditorGUILayoutEx.SectionHeader("Hover epsilon/misc");
            var content = new GUIContent();
            content.text = "Axis line eps";
            content.tooltip = "Controls the precision used when hovering the axes rotation circles.";
            newFloat = EditorGUILayout.FloatField(content, RtAxisLineHoverEps);
            if (newFloat != RtAxisLineHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisLineHoverEps(newFloat);
            }

            content.text = "Axis torus eps";
            content.tooltip = "Controls the precision used when hovering the axes rotation tori.";
            newFloat = EditorGUILayout.FloatField(content, RtAxisTorusHoverEps);
            if (newFloat != RtAxisTorusHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisTorusHoverEps(newFloat);
            }

            content.text = "Cam look line eps";
            content.tooltip = "Controls the precision used when hovering the THIN border of the circle that rotates around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, RtCamLookLineHoverEps);
            if (newFloat != RtCamLookLineHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookLineHoverEps(newFloat);
            }

            content.text = "Cam look thick eps";
            content.tooltip = "Controls the precision used when hovering the THICK border of the circle that rotates around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, RtCamLookThickHoverEps);
            if (newFloat != RtCamLookThickHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookThickHoverEps(newFloat);
            }

            content.text = "Can hover culled pixels";
            content.tooltip = "If this is checked, you will be able to hover the culled areas/pixels (i.e. the pixels hiden behind the rotation sphere) of the axes sliders.";
            newBool = EditorGUILayout.ToggleLeft(content, RtCanHoverCulledPixels);
            if (newBool != RtCanHoverCulledPixels)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCanHoverCulledPixels(newBool);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Snapping");
            content.text = "Snap mode";
            content.tooltip = "The rotation snap mode. Relative rotation counts from the current rotation angle. Absolute rotation counts from 0.";
            newSnapMode = (GizmoSnapMode)EditorGUILayout.EnumPopup(content, RtSnapMode);
            if (newSnapMode != RtSnapMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtSnapMode(newSnapMode);
            }

            content.text = "X";
            content.tooltip = "Snap step value used when rotating around the X axis.";
            newFloat = EditorGUILayout.FloatField(content, RtXSnapStep);
            if (newFloat != RtXSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisSnapStep(0, newFloat);
            }

            content.text = "Y";
            content.tooltip = "Snap step value used when rotating around the Y axis.";
            newFloat = EditorGUILayout.FloatField(content, RtYSnapStep);
            if (newFloat != RtYSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisSnapStep(1, newFloat);
            }

            content.text = "Z";
            content.tooltip = "Snap step value used when rotating around the Z axis.";
            newFloat = EditorGUILayout.FloatField(content, RtZSnapStep);
            if (newFloat != RtZSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisSnapStep(2, newFloat);
            }

            content.text = "Camera right";
            content.tooltip = "Snap step value used when rotating around the camera right axis.";
            newFloat = EditorGUILayout.FloatField(content, RtCamRightSnapStep);
            if (newFloat != RtCamRightSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamRightSnapStep(newFloat);
            }

            content.text = "Camera up";
            content.tooltip = "Snap step value used when rotating around the camera up axis.";
            newFloat = EditorGUILayout.FloatField(content, RtCamUpSnapStep);
            if (newFloat != RtCamUpSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamUpSnapStep(newFloat);
            }

            content.text = "Camera look";
            content.tooltip = "Snap step value used when rotating around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, RtCamLookSnapStep);
            if (newFloat != RtCamLookSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookSnapStep(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Drag sensitivity");
            content.text = "Sensitivity";
            content.tooltip = "This value allows you to scale the slider drag speed.";
            newFloat = EditorGUILayout.FloatField(content, RtDragSensitivity);
            if (newFloat != RtDragSensitivity)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtDragSensitivity(newFloat);
            }
        }

        private void RenderScaleContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;

            EditorGUILayoutEx.SectionHeader("Hover epsilon");
            var content = new GUIContent();
            content.text = "Line slider";
            content.tooltip = "Controls the precision used when hovering line sliders.";
            newFloat = EditorGUILayout.FloatField(content, ScLineSliderHoverEps);
            if (newFloat != ScLineSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScLineSliderHoverEps(newFloat);
            }

            content.text = "Box slider";
            content.tooltip = "Controls the precision used when hovering box sliders.";
            newFloat = EditorGUILayout.FloatField(content, ScBoxSliderHoverEps);
            if (newFloat != ScBoxSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScBoxSliderHoverEps(newFloat);
            }

            content.text = "Cylinder slider";
            content.tooltip = "Controls the precision used when hovering cylinder sliders.";
            newFloat = EditorGUILayout.FloatField(content, ScCylinderSliderHoverEps);
            if (newFloat != ScCylinderSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScCylinderSliderHoverEps(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Snapping");
            content.text = "X";
            content.tooltip = "The snap step for the X axis.";
            newFloat = EditorGUILayout.FloatField(content, ScXSnapStep);
            if (newFloat != ScXSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScXSnapStep(newFloat);
            }

            content.text = "Y";
            content.tooltip = "The snap step for the Y axis.";
            newFloat = EditorGUILayout.FloatField(content, ScYSnapStep);
            if (newFloat != ScYSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScYSnapStep(newFloat);
            }

            content.text = "Z";
            content.tooltip = "The snap step for the Z axis.";
            newFloat = EditorGUILayout.FloatField(content, ScZSnapStep);
            if (newFloat != ScZSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScZSnapStep(newFloat);
            }

            content.text = "XY";
            content.tooltip = "The snap step for the XY double-axis slider.";
            newFloat = EditorGUILayout.FloatField(content, ScXYSnapStep);
            if (newFloat != ScXYSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScXYSnapStep(newFloat);
            }

            content.text = "YZ";
            content.tooltip = "The snap step for the YZ double-axis slider.";
            newFloat = EditorGUILayout.FloatField(content, ScYZSnapStep);
            if (newFloat != ScYZSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScYZSnapStep(newFloat);
            }

            content.text = "ZX";
            content.tooltip = "The snap step for the ZX double-axis slider.";
            newFloat = EditorGUILayout.FloatField(content, ScZXSnapStep);
            if (newFloat != ScZXSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScZXSnapStep(newFloat);
            }

            content.text = "Uniform";
            content.tooltip = "The snap step value used for uniform scaling.";
            newFloat = EditorGUILayout.FloatField(content, ScUniformSnapStep);
            if (newFloat != ScUniformSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScUniformScaleSnapStep(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Drag sensitivity");
            content.text = "Sensitivity";
            content.tooltip = "This value allows you to scale the slider drag speed.";
            newFloat = EditorGUILayout.FloatField(content, ScDragSensitivity);
            if (newFloat != ScDragSensitivity)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScDragSensitivity(newFloat);
            }
        }
        #endif
    }
}
