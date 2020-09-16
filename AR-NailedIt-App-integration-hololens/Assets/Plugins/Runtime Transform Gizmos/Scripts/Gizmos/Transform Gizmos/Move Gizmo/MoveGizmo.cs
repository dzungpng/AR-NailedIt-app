using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class MoveGizmo : GizmoBehaviour
    {
        public enum VertexSnapState
        {
            SelectingPivot = 0,
            Snapping,
            Inactive
        }

        private GizmoLineSlider3D _pXSlider;
        private GizmoLineSlider3D _pYSlider;
        private GizmoLineSlider3D _pZSlider;
        private GizmoLineSlider3D _nXSlider;
        private GizmoLineSlider3D _nYSlider;
        private GizmoLineSlider3D _nZSlider;
        private GizmoLineSlider3DCollection _axesSliders = new GizmoLineSlider3DCollection();

        private GizmoPlaneSlider3D _xySlider;
        private GizmoPlaneSlider3D _yzSlider;
        private GizmoPlaneSlider3D _zxSlider;
        private GizmoPlaneSlider3DCollection _dblSliders = new GizmoPlaneSlider3DCollection();

        private GizmoCap3D _midCap;

        private bool _isVertexSnapEnabled;
        private GizmoCap2D _vertSnapCap;
        private GizmoObjectVertexSnapDrag3D _vertexSnapDrag = new GizmoObjectVertexSnapDrag3D();
        private Vector3 _postVSnapPosRestore;

        private bool _is2DModeEnabled;
        private GizmoLineSlider2D _p2DModeXSlider;
        private GizmoLineSlider2D _p2DModeYSlider;
        private GizmoLineSlider2D _n2DModeXSlider;
        private GizmoLineSlider2D _n2DModeYSlider;
        private GizmoLineSlider2DCollection _2DModeSliders = new GizmoLineSlider2DCollection();
        private GizmoPlaneSlider2D _2DModeDblSlider;

        [SerializeField]
        private bool _useSnapEnableHotkey = true;
        [SerializeField]
        private bool _useVertSnapEnableHotkey = true;
        [SerializeField]
        private bool _use2DModeEnableHotkey = true;

        [SerializeField]
        private MoveGizmoHotkeys _hotkeys = new MoveGizmoHotkeys();
        [SerializeField]
        private MoveGizmoSettings2D _settings2D = new MoveGizmoSettings2D();
        [SerializeField]
        private MoveGizmoSettings3D _settings3D = new MoveGizmoSettings3D();
        [SerializeField]
        private MoveGizmoLookAndFeel2D _lookAndFeel2D = new MoveGizmoLookAndFeel2D();
        [SerializeField]
        private MoveGizmoLookAndFeel3D _lookAndFeel3D = new MoveGizmoLookAndFeel3D();

        private MoveGizmoHotkeys _sharedHotkeys = null;
        private MoveGizmoSettings2D _sharedSettings2D = null;
        private MoveGizmoSettings3D _sharedSettings3D = null;
        private MoveGizmoLookAndFeel2D _sharedLookAndFeel2D = null;
        private MoveGizmoLookAndFeel3D _sharedLookAndFeel3D = null;

        public MoveGizmoSettings2D Settings2D { get { return _sharedSettings2D == null ? _settings2D : _sharedSettings2D; } }
        public MoveGizmoSettings3D Settings3D { get { return _sharedSettings3D == null ? _settings3D : _sharedSettings3D; } }
        public MoveGizmoLookAndFeel2D LookAndFeel2D { get { return _sharedLookAndFeel2D == null ? _lookAndFeel2D : _sharedLookAndFeel2D; } }
        public MoveGizmoLookAndFeel3D LookAndFeel3D { get { return _sharedLookAndFeel3D == null ? _lookAndFeel3D : _sharedLookAndFeel3D; } }
        public MoveGizmoHotkeys Hotkeys { get { return _sharedHotkeys == null ? _hotkeys : _sharedHotkeys; } }
        public MoveGizmoSettings2D SharedSettings2D
        {
            get { return _sharedSettings2D; }
            set
            {
                _sharedSettings2D = value;
                SetupSharedSettings();
            }
        }
        public MoveGizmoSettings3D SharedSettings3D
        {
            get { return _sharedSettings3D; }
            set
            {
                _sharedSettings3D = value;
                SetupSharedSettings();
            }
        }
        public MoveGizmoLookAndFeel2D SharedLookAndFeel2D
        {
            get { return _sharedLookAndFeel2D; }
            set
            {
                _sharedLookAndFeel2D = value;
                SetupSharedLookAndFeel();
            }
        }
        public MoveGizmoLookAndFeel3D SharedLookAndFeel3D
        {
            get { return _sharedLookAndFeel3D; }
            set
            {
                _sharedLookAndFeel3D = value;
                SetupSharedLookAndFeel();
            }
        }
        public MoveGizmoHotkeys SharedHotkeys { get { return _sharedHotkeys; } set { _sharedHotkeys = value; } }
        public bool UseSnapEnableHotkey { get { return _useSnapEnableHotkey; } set { _useSnapEnableHotkey = value; } }
        public bool UseVertSnapEnableHotkey { get { return _useVertSnapEnableHotkey; } set { _useVertSnapEnableHotkey = value; } }
        public bool Use2DModeEnableHotkey { get { return _use2DModeEnableHotkey; } set { _use2DModeEnableHotkey = value; } }

        public VertexSnapState GetVertexSnapState()
        {
            if (!_isVertexSnapEnabled) return VertexSnapState.Inactive;
            if (_vertexSnapDrag.IsActive) return VertexSnapState.Snapping;
            return VertexSnapState.SelectingPivot;
        }

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
                   _midCap.HandleId == handleId || _dblSliders.Contains(handleId) ||
                   _2DModeSliders.Contains(handleId) || _2DModeSliders.ContainsCapId(handleId) ||
                   _2DModeDblSlider.HandleId == handleId;
        }

        public void SetAxesLinesHoverable(bool hoverable)
        {
            _pXSlider.SetHoverable(hoverable);
            _nXSlider.SetHoverable(hoverable);
            _pYSlider.SetHoverable(hoverable);
            _nYSlider.SetHoverable(hoverable);
            _pZSlider.SetHoverable(hoverable);
            _nZSlider.SetHoverable(hoverable);
        }

        public void SetSnapEnabled(bool isEnabled)
        {
            _axesSliders.SetSnapEnabled(isEnabled);
            _2DModeSliders.SetSnapEnabled(isEnabled);
            _dblSliders.SetSnapEnabled(isEnabled);
            _2DModeDblSlider.SetSnapEnabled(isEnabled);
        }

        public void SetVertexSnapEnabled(bool isEnabled)
        {
            if (_isVertexSnapEnabled == isEnabled ||
                _is2DModeEnabled || !_isEnabled ||
                Gizmo.IsDragged) return;

            if (isEnabled)
            {
                _vertSnapCap.SetVisible(true);
                _midCap.SetVisible(false);
                _dblSliders.SetVisible(false, true);
            }
            else _vertSnapCap.SetVisible(false);

            _isVertexSnapEnabled = isEnabled;
        }

        public void Set2DModeEnabled(bool isEnabled)
        {
            if (_is2DModeEnabled == isEnabled ||
                _isVertexSnapEnabled || !_isEnabled ||
                Gizmo.IsDragged) return;

            if (isEnabled)
            {
                _midCap.SetVisible(false);
                _2DModeSliders.SetVisible(true);
                _2DModeSliders.Set2DCapsVisible(true);

                _2DModeDblSlider.SetVisible(true);
                _2DModeDblSlider.SetBorderVisible(true);

                _dblSliders.SetVisible(false, true);
                _axesSliders.SetVisible(false);
                _axesSliders.Set3DCapsVisible(false);

                _2DModeSliders.SetOffsetDragOrigin(Gizmo.Transform.Position3D);
                _2DModeDblSlider.OffsetDragOrigin = Gizmo.Transform.Position3D;

                Update2DGizmoPosition();
                Update2DModeHandlePositions();
            }
            else Hide2DModeHandles();

            _is2DModeEnabled = isEnabled;
        }

        public void SetVertexSnapTargetObjects(IEnumerable<GameObject> targetObjects)
        {
            _vertexSnapDrag.SetTargetObjects(targetObjects);
        }

        public override void OnAttached()
        {
            _midCap = new GizmoCap3D(Gizmo, GizmoHandleId.MidDisplayCap);
            _midCap.SetHoverable(false);

            _xySlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.XYDblSlider);
            _yzSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.YZDblSlider);
            _zxSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.ZXDblSlider);

            _dblSliders.Add(_xySlider);
            _dblSliders.Add(_yzSlider);
            _dblSliders.Add(_zxSlider);

            _pXSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PXSlider, GizmoHandleId.PXCap);
            _pXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _pXSlider.MapDirection(0, AxisSign.Positive);

            _nXSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NXSlider, GizmoHandleId.NXCap);
            _nXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _nXSlider.MapDirection(0, AxisSign.Negative);

            _pYSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PYSlider, GizmoHandleId.PYCap);
            _pYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _pYSlider.MapDirection(1, AxisSign.Positive);

            _nYSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NYSlider, GizmoHandleId.NYCap);
            _nYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _nYSlider.MapDirection(1, AxisSign.Negative);

            _pZSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PZSlider, GizmoHandleId.PZCap);
            _pZSlider.SetDragChannel(GizmoDragChannel.Offset);
            _pZSlider.MapDirection(2, AxisSign.Positive);

            _nZSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NZSlider, GizmoHandleId.NZCap);
            _nZSlider.SetDragChannel(GizmoDragChannel.Offset);
            _nZSlider.MapDirection(2, AxisSign.Negative);

            _axesSliders.Add(_pXSlider);
            _axesSliders.Add(_pYSlider);
            _axesSliders.Add(_pZSlider);
            _axesSliders.Add(_nXSlider);
            _axesSliders.Add(_nYSlider);
            _axesSliders.Add(_nZSlider);
            _axesSliders.Make3DHoverPriorityLowerThan(_xySlider.HoverPriority3D);
            _axesSliders.Make3DHoverPriorityLowerThan(_yzSlider.HoverPriority3D);
            _axesSliders.Make3DHoverPriorityLowerThan(_zxSlider.HoverPriority3D);

            _vertSnapCap = new GizmoCap2D(Gizmo, GizmoHandleId.VertSnap);
            _vertSnapCap.SetVisible(false);
            _vertSnapCap.DragSession = _vertexSnapDrag;
            _vertexSnapDrag.AddTargetTransform(Gizmo.Transform);

            _2DModeDblSlider = new GizmoPlaneSlider2D(Gizmo, GizmoHandleId.CamXYSlider);
            _2DModeDblSlider.SetDragChannel(GizmoDragChannel.Offset);
            _2DModeDblSlider.SetVisible(false);

            _p2DModeXSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.PCamXSlider, GizmoHandleId.PCamXCap);
            _p2DModeXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _p2DModeXSlider.MapDirection(0, AxisSign.Positive);
            _p2DModeXSlider.HoverPriority2D.MakeLowerThan(_2DModeDblSlider.HoverPriority2D);

            _p2DModeYSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.PCamYSlider, GizmoHandleId.PCamYCap);
            _p2DModeYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _p2DModeYSlider.MapDirection(1, AxisSign.Positive);
            _p2DModeYSlider.HoverPriority2D.MakeLowerThan(_2DModeDblSlider.HoverPriority2D);

            _n2DModeXSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.NCamXSlider, GizmoHandleId.NCamXCap);
            _n2DModeXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _n2DModeXSlider.MapDirection(0, AxisSign.Negative);
            _n2DModeXSlider.HoverPriority2D.MakeLowerThan(_2DModeDblSlider.HoverPriority2D);

            _n2DModeYSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.NCamYSlider, GizmoHandleId.NCamYCap);
            _n2DModeYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _n2DModeYSlider.MapDirection(1, AxisSign.Negative);
            _n2DModeYSlider.HoverPriority2D.MakeLowerThan(_2DModeDblSlider.HoverPriority2D);

            _2DModeSliders.Add(_p2DModeXSlider);
            _2DModeSliders.Add(_p2DModeYSlider);
            _2DModeSliders.Add(_n2DModeXSlider);
            _2DModeSliders.Add(_n2DModeYSlider);
            Hide2DModeHandles();

            SetupSharedLookAndFeel();
            SetupSharedSettings();
        }

        public override void OnDetached()
        {
            Gizmo.Transform.Changed -= OnGizmoTransformChanged;
        }

        public override void OnEnabled()
        {
            Gizmo.Transform.Changed += OnGizmoTransformChanged;
        }

        public override void OnDisabled()
        {
            Gizmo.Transform.Changed -= OnGizmoTransformChanged;
        }

        public override void OnGizmoEnabled()
        {
            OnGizmoUpdateBegin();
        }

        public override void OnGizmoUpdateBegin()
        {
            Update2DGizmoPosition();
            if (!_is2DModeEnabled && !_isVertexSnapEnabled) _midCap.SetVisible(LookAndFeel3D.IsMidCapVisible);

            if (UseSnapEnableHotkey)
                SetSnapEnabled(Hotkeys.EnableSnapping.IsActive());
            if (Use2DModeEnableHotkey)
                Set2DModeEnabled(Hotkeys.Enable2DMode.IsActive());

            if (!_is2DModeEnabled)
            {
                bool vSnapWasEnabled = _isVertexSnapEnabled;
                if (!vSnapWasEnabled) _postVSnapPosRestore = Gizmo.Transform.Position3D;
                if (UseVertSnapEnableHotkey)
                    SetVertexSnapEnabled(Hotkeys.EnableVertexSnapping.IsActive());
                if (vSnapWasEnabled && !_isVertexSnapEnabled) Gizmo.Transform.Position3D = _postVSnapPosRestore;

                _pXSlider.SetVisible(LookAndFeel3D.IsPositiveSliderVisible(0));
                _pXSlider.Set3DCapVisible(LookAndFeel3D.IsPositiveSliderCapVisible(0));
                _pYSlider.SetVisible(LookAndFeel3D.IsPositiveSliderVisible(1));
                _pYSlider.Set3DCapVisible(LookAndFeel3D.IsPositiveSliderCapVisible(1));
                _pZSlider.SetVisible(LookAndFeel3D.IsPositiveSliderVisible(2));
                _pZSlider.Set3DCapVisible(LookAndFeel3D.IsPositiveSliderCapVisible(2));

                _nXSlider.SetVisible(LookAndFeel3D.IsNegativeSliderVisible(0));
                _nXSlider.Set3DCapVisible(LookAndFeel3D.IsNegativeSliderCapVisible(0));
                _nYSlider.SetVisible(LookAndFeel3D.IsNegativeSliderVisible(1));
                _nYSlider.Set3DCapVisible(LookAndFeel3D.IsNegativeSliderCapVisible(1));
                _nZSlider.SetVisible(LookAndFeel3D.IsNegativeSliderVisible(2));
                _nZSlider.Set3DCapVisible(LookAndFeel3D.IsNegativeSliderCapVisible(2));
            }

            if (!_isVertexSnapEnabled && !_is2DModeEnabled)
            {
                _xySlider.SetVisible(LookAndFeel3D.IsDblSliderVisible(PlaneId.XY));
                _xySlider.SetBorderVisible(_xySlider.IsVisible);
                _yzSlider.SetVisible(LookAndFeel3D.IsDblSliderVisible(PlaneId.YZ));
                _yzSlider.SetBorderVisible(_yzSlider.IsVisible);
                _zxSlider.SetVisible(LookAndFeel3D.IsDblSliderVisible(PlaneId.ZX));
                _zxSlider.SetBorderVisible(_zxSlider.IsVisible);

                PlaceDblSlidersInSliderPlanes(Gizmo.FocusCamera);
            }
            else
                if (_isVertexSnapEnabled)
                {
                    if (GetVertexSnapState() == VertexSnapState.SelectingPivot && _vertexSnapDrag.SelectSnapPivotPoint(Gizmo))
                        Gizmo.Transform.Position3D = _vertexSnapDrag.SnapPivot;
                }
                else
                    if (_is2DModeEnabled)
                    {
                        _p2DModeXSlider.SetVisible(LookAndFeel2D.IsPositiveSliderVisible(0));
                        _p2DModeXSlider.Set2DCapVisible(LookAndFeel2D.IsPositiveSliderCapVisible(0));
                        _p2DModeYSlider.SetVisible(LookAndFeel2D.IsPositiveSliderVisible(1));
                        _p2DModeYSlider.Set2DCapVisible(LookAndFeel2D.IsPositiveSliderCapVisible(1));
                        _n2DModeXSlider.SetVisible(LookAndFeel2D.IsNegativeSliderVisible(0));
                        _n2DModeXSlider.Set2DCapVisible(LookAndFeel2D.IsNegativeSliderCapVisible(0));
                        _n2DModeYSlider.SetVisible(LookAndFeel2D.IsNegativeSliderVisible(1));
                        _n2DModeYSlider.Set2DCapVisible(LookAndFeel2D.IsNegativeSliderCapVisible(1));

                        bool wasVisible = _2DModeDblSlider.IsVisible;
                        _2DModeDblSlider.SetVisible(LookAndFeel2D.IsDblSliderVisible);
                        _2DModeDblSlider.SetBorderVisible(LookAndFeel2D.IsDblSliderVisible);
                        if (!wasVisible && _2DModeDblSlider.IsVisible) Update2DModeHandlePositions();
                    }
        }

        public override void OnGizmoRender(Camera camera)
        {
            bool multipleRenderCams = RTGizmosEngine.Get.NumRenderCameras > 1;
            if (multipleRenderCams)
            {
                _axesSliders.ApplyZoomFactor(camera);
                if (_midCap.IsVisible) _midCap.ApplyZoomFactor(camera);
                if (!_isVertexSnapEnabled && !_is2DModeEnabled)
                {
                    _dblSliders.ApplyZoomFactor(camera);
                    PlaceDblSlidersInSliderPlanes(camera);
                }

                Update2DGizmoPosition();
                if (_is2DModeEnabled) Update2DModeHandlePositions();
            }

            var sortedSliders = _axesSliders.GetRenderSortedSliders(camera);
            foreach (var slider in sortedSliders) slider.Render(camera);

            _midCap.Render(camera);
            _xySlider.Render(camera);
            _yzSlider.Render(camera);
            _zxSlider.Render(camera);

            _vertSnapCap.Render(camera);
            _2DModeSliders.Render(camera);
            _2DModeDblSlider.Render(camera);
        }

        public override void OnGizmoDragUpdate(int handleId)
        {
            if (_isVertexSnapEnabled) _postVSnapPosRestore += Gizmo.RelativeDragOffset;
        }

        private void PlaceDblSlidersInSliderPlanes(Camera camera)
        {
            if (_xySlider.IsVisible) _xySlider.MakeSliderPlane(Gizmo.Transform, PlaneId.XY, _pXSlider, _pYSlider, camera);
            if (_yzSlider.IsVisible) _yzSlider.MakeSliderPlane(Gizmo.Transform, PlaneId.YZ, _pYSlider, _pZSlider, camera);
            if (_zxSlider.IsVisible) _zxSlider.MakeSliderPlane(Gizmo.Transform, PlaneId.ZX, _pZSlider, _pXSlider, camera);
        }

        private void SetupSharedLookAndFeel()
        {
            LookAndFeel3D.ConnectSliderLookAndFeel(_pXSlider, 0, AxisSign.Positive);
            LookAndFeel3D.ConnectSliderLookAndFeel(_pYSlider, 1, AxisSign.Positive);
            LookAndFeel3D.ConnectSliderLookAndFeel(_pZSlider, 2, AxisSign.Positive);
            LookAndFeel3D.ConnectSliderLookAndFeel(_nXSlider, 0, AxisSign.Negative);
            LookAndFeel3D.ConnectSliderLookAndFeel(_nYSlider, 1, AxisSign.Negative);
            LookAndFeel3D.ConnectSliderLookAndFeel(_nZSlider, 2, AxisSign.Negative);

            LookAndFeel3D.ConnectDblSliderLookAndFeel(_xySlider, PlaneId.XY);
            LookAndFeel3D.ConnectDblSliderLookAndFeel(_yzSlider, PlaneId.YZ);
            LookAndFeel3D.ConnectDblSliderLookAndFeel(_zxSlider, PlaneId.ZX);

            LookAndFeel3D.ConnectMidCapLookAndFeel(_midCap);
            LookAndFeel3D.ConnectVertSnapCapLookAndFeel(_vertSnapCap);

            LookAndFeel2D.ConnectSliderLookAndFeel(_p2DModeXSlider, 0, AxisSign.Positive);
            LookAndFeel2D.ConnectSliderLookAndFeel(_p2DModeYSlider, 1, AxisSign.Positive);
            LookAndFeel2D.ConnectSliderLookAndFeel(_n2DModeXSlider, 0, AxisSign.Negative);
            LookAndFeel2D.ConnectSliderLookAndFeel(_n2DModeYSlider, 1, AxisSign.Negative);
            LookAndFeel2D.ConnectDblSliderLookAndFeel(_2DModeDblSlider);
        }

        private void SetupSharedSettings()
        {
            Settings3D.ConnectSliderSettings(_pXSlider, 0, AxisSign.Positive);
            Settings3D.ConnectSliderSettings(_pYSlider, 1, AxisSign.Positive);
            Settings3D.ConnectSliderSettings(_pZSlider, 2, AxisSign.Positive);

            Settings3D.ConnectSliderSettings(_nXSlider, 0, AxisSign.Negative);
            Settings3D.ConnectSliderSettings(_nYSlider, 1, AxisSign.Negative);
            Settings3D.ConnectSliderSettings(_nZSlider, 2, AxisSign.Negative);

            Settings3D.ConnectDblSliderSettings(_xySlider, PlaneId.XY);
            Settings3D.ConnectDblSliderSettings(_yzSlider, PlaneId.YZ);
            Settings3D.ConnectDblSliderSettings(_zxSlider, PlaneId.ZX);

            Settings2D.ConnectSliderSettings(_p2DModeXSlider, 0, AxisSign.Positive);
            Settings2D.ConnectSliderSettings(_p2DModeYSlider, 1, AxisSign.Positive);
            Settings2D.ConnectSliderSettings(_n2DModeXSlider, 0, AxisSign.Negative);
            Settings2D.ConnectSliderSettings(_n2DModeYSlider, 1, AxisSign.Negative);
            Settings2D.ConnectDblSliderSettings(_2DModeDblSlider);

            _vertexSnapDrag.Settings = Settings3D.VertexSnapSettings;
        }

        private void Update2DGizmoPosition()
        {
            Gizmo.Transform.Position2D = Gizmo.GetWorkCamera().WorldToScreenPoint(Gizmo.Transform.Position3D);
        }

        private void Update2DModeHandlePositions()
        {
            if (LookAndFeel2D.IsDblSliderVisible)
            {
                _p2DModeXSlider.StartPosition = _2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Right);
                _p2DModeYSlider.StartPosition = _2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Top);
                _n2DModeXSlider.StartPosition = _2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Left);
                _n2DModeYSlider.StartPosition = _2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Bottom);
            }
            else
            {
                Vector2 gizmoPos2D = Gizmo.Transform.Position2D;
                _p2DModeXSlider.StartPosition = gizmoPos2D;
                _p2DModeYSlider.StartPosition = gizmoPos2D;
                _n2DModeXSlider.StartPosition = gizmoPos2D;
                _n2DModeYSlider.StartPosition = gizmoPos2D;
            }
        }

        private void OnGizmoTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            Update2DGizmoPosition();
        }

        private void Hide2DModeHandles()
        {
            _2DModeSliders.SetVisible(false);
            _2DModeSliders.Set2DCapsVisible(false);

            _2DModeDblSlider.SetVisible(false);
            _2DModeDblSlider.SetBorderVisible(false);
        }
    }
}
