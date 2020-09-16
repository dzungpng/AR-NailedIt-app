using System;
using System.Collections.Generic;
using UnityEngine;

namespace RTG
{
    [Serializable]
    public class ScaleGizmo : GizmoBehaviour
    {
        private GizmoLineSlider3D _pstvXSlider;
        private GizmoLineSlider3D _pstvYSlider;
        private GizmoLineSlider3D _pstvZSlider;
        private GizmoLineSlider3D _negXSlider;
        private GizmoLineSlider3D _negYSlider;
        private GizmoLineSlider3D _negZSlider;
        private GizmoLineSlider3DCollection _axesSliders = new GizmoLineSlider3DCollection();

        private GizmoMultiAxisScaleMode _multiAxisScaleMode = GizmoMultiAxisScaleMode.DoubleAxis;
        private GizmoPlaneSlider3D _xySlider;
        private GizmoPlaneSlider3D _yzSlider;
        private GizmoPlaneSlider3D _zxSlider;
        private GizmoPlaneSlider3DCollection _dblSliders = new GizmoPlaneSlider3DCollection();

        private GizmoCap3D _midCap;
        private GizmoUniformScaleDrag3D _unformScaleDrag = new GizmoUniformScaleDrag3D();

        private GizmoScaleGuide _scaleGuide = new GizmoScaleGuide();
        private IEnumerable<GameObject> _scaleGuideTargetObjects;

        [SerializeField]
        private ScaleGizmoLookAndFeel3D _lookAndFeel3D = new ScaleGizmoLookAndFeel3D();
        [SerializeField]
        private ScaleGizmoSettings3D _settings3D = new ScaleGizmoSettings3D();
        [SerializeField]
        private ScaleGizmoHotkeys _hotkeys = new ScaleGizmoHotkeys();

        [SerializeField]
        private bool _useSnapEnableHotkey = true;
        [SerializeField]
        private bool _useMultiAxisScaleModeHotkey = true;

        private ScaleGizmoLookAndFeel3D _sharedLookAndFeel3D = null;
        private ScaleGizmoSettings3D _sharedSettings3D = null;
        private ScaleGizmoHotkeys _sharedHotkeys = null;

        public GizmoMultiAxisScaleMode MultiAxisScaleMode { get { return _multiAxisScaleMode; } }
        public ScaleGizmoLookAndFeel3D LookAndFeel3D { get { return _sharedLookAndFeel3D == null ? _lookAndFeel3D : _sharedLookAndFeel3D; } }
        public ScaleGizmoSettings3D Settings3D { get { return _sharedSettings3D == null ? _settings3D : _sharedSettings3D; } }
        public ScaleGizmoHotkeys Hotkeys { get { return _sharedHotkeys == null ? _hotkeys : _sharedHotkeys; } }
        public ScaleGizmoHotkeys SharedHotkeys { get { return _sharedHotkeys; } set { if (Application.isPlaying) _sharedHotkeys = value; } }
        public ScaleGizmoSettings3D SharedSettings3D
        {
            get { return _sharedSettings3D; }
            set
            {
                _sharedSettings3D = value;
                SetupSharedSettings();
            }
        }
        public ScaleGizmoLookAndFeel3D SharedLookAndFeel3D
        {
            get { return _sharedLookAndFeel3D; }
            set
            {
                _sharedLookAndFeel3D = value;
                SetupSharedLookAndFeel();
            }
        }
        public bool UseSnapEnableHotkey { get { return _useSnapEnableHotkey; } set { _useSnapEnableHotkey = value; } }
        public bool UseMultiAxisScaleModeHotkey { get { return _useMultiAxisScaleModeHotkey; } set { _useMultiAxisScaleModeHotkey = value; } }

        public float GetZoomFactor(Vector3 position)
        {
            if (!LookAndFeel3D.UseZoomFactor) return 1.0f;
            return Gizmo.GetWorkCamera().EstimateZoomFactor(position);
        }

        public float GetZoomFactor(Vector3 position, Camera camera)
        {
            if (!LookAndFeel3D.UseZoomFactor) return 1.0f;
            return camera.EstimateZoomFactor(position);
        }

        public bool OwnsHandle(int handleId)
        {
            return _axesSliders.Contains(handleId) || _axesSliders.ContainsCapId(handleId) ||
                   _dblSliders.Contains(handleId) || _midCap.HandleId == handleId;
        }

        public void SetAxesLinesHoverable(bool hoverable)
        {
            _pstvXSlider.SetHoverable(hoverable);
            _negXSlider.SetHoverable(hoverable);
            _pstvYSlider.SetHoverable(hoverable);
            _negYSlider.SetHoverable(hoverable);
            _pstvZSlider.SetHoverable(hoverable);
            _negZSlider.SetHoverable(hoverable);
        }

        public void SetSnapEnabled(bool isEnabled)
        {
            _unformScaleDrag.IsSnapEnabled = isEnabled;
            _axesSliders.SetSnapEnabled(isEnabled);
            _dblSliders.SetSnapEnabled(isEnabled);
        }

        public void SetMultiAxisScaleMode(GizmoMultiAxisScaleMode scaleMode)
        {
            if (Gizmo.IsDragged || scaleMode == _multiAxisScaleMode) return;

            _multiAxisScaleMode = scaleMode;
            if (_multiAxisScaleMode == GizmoMultiAxisScaleMode.DoubleAxis)
            {
                _dblSliders.SetVisible(true, true);
                _midCap.SetVisible(false);
            }
            else
                if (_multiAxisScaleMode == GizmoMultiAxisScaleMode.Uniform)
                {
                    _dblSliders.SetVisible(false, true);
                    _midCap.SetVisible(true);
                }
        }

        public void SetScaleGuideTargetObjects(IEnumerable<GameObject> targetObjects)
        {
            _scaleGuideTargetObjects = targetObjects;
        }

        public override void OnGizmoEnabled()
        {
            OnGizmoUpdateBegin();
        }

        public override void OnAttached()
        {
            _midCap = new GizmoCap3D(Gizmo, GizmoHandleId.MidScaleCap);
            _midCap.DragSession = _unformScaleDrag;

            _pstvXSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PXSlider, GizmoHandleId.PXCap);
            _pstvXSlider.SetDragChannel(GizmoDragChannel.Scale);
            _pstvXSlider.MapDirection(0, AxisSign.Positive);
            _pstvXSlider.ScaleDragAxisIndex = 0;

            _negXSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NXSlider, GizmoHandleId.NXCap);
            _negXSlider.SetDragChannel(GizmoDragChannel.Scale);
            _negXSlider.MapDirection(0, AxisSign.Negative);
            _negXSlider.ScaleDragAxisIndex = 0;

            _pstvYSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PYSlider, GizmoHandleId.PYCap);
            _pstvYSlider.SetDragChannel(GizmoDragChannel.Scale);
            _pstvYSlider.MapDirection(1, AxisSign.Positive);
            _pstvYSlider.ScaleDragAxisIndex = 1;

            _negYSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NYSlider, GizmoHandleId.NYCap);
            _negYSlider.SetDragChannel(GizmoDragChannel.Scale);
            _negYSlider.MapDirection(1, AxisSign.Negative);
            _negYSlider.ScaleDragAxisIndex = 1;

            _pstvZSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PZSlider, GizmoHandleId.PZCap);
            _pstvZSlider.SetDragChannel(GizmoDragChannel.Scale);
            _pstvZSlider.MapDirection(2, AxisSign.Positive);
            _pstvZSlider.ScaleDragAxisIndex = 2;

            _negZSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NZSlider, GizmoHandleId.NZCap);
            _negZSlider.SetDragChannel(GizmoDragChannel.Scale);
            _negZSlider.MapDirection(2, AxisSign.Negative);
            _negZSlider.ScaleDragAxisIndex = 2;

            _axesSliders.Add(_pstvXSlider);
            _axesSliders.Add(_pstvYSlider);
            _axesSliders.Add(_pstvZSlider);
            _axesSliders.Add(_negXSlider);
            _axesSliders.Add(_negYSlider);
            _axesSliders.Add(_negZSlider);
            _axesSliders.Make3DHoverPriorityLowerThan(_midCap.HoverPriority3D);
            _axesSliders.RegisterScalerHandle(_midCap.HandleId, new int[] { 0, 1, 2 });

            _xySlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.XYDblSlider);
            _xySlider.SetDragChannel(GizmoDragChannel.Scale);
            _xySlider.ScaleDragAxisIndexRight = 0;
            _xySlider.ScaleDragAxisIndexUp = 1;

            _yzSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.YZDblSlider);
            _yzSlider.SetDragChannel(GizmoDragChannel.Scale);
            _yzSlider.ScaleDragAxisIndexRight = 1;
            _yzSlider.ScaleDragAxisIndexUp = 2;

            _zxSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.ZXDblSlider);
            _zxSlider.SetDragChannel(GizmoDragChannel.Scale);
            _zxSlider.ScaleDragAxisIndexRight = 2;
            _zxSlider.ScaleDragAxisIndexUp = 0;

            _dblSliders.Add(_xySlider);
            _dblSliders.Add(_yzSlider);
            _dblSliders.Add(_zxSlider);

            _axesSliders.RegisterScalerHandle(_xySlider.HandleId, new int[] { _xySlider.ScaleDragAxisIndexRight, _xySlider.ScaleDragAxisIndexUp });
            _axesSliders.RegisterScalerHandle(_yzSlider.HandleId, new int[] { _yzSlider.ScaleDragAxisIndexRight, _yzSlider.ScaleDragAxisIndexUp });
            _axesSliders.RegisterScalerHandle(_zxSlider.HandleId, new int[] { _zxSlider.ScaleDragAxisIndexRight, _zxSlider.ScaleDragAxisIndexUp });

            SetMultiAxisScaleMode(GizmoMultiAxisScaleMode.Uniform);
            SetupSharedLookAndFeel();
            SetupSharedSettings();
        }

        public override void OnGizmoUpdateBegin()
        {
            _unformScaleDrag.Sensitivity = Settings3D.DragSensitivity;

            if (UseSnapEnableHotkey)
                SetSnapEnabled(Hotkeys.EnableSnapping.IsActive());

            if (UseMultiAxisScaleModeHotkey)
            {
                if (Hotkeys.ChangeMultiAxisMode.IsActive()) SetMultiAxisScaleMode(GizmoMultiAxisScaleMode.DoubleAxis);
                else SetMultiAxisScaleMode(GizmoMultiAxisScaleMode.Uniform);
            }

            _pstvXSlider.SetVisible(LookAndFeel3D.IsPositiveSliderVisible(0));
            _pstvXSlider.Set3DCapVisible(LookAndFeel3D.IsPositiveSliderCapVisible(0));
            _pstvYSlider.SetVisible(LookAndFeel3D.IsPositiveSliderVisible(1));
            _pstvYSlider.Set3DCapVisible(LookAndFeel3D.IsPositiveSliderCapVisible(1));
            _pstvZSlider.SetVisible(LookAndFeel3D.IsPositiveSliderVisible(2));
            _pstvZSlider.Set3DCapVisible(LookAndFeel3D.IsPositiveSliderCapVisible(2));

            _negXSlider.SetVisible(LookAndFeel3D.IsNegativeSliderVisible(0));
            _negXSlider.Set3DCapVisible(LookAndFeel3D.IsNegativeSliderCapVisible(0));
            _negYSlider.SetVisible(LookAndFeel3D.IsNegativeSliderVisible(1));
            _negYSlider.Set3DCapVisible(LookAndFeel3D.IsNegativeSliderCapVisible(1));
            _negZSlider.SetVisible(LookAndFeel3D.IsNegativeSliderVisible(2));
            _negZSlider.Set3DCapVisible(LookAndFeel3D.IsNegativeSliderCapVisible(2));

            if (_multiAxisScaleMode == GizmoMultiAxisScaleMode.DoubleAxis)
            {
                _xySlider.SetVisible(LookAndFeel3D.IsDblSliderVisible(PlaneId.XY));
                _xySlider.SetBorderVisible(_xySlider.IsVisible);
                _yzSlider.SetVisible(LookAndFeel3D.IsDblSliderVisible(PlaneId.YZ));
                _yzSlider.SetBorderVisible(_yzSlider.IsVisible);
                _zxSlider.SetVisible(LookAndFeel3D.IsDblSliderVisible(PlaneId.ZX));
                _zxSlider.SetBorderVisible(_zxSlider.IsVisible);
                PlaceDblSlidersInSliderPlanes(Gizmo.FocusCamera);
            }
        }

        public override void OnGizmoRender(Camera camera)
        {
            bool multipleRenderCams = RTGizmosEngine.Get.NumRenderCameras > 1;
            if (multipleRenderCams)
            {
                _midCap.ApplyZoomFactor(camera);
                _axesSliders.ApplyZoomFactor(camera);
                _dblSliders.ApplyZoomFactor(camera);
                if (_multiAxisScaleMode == GizmoMultiAxisScaleMode.DoubleAxis) PlaceDblSlidersInSliderPlanes(camera);
            }

            var sortedSliders = _axesSliders.GetRenderSortedSliders(camera);
            foreach (var slider in sortedSliders) slider.Render(camera);

            _xySlider.Render(camera);
            _yzSlider.Render(camera);
            _zxSlider.Render(camera);
            _midCap.Render(camera);

            if (LookAndFeel3D.IsScaleGuideVisible && Gizmo.IsDragged && OwnsHandle(Gizmo.DragHandleId))
                _scaleGuide.Render(GameObjectEx.FilterParentsOnly(_scaleGuideTargetObjects), camera);
        }

        public override void OnGizmoAttemptHandleDragBegin(int handleId)
        {
            if (handleId == _midCap.HandleId)
            {
                var workData = new GizmoUniformScaleDrag3D.WorkData();
                workData.DragOrigin = _midCap.Position;
                workData.CameraRight = Gizmo.FocusCamera.transform.right;
                workData.CameraUp = Gizmo.FocusCamera.transform.up;
                workData.SnapStep = Settings3D.UniformSnapStep;
                _unformScaleDrag.SetWorkData(workData);
            }
        }

        private void PlaceDblSlidersInSliderPlanes(Camera camera)
        {
            if (_xySlider.IsVisible) _xySlider.MakeSliderPlane(Gizmo.Transform, PlaneId.XY, _pstvXSlider, _pstvYSlider, camera);
            if (_yzSlider.IsVisible) _yzSlider.MakeSliderPlane(Gizmo.Transform, PlaneId.YZ, _pstvYSlider, _pstvZSlider, camera);
            if (_zxSlider.IsVisible) _zxSlider.MakeSliderPlane(Gizmo.Transform, PlaneId.ZX, _pstvZSlider, _pstvXSlider, camera);
        }

        private void SetupSharedLookAndFeel()
        {
            LookAndFeel3D.ConnectSliderLookAndFeel(_pstvXSlider, 0, AxisSign.Positive);
            LookAndFeel3D.ConnectSliderLookAndFeel(_pstvYSlider, 1, AxisSign.Positive);
            LookAndFeel3D.ConnectSliderLookAndFeel(_pstvZSlider, 2, AxisSign.Positive);
            LookAndFeel3D.ConnectSliderLookAndFeel(_negXSlider, 0, AxisSign.Negative);
            LookAndFeel3D.ConnectSliderLookAndFeel(_negYSlider, 1, AxisSign.Negative);
            LookAndFeel3D.ConnectSliderLookAndFeel(_negZSlider, 2, AxisSign.Negative);

            LookAndFeel3D.ConnectMidCapLookAndFeel(_midCap);
            LookAndFeel3D.ConnectGizmoScaleGuideLookAndFeel(_scaleGuide);

            LookAndFeel3D.ConnectDblSliderLookAndFeel(_xySlider, PlaneId.XY);
            LookAndFeel3D.ConnectDblSliderLookAndFeel(_yzSlider, PlaneId.YZ);
            LookAndFeel3D.ConnectDblSliderLookAndFeel(_zxSlider, PlaneId.ZX);
        }

        private void SetupSharedSettings()
        {
            Settings3D.ConnectSliderSettings(_pstvXSlider, 0, AxisSign.Positive);
            Settings3D.ConnectSliderSettings(_pstvYSlider, 1, AxisSign.Positive);
            Settings3D.ConnectSliderSettings(_pstvZSlider, 2, AxisSign.Positive);
            Settings3D.ConnectSliderSettings(_negXSlider, 0, AxisSign.Negative);
            Settings3D.ConnectSliderSettings(_negYSlider, 1, AxisSign.Negative);
            Settings3D.ConnectSliderSettings(_negZSlider, 2, AxisSign.Negative);

            Settings3D.ConnectDblSliderSettings(_xySlider, PlaneId.XY);
            Settings3D.ConnectDblSliderSettings(_yzSlider, PlaneId.YZ);
            Settings3D.ConnectDblSliderSettings(_zxSlider, PlaneId.ZX);
        }
    }
}

