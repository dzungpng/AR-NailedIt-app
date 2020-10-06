using System;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class RotationGizmoSettings3D : Settings
    {
        [SerializeField]
        private float _camRightSnapStep = 15.0f;
        [SerializeField]
        private float _camUpSnapStep = 15.0f;

        [SerializeField]
        private GizmoPlaneSlider3DSettings[] _sliderSettings = new GizmoPlaneSlider3DSettings[3];
        [SerializeField]
        private GizmoPlaneSlider2DSettings _camLookSliderSettings = new GizmoPlaneSlider2DSettings();

        public float AxisLineHoverEps { get { return _sliderSettings[0].BorderLineHoverEps; } }
        public float AxisTorusHoverEps { get { return _sliderSettings[0].BorderTorusHoverEps; } }
        public float CamLookLineHoverEps { get { return _camLookSliderSettings.BorderLineHoverEps; } }
        public float CamLookThickHoverEps { get { return _camLookSliderSettings.ThickBorderPolyHoverEps; } }
        public bool CanHoverCulledPixels { get { return !_sliderSettings[0].IsCircleHoverCullEnabled; } }
        public GizmoSnapMode SnapMode { get { return _sliderSettings[0].RotationSnapMode; } }
        public float XSnapStep { get { return _sliderSettings[0].RotationSnapStep; } }
        public float YSnapStep { get { return _sliderSettings[1].RotationSnapStep; } }
        public float ZSnapStep { get { return _sliderSettings[2].RotationSnapStep; } }
        public float CamRightSnapStep { get { return _camRightSnapStep; } }
        public float CamUpSnapStep { get { return _camUpSnapStep; } }
        public float CamLookSnapStep { get { return _camLookSliderSettings.RotationSnapStep; } }
        public float DragSensitivity { get { return _sliderSettings[0].RotationSensitivity; } }

        public RotationGizmoSettings3D()
        {
            for(int sliderIndex = 0; sliderIndex < _sliderSettings.Length; ++sliderIndex)
            {
                _sliderSettings[sliderIndex] = new GizmoPlaneSlider3DSettings();
            }

            SetCamLookLineHoverEps(7.0f);
            SetCanHoverCulledPixels(false);
            SetAxisTorusHoverEps(0.4f);
        }

        public void SetCanHoverCulledPixels(bool canHover)
        {
            foreach (var settings in _sliderSettings)
                settings.IsCircleHoverCullEnabled = !canHover;
        }

        public void SetAxisLineHoverEps(float eps)
        {
            foreach (var settings in _sliderSettings)
                settings.BorderLineHoverEps = eps;
        }

        public void SetAxisTorusHoverEps(float eps)
        {
            foreach (var settings in _sliderSettings)
                settings.BorderTorusHoverEps = eps;
        }

        public void SetCamLookLineHoverEps(float eps)
        {
            _camLookSliderSettings.BorderLineHoverEps = eps;
        }

        public void SetCamLookThickHoverEps(float eps)
        {
            _camLookSliderSettings.ThickBorderPolyHoverEps = eps;
        }

        public void SetAxisSnapStep(int axisIndex, float snapStep)
        {
            _sliderSettings[axisIndex].RotationSnapStep = snapStep;
        }

        public void SetCamRightSnapStep(float snapStep)
        {
            _camRightSnapStep = Mathf.Max(1e-4f, snapStep);
        }

        public void SetCamUpSnapStep(float snapStep)
        {
            _camUpSnapStep = Mathf.Max(1e-4f, snapStep);
        }

        public void SetCamLookSnapStep(float snapStep)
        {
            _camLookSliderSettings.RotationSnapStep = snapStep;
        }

        public void SetSnapMode(GizmoSnapMode snapMode)
        {
            foreach (var settings in _sliderSettings)
                settings.RotationSnapMode = snapMode;

            _camLookSliderSettings.RotationSnapMode = snapMode;
        }

        public void SetDragSensitivity(float sensitivity)
        {
            foreach (var settings in _sliderSettings)
                settings.RotationSensitivity = sensitivity;

            _camLookSliderSettings.RotationSensitivity = sensitivity;
        }

        public void ConnectSliderSettings(GizmoPlaneSlider3D slider, int axisIndex)
        {
            slider.SharedSettings = _sliderSettings[axisIndex];
        }

        public void ConnectCamLookSliderSettings(GizmoPlaneSlider2D slider)
        {
            slider.SharedSettings = _camLookSliderSettings;
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool;
            GizmoSnapMode newSnapMode;

            EditorGUILayoutEx.SectionHeader("Hover epsilon/misc");
            var content = new GUIContent();
            content.text = "Axis line eps";
            content.tooltip = "Controls the precision used when hovering the axes rotation circles.";
            newFloat = EditorGUILayout.FloatField(content, AxisLineHoverEps);
            if (newFloat != AxisLineHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisLineHoverEps(newFloat);
            }

            content.text = "Axis torus eps";
            content.tooltip = "Controls the precision used when hovering the axes rotation tori.";
            newFloat = EditorGUILayout.FloatField(content, AxisTorusHoverEps);
            if (newFloat != AxisTorusHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisTorusHoverEps(newFloat);
            }

            content.text = "Cam look line eps";
            content.tooltip = "Controls the precision used when hovering the THIN border of the circle that rotates around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, CamLookLineHoverEps);
            if (newFloat != CamLookLineHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookLineHoverEps(newFloat);
            }

            content.text = "Cam look thick eps";
            content.tooltip = "Controls the precision used when hovering the THICK border of the circle that rotates around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, CamLookThickHoverEps);
            if (newFloat != CamLookThickHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookThickHoverEps(newFloat);
            }

            content.text = "Can hover culled pixels";
            content.tooltip = "If this is checked, you will be able to hover the culled areas/pixels (i.e. the pixels hiden behind the rotation sphere) of the axes sliders.";
            newBool = EditorGUILayout.ToggleLeft(content, CanHoverCulledPixels);
            if (newBool != CanHoverCulledPixels)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCanHoverCulledPixels(newBool);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Snapping");
            content.text = "Snap mode";
            content.tooltip = "The rotation snap mode. Relative rotation counts from the current rotation angle. Absolute rotation counts from 0.";
            newSnapMode = (GizmoSnapMode)EditorGUILayout.EnumPopup(content, SnapMode);
            if(newSnapMode != SnapMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSnapMode(newSnapMode);
            }

            content.text = "X";
            content.tooltip = "Snap step value used when rotating around the X axis.";
            newFloat = EditorGUILayout.FloatField(content, XSnapStep);
            if (newFloat != XSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisSnapStep(0, newFloat);
            }

            content.text = "Y";
            content.tooltip = "Snap step value used when rotating around the Y axis.";
            newFloat = EditorGUILayout.FloatField(content, YSnapStep);
            if (newFloat != YSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisSnapStep(1, newFloat);
            }

            content.text = "Z";
            content.tooltip = "Snap step value used when rotating around the Z axis.";
            newFloat = EditorGUILayout.FloatField(content, ZSnapStep);
            if (newFloat != ZSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisSnapStep(2, newFloat);
            }

            content.text = "Camera right";
            content.tooltip = "Snap step value used when rotating around the camera right axis.";
            newFloat = EditorGUILayout.FloatField(content, CamRightSnapStep);
            if (newFloat != CamRightSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamRightSnapStep(newFloat);
            }

            content.text = "Camera up";
            content.tooltip = "Snap step value used when rotating around the camera up axis.";
            newFloat = EditorGUILayout.FloatField(content, CamUpSnapStep);
            if (newFloat != CamUpSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamUpSnapStep(newFloat);
            }

            content.text = "Camera look";
            content.tooltip = "Snap step value used when rotating around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, CamLookSnapStep);
            if (newFloat != CamLookSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetCamLookSnapStep(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Drag sensitivity");
            content.text = "Sensitivity";
            content.tooltip = "This value allows you to scale the slider drag speed.";
            newFloat = EditorGUILayout.FloatField(content, DragSensitivity);
            if (newFloat != DragSensitivity)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDragSensitivity(newFloat);
            }
        }
        #endif
    }
}
