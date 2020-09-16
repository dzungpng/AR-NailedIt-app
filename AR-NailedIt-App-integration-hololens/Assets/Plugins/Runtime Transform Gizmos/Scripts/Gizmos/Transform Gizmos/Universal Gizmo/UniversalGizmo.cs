using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class UniversalGizmo : GizmoBehaviour
    {
        #region Move
        public enum MvVertexSnapState
        {
            SelectingPivot = 0,
            Snapping,
            Inactive
        }

        private GizmoLineSlider3D _mvPXSlider;
        private GizmoLineSlider3D _mvPYSlider;
        private GizmoLineSlider3D _mvPZSlider;
        private GizmoLineSlider3D _mvNXSlider;
        private GizmoLineSlider3D _mvNYSlider;
        private GizmoLineSlider3D _mvNZSlider;
        private GizmoLineSlider3DCollection _mvAxesSliders = new GizmoLineSlider3DCollection();

        private GizmoPlaneSlider3D _mvXYSlider;
        private GizmoPlaneSlider3D _mvYZSlider;
        private GizmoPlaneSlider3D _mvZXSlider;
        private GizmoPlaneSlider3DCollection _mvDblSliders = new GizmoPlaneSlider3DCollection();

        private bool _isMvVertexSnapEnabled;
        private GizmoCap2D _mvVertSnapCap;
        private GizmoObjectVertexSnapDrag3D _mvVertexSnapDrag = new GizmoObjectVertexSnapDrag3D();
        private Vector3 _mvPostVSnapPosRestore;

        private GizmoLineSlider2D _mvP2DModeXSlider;
        private GizmoLineSlider2D _mvP2DModeYSlider;
        private GizmoLineSlider2D _mvN2DModeXSlider;
        private GizmoLineSlider2D _mvN2DModeYSlider;
        private GizmoLineSlider2DCollection _mv2DModeSliders = new GizmoLineSlider2DCollection();
        private GizmoPlaneSlider2D _mv2DModeDblSlider;
        #endregion

        #region Rotate
        private GizmoPlaneSlider3D _rtXSlider;
        private GizmoPlaneSlider3D _rtYSlider;
        private GizmoPlaneSlider3D _rtZSlider;
        private GizmoPlaneSlider3DCollection _rtAxesSliders = new GizmoPlaneSlider3DCollection();

        private GizmoCap3D _rtMidCap;
        private GizmoDblAxisRotationDrag3D _rtCamXYRotationDrag = new GizmoDblAxisRotationDrag3D();

        private GizmoPlaneSlider2D _rtCamLookSlider;
        #endregion

        #region Scale
        private GizmoCap3D _scMidCap;
        private GizmoUniformScaleDrag3D _scUnformScaleDrag = new GizmoUniformScaleDrag3D();

        private GizmoScaleGuide _scScaleGuide = new GizmoScaleGuide();
        private IEnumerable<GameObject> _scScaleGuideTargetObjects;
        #endregion

        private bool _is2DModeEnabled;

        [SerializeField]
        private UniversalGizmoSettings2D _settings2D = new UniversalGizmoSettings2D();
        private UniversalGizmoSettings2D _sharedSettings2D;

        [SerializeField]
        private UniversalGizmoSettings3D _settings3D = new UniversalGizmoSettings3D();
        private UniversalGizmoSettings3D _sharedSettings3D;

        [SerializeField]
        private UniversalGizmoLookAndFeel2D _lookAndFeel2D = new UniversalGizmoLookAndFeel2D();
        private UniversalGizmoLookAndFeel2D _sharedLookAndFeel2D;

        [SerializeField]
        private UniversalGizmoLookAndFeel3D _lookAndFeel3D = new UniversalGizmoLookAndFeel3D();
        private UniversalGizmoLookAndFeel3D _sharedLookAndFeel3D;

        [SerializeField]
        private UniversalGizmoHotkeys _hotkeys = new UniversalGizmoHotkeys();
        private UniversalGizmoHotkeys _sharedHotkeys;

        [SerializeField]
        private bool _useSnapEnableHotkey = true;
        [SerializeField]
        private bool _useVertSnapEnableHotkey = true;
        [SerializeField]
        private bool _use2DModeEnableHotkey = true;

        public UniversalGizmoSettings2D Settings2D { get { return _sharedSettings2D == null ? _settings2D : _sharedSettings2D; } }
        public UniversalGizmoSettings2D SharedSettings2D 
        { 
            get { return _sharedSettings2D; } 
            set
            { 
                _sharedSettings2D = value;
                SetupSharedSettings();
            } 
        }
        public UniversalGizmoSettings3D Settings3D { get { return _sharedSettings3D == null ? _settings3D : _sharedSettings3D; } }
        public UniversalGizmoSettings3D SharedSettings3D 
        { 
            get { return _sharedSettings3D; } 
            set 
            { 
                _sharedSettings3D = value;
                SetupSharedSettings();
            } 
        }
        public UniversalGizmoLookAndFeel2D LookAndFeel2D { get { return _sharedLookAndFeel2D == null ? _lookAndFeel2D : _sharedLookAndFeel2D; } }
        public UniversalGizmoLookAndFeel2D SharedLookAndFeel2D 
        { 
            get { return _sharedLookAndFeel2D; } 
            set 
            { 
                _sharedLookAndFeel2D = value;
                SetupSharedLookAndFeel();
            } 
        }
        public UniversalGizmoLookAndFeel3D LookAndFeel3D { get { return _sharedLookAndFeel3D == null ? _lookAndFeel3D : _sharedLookAndFeel3D; } }
        public UniversalGizmoLookAndFeel3D SharedLookAndFeel3D 
        { 
            get { return _sharedLookAndFeel3D; } 
            set 
            { 
                _sharedLookAndFeel3D = value;
                SetupSharedLookAndFeel();
            } 
        }
        public UniversalGizmoHotkeys Hotkeys { get { return _sharedHotkeys == null ? _hotkeys : _sharedHotkeys; } }
        public UniversalGizmoHotkeys SharedHotkeys { get { return _sharedHotkeys; } set { _sharedHotkeys = value; } }
        public bool UseSnapEnableHotkey { get { return _useSnapEnableHotkey; } set { _useSnapEnableHotkey = value; } }
        public bool UseVertSnapEnableHotkey { get { return _useVertSnapEnableHotkey; } set { _useVertSnapEnableHotkey = value; } }
        public bool Use2DModeEnableHotkey { get { return _use2DModeEnableHotkey; } set { _use2DModeEnableHotkey = value; } }

        public MvVertexSnapState GetMvVertexSnapState()
        {
            if (!_isMvVertexSnapEnabled) return MvVertexSnapState.Inactive;
            if (_mvVertexSnapDrag.IsActive) return MvVertexSnapState.Snapping;
            return MvVertexSnapState.SelectingPivot;
        }

        public float GetMvZoomFactor(Vector3 position)
        {
            if (!LookAndFeel3D.MvUseZoomFactor) return 1.0f;
            return Gizmo.GetWorkCamera().EstimateZoomFactor(position);
        }

        public float GetMvZoomFactor(Vector3 position, Camera camera)
        {
            if (!LookAndFeel3D.MvUseZoomFactor) return 1.0f;
            return camera.EstimateZoomFactor(position);
        }

        public float GetRtZoomFactor(Vector3 position)
        {
            if (!LookAndFeel3D.RtUseZoomFactor) return 1.0f;
            return Gizmo.GetWorkCamera().EstimateZoomFactor(position);
        }

        public float GetRtZoomFactor(Vector3 position, Camera camera)
        {
            if (!LookAndFeel3D.RtUseZoomFactor) return 1.0f;
            return camera.EstimateZoomFactor(position);
        }

        public float GetScZoomFactor(Vector3 position)
        {
            if (!LookAndFeel3D.ScUseZoomFactor) return 1.0f;
            return Gizmo.GetWorkCamera().EstimateZoomFactor(position);
        }

        public float GetScZoomFactor(Vector3 position, Camera camera)
        {
            if (!LookAndFeel3D.ScUseZoomFactor) return 1.0f;
            return camera.EstimateZoomFactor(position);
        }

        public bool IsDraggingMoveHandle()
        {
            return Gizmo.IsDragged && IsMoveHandle(Gizmo.DragHandleId);
        }

        public bool IsDraggingRotationHandle()
        {
            return Gizmo.IsDragged && IsRotationHandle(Gizmo.DragHandleId);
        }

        public bool IsDraggingScaleHandle()
        {
            return Gizmo.IsDragged && IsScaleHandle(Gizmo.DragHandleId);
        }

        public bool IsMoveHandle(int handleId)
        {
            return _mvAxesSliders.Contains(handleId) || _mvAxesSliders.ContainsCapId(handleId) ||
                   _mvDblSliders.Contains(handleId) ||
                   _mv2DModeSliders.Contains(handleId) || _mv2DModeSliders.ContainsCapId(handleId) ||
                   _mv2DModeDblSlider.HandleId == handleId;
        }

        public bool IsRotationHandle(int handleId)
        {
            return _rtAxesSliders.Contains(handleId) || _rtMidCap.HandleId == handleId || _rtCamLookSlider.HandleId == handleId;
        }

        public bool IsScaleHandle(int handleId)
        {
            return _scMidCap.HandleId == handleId;
        }

        public bool OwnsHandle(int handleId)
        {
            return IsMoveHandle(handleId) || IsRotationHandle(handleId) || IsScaleHandle(handleId);
        }

        public void SetSnapEnabled(bool isEnabled)
        {
            // Move
            _mvAxesSliders.SetSnapEnabled(isEnabled);
            _mv2DModeSliders.SetSnapEnabled(isEnabled);
            _mvDblSliders.SetSnapEnabled(isEnabled);
            _mv2DModeDblSlider.SetSnapEnabled(isEnabled);

            // Rotate
            _rtAxesSliders.SetSnapEnabled(isEnabled);
            _rtCamXYRotationDrag.IsSnapEnabled = isEnabled;
            _rtCamLookSlider.SetSnapEnabled(isEnabled);

            // Scale
            _scUnformScaleDrag.IsSnapEnabled = isEnabled;
        }

        public void SetMvVertexSnapEnabled(bool isEnabled)
        {
            if (_isMvVertexSnapEnabled == isEnabled ||
                _is2DModeEnabled || !_isEnabled ||
                Gizmo.IsDragged) return;

            if (isEnabled)
            {
                _mvVertSnapCap.SetVisible(true);
                _mvDblSliders.SetVisible(false, true);

                SetRotationHandlesVisible(false);
                SetScaleHandlesVisible(false);
            }
            else
            {
                _mvVertSnapCap.SetVisible(false);
                SetScaleHandlesVisible(true);
            }

            _isMvVertexSnapEnabled = isEnabled;
        }

        public void Set2DModeEnabled(bool isEnabled)
        {
            if (_is2DModeEnabled == isEnabled ||
                _isMvVertexSnapEnabled || !_isEnabled ||
                Gizmo.IsDragged) return;

            if (isEnabled)
            {
                _mv2DModeSliders.SetVisible(true);
                _mv2DModeSliders.Set2DCapsVisible(true);

                _mv2DModeDblSlider.SetVisible(true);
                _mv2DModeDblSlider.SetBorderVisible(true);

                _mv2DModeSliders.SetOffsetDragOrigin(Gizmo.Transform.Position3D);
                _mv2DModeDblSlider.OffsetDragOrigin = Gizmo.Transform.Position3D;

                SetMoveHandlesVisible(false);
                SetRotationHandlesVisible(false);
                SetScaleHandlesVisible(false);

                Update2DGizmoPosition();
                Update2DModeHandlePositions();
            }
            else
            {
                Hide2DModeHandles();
                SetScaleHandlesVisible(true);
            }

            _is2DModeEnabled = isEnabled;
        }

        public void SetMvVertexSnapTargetObjects(IEnumerable<GameObject> targetObjects)
        {
            _mvVertexSnapDrag.SetTargetObjects(targetObjects);
        }

        public void SetMvAxesLinesHoverable(bool hoverable)
        {
            _mvPXSlider.SetHoverable(hoverable);
            _mvNXSlider.SetHoverable(hoverable);
            _mvPYSlider.SetHoverable(hoverable);
            _mvNYSlider.SetHoverable(hoverable);
            _mvPZSlider.SetHoverable(hoverable);
            _mvNZSlider.SetHoverable(hoverable);
        }

        public void SetRtMidCapHoverable(bool hoverable)
        {
            _rtMidCap.SetHoverable(hoverable);
        }

        public void SetScaleGuideTargetObjects(IEnumerable<GameObject> targetObjects)
        {
            _scScaleGuideTargetObjects = targetObjects;
        }

        public override void OnAttached()
        {
            // Move
            _mvXYSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.XYDblSlider);
            _mvYZSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.YZDblSlider);
            _mvZXSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.ZXDblSlider);

            _mvDblSliders.Add(_mvXYSlider);
            _mvDblSliders.Add(_mvYZSlider);
            _mvDblSliders.Add(_mvZXSlider);

            _mvPXSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PXSlider, GizmoHandleId.PXCap);
            _mvPXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvPXSlider.MapDirection(0, AxisSign.Positive);

            _mvNXSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NXSlider, GizmoHandleId.NXCap);
            _mvNXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvNXSlider.MapDirection(0, AxisSign.Negative);

            _mvPYSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PYSlider, GizmoHandleId.PYCap);
            _mvPYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvPYSlider.MapDirection(1, AxisSign.Positive);

            _mvNYSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NYSlider, GizmoHandleId.NYCap);
            _mvNYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvNYSlider.MapDirection(1, AxisSign.Negative);

            _mvPZSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.PZSlider, GizmoHandleId.PZCap);
            _mvPZSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvPZSlider.MapDirection(2, AxisSign.Positive);

            _mvNZSlider = new GizmoLineSlider3D(Gizmo, GizmoHandleId.NZSlider, GizmoHandleId.NZCap);
            _mvNZSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvNZSlider.MapDirection(2, AxisSign.Negative);

            _mvAxesSliders.Add(_mvPXSlider);
            _mvAxesSliders.Add(_mvPYSlider);
            _mvAxesSliders.Add(_mvPZSlider);
            _mvAxesSliders.Add(_mvNXSlider);
            _mvAxesSliders.Add(_mvNYSlider);
            _mvAxesSliders.Add(_mvNZSlider);
            _mvAxesSliders.Make3DHoverPriorityLowerThan(_mvXYSlider.HoverPriority3D);
            _mvAxesSliders.Make3DHoverPriorityLowerThan(_mvYZSlider.HoverPriority3D);
            _mvAxesSliders.Make3DHoverPriorityLowerThan(_mvZXSlider.HoverPriority3D);

            _mvVertSnapCap = new GizmoCap2D(Gizmo, GizmoHandleId.VertSnap);
            _mvVertSnapCap.SetVisible(false);
            _mvVertSnapCap.DragSession = _mvVertexSnapDrag;
            _mvVertexSnapDrag.AddTargetTransform(Gizmo.Transform);

            _mv2DModeDblSlider = new GizmoPlaneSlider2D(Gizmo, GizmoHandleId.CamXYSlider);
            _mv2DModeDblSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mv2DModeDblSlider.SetVisible(false);

            _mvP2DModeXSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.PCamXSlider, GizmoHandleId.PCamXCap);
            _mvP2DModeXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvP2DModeXSlider.MapDirection(0, AxisSign.Positive);
            _mvP2DModeXSlider.HoverPriority2D.MakeLowerThan(_mv2DModeDblSlider.HoverPriority2D);

            _mvP2DModeYSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.PCamYSlider, GizmoHandleId.PCamYCap);
            _mvP2DModeYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvP2DModeYSlider.MapDirection(1, AxisSign.Positive);
            _mvP2DModeYSlider.HoverPriority2D.MakeLowerThan(_mv2DModeDblSlider.HoverPriority2D);

            _mvN2DModeXSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.NCamXSlider, GizmoHandleId.NCamXCap);
            _mvN2DModeXSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvN2DModeXSlider.MapDirection(0, AxisSign.Negative);
            _mvN2DModeXSlider.HoverPriority2D.MakeLowerThan(_mv2DModeDblSlider.HoverPriority2D);

            _mvN2DModeYSlider = new GizmoLineSlider2D(Gizmo, GizmoHandleId.NCamYSlider, GizmoHandleId.NCamYCap);
            _mvN2DModeYSlider.SetDragChannel(GizmoDragChannel.Offset);
            _mvN2DModeYSlider.MapDirection(1, AxisSign.Negative);
            _mvN2DModeYSlider.HoverPriority2D.MakeLowerThan(_mv2DModeDblSlider.HoverPriority2D);

            _mv2DModeSliders.Add(_mvP2DModeXSlider);
            _mv2DModeSliders.Add(_mvP2DModeYSlider);
            _mv2DModeSliders.Add(_mvN2DModeXSlider);
            _mv2DModeSliders.Add(_mvN2DModeYSlider);
            Hide2DModeHandles();

            // Rotate
            _rtMidCap = new GizmoCap3D(Gizmo, GizmoHandleId.CamXYRotation);
            _rtMidCap.DragSession = _rtCamXYRotationDrag;
            _rtCamXYRotationDrag.AddTargetTransform(Gizmo.Transform);

            _rtXSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.XRotationSlider);
            _rtXSlider.SetDragChannel(GizmoDragChannel.Rotation);
            _rtXSlider.LocalRotation = Quaternion.Euler(0.0f, 90.0f, 0.0f);
            _rtXSlider.SetVisible(false);
            _rtAxesSliders.Add(_rtXSlider);

            _rtYSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.YRotationSlider);
            _rtYSlider.SetDragChannel(GizmoDragChannel.Rotation);
            _rtYSlider.LocalRotation = Quaternion.Euler(90.0f, 0.0f, 0.0f);
            _rtYSlider.SetVisible(false);
            _rtAxesSliders.Add(_rtYSlider);

            _rtZSlider = new GizmoPlaneSlider3D(Gizmo, GizmoHandleId.ZRotationSlider);
            _rtZSlider.SetDragChannel(GizmoDragChannel.Rotation);
            _rtZSlider.SetVisible(false);
            _rtAxesSliders.Add(_rtZSlider);

            _rtCamLookSlider = new GizmoPlaneSlider2D(Gizmo, GizmoHandleId.CamZRotation);
            _rtCamLookSlider.SetDragChannel(GizmoDragChannel.Rotation);
            _rtCamLookSlider.SetVisible(false);

            // Scale
            _scMidCap = new GizmoCap3D(Gizmo, GizmoHandleId.MidScaleCap);
            _scMidCap.DragSession = _scUnformScaleDrag;

            // Setup hover priorities
            _rtAxesSliders.Make3DHoverPriorityHigherThan(_rtMidCap.HoverPriority3D);
            _mvAxesSliders.Make3DHoverPriorityHigherThan(_rtXSlider.HoverPriority3D);
            _mvDblSliders.Make3DHoverPriorityHigherThan(_mvPXSlider.HoverPriority3D);
            _scMidCap.HoverPriority3D.MakeHigherThan(_mvXYSlider.HoverPriority3D);

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
            if (UseSnapEnableHotkey)
                SetSnapEnabled(Hotkeys.EnableSnapping.IsActive());

            if (Use2DModeEnableHotkey)
                Set2DModeEnabled(Hotkeys.Enable2DMode.IsActive());

            // Move
            Update2DGizmoPosition();
            if (!_is2DModeEnabled)
            {
                bool vSnapWasEnabled = _isMvVertexSnapEnabled;
                if (!vSnapWasEnabled) _mvPostVSnapPosRestore = Gizmo.Transform.Position3D;

                if (UseVertSnapEnableHotkey) SetMvVertexSnapEnabled(Hotkeys.EnableVertexSnapping.IsActive());
                if (vSnapWasEnabled && !_isMvVertexSnapEnabled) Gizmo.Transform.Position3D = _mvPostVSnapPosRestore;

                if (!Gizmo.IsDragged || IsDraggingMoveHandle())
                {
                    _mvPXSlider.SetVisible(LookAndFeel3D.IsMvPositiveSliderVisible(0));
                    _mvPXSlider.Set3DCapVisible(LookAndFeel3D.IsMvPositiveSliderCapVisible(0));
                    _mvPYSlider.SetVisible(LookAndFeel3D.IsMvPositiveSliderVisible(1));
                    _mvPYSlider.Set3DCapVisible(LookAndFeel3D.IsMvPositiveSliderCapVisible(1));
                    _mvPZSlider.SetVisible(LookAndFeel3D.IsMvPositiveSliderVisible(2));
                    _mvPZSlider.Set3DCapVisible(LookAndFeel3D.IsMvPositiveSliderCapVisible(2));
                    _mvNXSlider.SetVisible(LookAndFeel3D.IsMvNegativeSliderVisible(0));
                    _mvNXSlider.Set3DCapVisible(LookAndFeel3D.IsMvNegativeSliderCapVisible(0));
                    _mvNYSlider.SetVisible(LookAndFeel3D.IsMvNegativeSliderVisible(1));
                    _mvNYSlider.Set3DCapVisible(LookAndFeel3D.IsMvNegativeSliderCapVisible(1));
                    _mvNZSlider.SetVisible(LookAndFeel3D.IsMvNegativeSliderVisible(2));
                    _mvNZSlider.Set3DCapVisible(LookAndFeel3D.IsMvNegativeSliderCapVisible(2));
                }
            }

            if (!_isMvVertexSnapEnabled && !_is2DModeEnabled)
            {
                if (!Gizmo.IsDragged || IsDraggingMoveHandle())
                {
                    _mvXYSlider.SetVisible(LookAndFeel3D.IsMvDblSliderVisible(PlaneId.XY));
                    _mvXYSlider.SetBorderVisible(_mvXYSlider.IsVisible);
                    _mvYZSlider.SetVisible(LookAndFeel3D.IsMvDblSliderVisible(PlaneId.YZ));
                    _mvYZSlider.SetBorderVisible(_mvYZSlider.IsVisible);
                    _mvZXSlider.SetVisible(LookAndFeel3D.IsMvDblSliderVisible(PlaneId.ZX));
                    _mvZXSlider.SetBorderVisible(_mvZXSlider.IsVisible);

                    PlaceMvDblSlidersInSliderPlanes(Gizmo.FocusCamera);
                }
            }
            else
            if (_isMvVertexSnapEnabled)
            {
                if (GetMvVertexSnapState() == MvVertexSnapState.SelectingPivot && _mvVertexSnapDrag.SelectSnapPivotPoint(Gizmo))
                    Gizmo.Transform.Position3D = _mvVertexSnapDrag.SnapPivot;
            }
            else
            if (_is2DModeEnabled)
            {
                if (!Gizmo.IsDragged || IsDraggingMoveHandle())
                {
                    _mvP2DModeXSlider.SetVisible(LookAndFeel2D.IsMvPositiveSliderVisible(0));
                    _mvP2DModeXSlider.Set2DCapVisible(LookAndFeel2D.IsMvPositiveSliderCapVisible(0));
                    _mvP2DModeYSlider.SetVisible(LookAndFeel2D.IsMvPositiveSliderVisible(1));
                    _mvP2DModeYSlider.Set2DCapVisible(LookAndFeel2D.IsMvPositiveSliderCapVisible(1));
                    _mvN2DModeXSlider.SetVisible(LookAndFeel2D.IsMvNegativeSliderVisible(0));
                    _mvN2DModeXSlider.Set2DCapVisible(LookAndFeel2D.IsMvNegativeSliderCapVisible(0));
                    _mvN2DModeYSlider.SetVisible(LookAndFeel2D.IsMvNegativeSliderVisible(1));
                    _mvN2DModeYSlider.Set2DCapVisible(LookAndFeel2D.IsMvNegativeSliderCapVisible(1));

                    bool wasVisible = _mv2DModeDblSlider.IsVisible;
                    _mv2DModeDblSlider.SetVisible(LookAndFeel2D.IsMvDblSliderVisible);
                    _mv2DModeDblSlider.SetBorderVisible(LookAndFeel2D.IsMvDblSliderVisible);
                    if (!wasVisible && _mv2DModeDblSlider.IsVisible) Update2DModeHandlePositions();
                }
            }

            // Rotate
            if (!_is2DModeEnabled && !_isMvVertexSnapEnabled)
            {
                if (!Gizmo.IsDragged || IsDraggingRotationHandle())
                {
                    _rtMidCap.SetVisible(LookAndFeel3D.IsRtMidCapVisible);
                    _rtCamXYRotationDrag.Sensitivity = Settings3D.RtDragSensitivity;

                    _rtXSlider.SetBorderVisible(LookAndFeel3D.IsRtAxisVisible(0));
                    _rtYSlider.SetBorderVisible(LookAndFeel3D.IsRtAxisVisible(1));
                    _rtZSlider.SetBorderVisible(LookAndFeel3D.IsRtAxisVisible(2));
                    _rtCamLookSlider.SetBorderVisible(LookAndFeel3D.IsRtCamLookSliderVisible);

                    if (_rtCamLookSlider.IsBorderVisible) UpdateRtCamLookSlider(Gizmo.FocusCamera);
                }
            }

            // Scale
            _scMidCap.SetVisible(LookAndFeel3D.IsScMidCapVisible && !_is2DModeEnabled);
            _scUnformScaleDrag.Sensitivity = Settings3D.ScDragSensitivity;
        }

        public override void OnGizmoRender(Camera camera)
        {
            bool multipleRenderCams = RTGizmosEngine.Get.NumRenderCameras > 1;
            if (multipleRenderCams)
            {
                _mvAxesSliders.ApplyZoomFactor(camera);
                if (!_isMvVertexSnapEnabled && !_is2DModeEnabled)
                {
                    _mvDblSliders.ApplyZoomFactor(camera);
                    PlaceMvDblSlidersInSliderPlanes(camera);
                }

                Update2DGizmoPosition();
                if (_is2DModeEnabled) Update2DModeHandlePositions();

                _rtMidCap.ApplyZoomFactor(camera);
                _rtAxesSliders.ApplyZoomFactor(camera);
                if (_rtCamLookSlider.IsBorderVisible) UpdateRtCamLookSlider(camera);

                _scMidCap.ApplyZoomFactor(camera);
            }

            _rtXSlider.Render(camera);
            _rtYSlider.Render(camera);
            _rtZSlider.Render(camera);
            _rtMidCap.Render(camera);

            var sortedSliders = _mvAxesSliders.GetRenderSortedSliders(camera);
            foreach (var slider in sortedSliders) slider.Render(camera);

            _rtCamLookSlider.Render(camera);
            _mvXYSlider.Render(camera);
            _mvYZSlider.Render(camera);
            _mvZXSlider.Render(camera);
            _scMidCap.Render(camera);

            _mvVertSnapCap.Render(camera);
            _mv2DModeSliders.Render(camera);
            _mv2DModeDblSlider.Render(camera);

            if (LookAndFeel3D.IsScScaleGuideVisible && Gizmo.IsDragged && IsScaleHandle(Gizmo.DragHandleId))
                _scScaleGuide.Render(GameObjectEx.FilterParentsOnly(_scScaleGuideTargetObjects), camera);
        }

        public override void OnGizmoDragUpdate(int handleId)
        {
            if (_isMvVertexSnapEnabled) _mvPostVSnapPosRestore += Gizmo.RelativeDragOffset;
        }

        public override void OnGizmoDragBegin(int handleId)
        {
            if (IsMoveHandle(handleId))
            {
                SetRotationHandlesVisible(false);
                SetScaleHandlesVisible(false);
            }
            else
            if (IsRotationHandle(handleId))
            {
                SetMoveHandlesVisible(false);
                SetScaleHandlesVisible(false);
            }
            else
            if (IsScaleHandle(handleId))
            {
                SetMoveHandlesVisible(false);
                SetRotationHandlesVisible(false);
            }
        }

        public override void OnGizmoDragEnd(int handleId)
        {
            if (!IsScaleHandle(handleId))
            {
                if (!_is2DModeEnabled) SetScaleHandlesVisible(true);
            }
        }

        public override void OnGizmoAttemptHandleDragBegin(int handleId)
        {
            if (handleId == _rtMidCap.HandleId)
            {
                var workData = new GizmoDblAxisRotationDrag3D.WorkData();
                workData.Axis0 = Gizmo.FocusCamera.transform.up;
                workData.Axis1 = Gizmo.FocusCamera.transform.right;
                workData.ScreenAxis0 = -Vector3.right;
                workData.ScreenAxis1 = Vector3.up;
                workData.SnapMode = Settings3D.RtSnapMode;
                workData.SnapStep0 = Settings3D.RtCamUpSnapStep;
                workData.SnapStep1 = Settings3D.RtCamRightSnapStep;
                _rtCamXYRotationDrag.SetWorkData(workData);
            }
            else if (handleId == _scMidCap.HandleId)
            {
                var workData = new GizmoUniformScaleDrag3D.WorkData();
                workData.DragOrigin = _scMidCap.Position;
                workData.CameraRight = Gizmo.FocusCamera.transform.right;
                workData.CameraUp = Gizmo.FocusCamera.transform.up;
                workData.SnapStep = Settings3D.ScUniformSnapStep;
                _scUnformScaleDrag.SetWorkData(workData);
            }
        }

        private void PlaceMvDblSlidersInSliderPlanes(Camera camera)
        {
            if (_mvXYSlider.IsVisible) _mvXYSlider.MakeSliderPlane(Gizmo.Transform, PlaneId.XY, _mvPXSlider, _mvPYSlider, camera);
            if (_mvYZSlider.IsVisible) _mvYZSlider.MakeSliderPlane(Gizmo.Transform, PlaneId.YZ, _mvPYSlider, _mvPZSlider, camera);
            if (_mvZXSlider.IsVisible) _mvZXSlider.MakeSliderPlane(Gizmo.Transform, PlaneId.ZX, _mvPZSlider, _mvPXSlider, camera);
        }

        private void SetupSharedLookAndFeel()
        {
            // Move
            LookAndFeel3D.ConnectMvSliderLookAndFeel(_mvPXSlider, 0, AxisSign.Positive);
            LookAndFeel3D.ConnectMvSliderLookAndFeel(_mvPYSlider, 1, AxisSign.Positive);
            LookAndFeel3D.ConnectMvSliderLookAndFeel(_mvPZSlider, 2, AxisSign.Positive);
            LookAndFeel3D.ConnectMvSliderLookAndFeel(_mvNXSlider, 0, AxisSign.Negative);
            LookAndFeel3D.ConnectMvSliderLookAndFeel(_mvNYSlider, 1, AxisSign.Negative);
            LookAndFeel3D.ConnectMvSliderLookAndFeel(_mvNZSlider, 2, AxisSign.Negative);
            LookAndFeel3D.ConnectMvDblSliderLookAndFeel(_mvXYSlider, PlaneId.XY);
            LookAndFeel3D.ConnectMvDblSliderLookAndFeel(_mvYZSlider, PlaneId.YZ);
            LookAndFeel3D.ConnectMvDblSliderLookAndFeel(_mvZXSlider, PlaneId.ZX);
            LookAndFeel3D.ConnectMvVertSnapCapLookAndFeel(_mvVertSnapCap);
            LookAndFeel2D.ConnectMvSliderLookAndFeel(_mvP2DModeXSlider, 0, AxisSign.Positive);
            LookAndFeel2D.ConnectMvSliderLookAndFeel(_mvP2DModeYSlider, 1, AxisSign.Positive);
            LookAndFeel2D.ConnectMvSliderLookAndFeel(_mvN2DModeXSlider, 0, AxisSign.Negative);
            LookAndFeel2D.ConnectMvSliderLookAndFeel(_mvN2DModeYSlider, 1, AxisSign.Negative);
            LookAndFeel2D.ConnectMvDblSliderLookAndFeel(_mv2DModeDblSlider);

            // Rotate
            LookAndFeel3D.ConnectRtSliderLookAndFeel(_rtXSlider, 0);
            LookAndFeel3D.ConnectRtSliderLookAndFeel(_rtYSlider, 1);
            LookAndFeel3D.ConnectRtSliderLookAndFeel(_rtZSlider, 2);
            LookAndFeel3D.ConnectRtCamLookSliderLookAndFeel(_rtCamLookSlider);
            LookAndFeel3D.ConnectRtMidCapLookAndFeel(_rtMidCap);

            // Scale
            LookAndFeel3D.ConnectScMidCapLookAndFeel(_scMidCap);
            LookAndFeel3D.ConnectScGizmoScaleGuideLookAndFeel(_scScaleGuide);
        }

        private void SetupSharedSettings()
        {
            // Move
            Settings3D.ConnectMvSliderSettings(_mvPXSlider, 0, AxisSign.Positive);
            Settings3D.ConnectMvSliderSettings(_mvPYSlider, 1, AxisSign.Positive);
            Settings3D.ConnectMvSliderSettings(_mvPZSlider, 2, AxisSign.Positive);
            Settings3D.ConnectMvSliderSettings(_mvNXSlider, 0, AxisSign.Negative);
            Settings3D.ConnectMvSliderSettings(_mvNYSlider, 1, AxisSign.Negative);
            Settings3D.ConnectMvSliderSettings(_mvNZSlider, 2, AxisSign.Negative);
            Settings3D.ConnectMvDblSliderSettings(_mvXYSlider, PlaneId.XY);
            Settings3D.ConnectMvDblSliderSettings(_mvYZSlider, PlaneId.YZ);
            Settings3D.ConnectMvDblSliderSettings(_mvZXSlider, PlaneId.ZX);
            Settings2D.ConnectMvSliderSettings(_mvP2DModeXSlider, 0, AxisSign.Positive);
            Settings2D.ConnectMvSliderSettings(_mvP2DModeYSlider, 1, AxisSign.Positive);
            Settings2D.ConnectMvSliderSettings(_mvN2DModeXSlider, 0, AxisSign.Negative);
            Settings2D.ConnectMvSliderSettings(_mvN2DModeYSlider, 1, AxisSign.Negative);
            Settings2D.ConnectMvDblSliderSettings(_mv2DModeDblSlider);
            _mvVertexSnapDrag.Settings = Settings3D.VertexSnapSettings;

            // Rotate
            Settings3D.ConnectRtSliderSettings(_rtXSlider, 0);
            Settings3D.ConnectRtSliderSettings(_rtYSlider, 1);
            Settings3D.ConnectRtSliderSettings(_rtZSlider, 2);
            Settings3D.ConnectRtCamLookSliderSettings(_rtCamLookSlider);
        }

        private void Update2DGizmoPosition()
        {
            Gizmo.Transform.Position2D = Gizmo.GetWorkCamera().WorldToScreenPoint(Gizmo.Transform.Position3D);
        }

        private void Update2DModeHandlePositions()
        {
            if (LookAndFeel2D.IsMvDblSliderVisible)
            {
                _mvP2DModeXSlider.StartPosition = _mv2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Right);
                _mvP2DModeYSlider.StartPosition = _mv2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Top);
                _mvN2DModeXSlider.StartPosition = _mv2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Left);
                _mvN2DModeYSlider.StartPosition = _mv2DModeDblSlider.GetRealExtentPoint(Shape2DExtentPoint.Bottom);
            }
            else
            {
                Vector2 gizmoPos2D = Gizmo.Transform.Position2D;
                _mvP2DModeXSlider.StartPosition = gizmoPos2D;
                _mvP2DModeYSlider.StartPosition = gizmoPos2D;
                _mvN2DModeXSlider.StartPosition = gizmoPos2D;
                _mvN2DModeYSlider.StartPosition = gizmoPos2D;
            }
        }

        private void OnGizmoTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            Update2DGizmoPosition();

            if (changeData.ChangeReason == GizmoTransform.ChangeReason.ParentChange ||
                changeData.TRSDimension == GizmoDimension.Dim3D)
            {
                UpdateRtCamLookSlider(Gizmo.GetWorkCamera());
            }
        }

        private void Hide2DModeHandles()
        {
            _mv2DModeSliders.SetVisible(false);
            _mv2DModeSliders.Set2DCapsVisible(false);

            _mv2DModeDblSlider.SetVisible(false);
            _mv2DModeDblSlider.SetBorderVisible(false);
        }

        private void UpdateRtCamLookSlider(Camera camera)
        {
            float zoomFactor = _rtMidCap.GetZoomFactor(camera);
            _rtCamLookSlider.MakePolySphereBorder(Gizmo.Transform.Position3D, _rtMidCap.GetRealSphereRadius(zoomFactor) + zoomFactor * LookAndFeel3D.RtCamLookSliderRadiusOffset, 100, camera);
        }

        private void SetMoveHandlesVisible(bool visible)
        {
            _mvDblSliders.SetVisible(visible, true);
            _mvAxesSliders.SetVisible(visible);
            _mvAxesSliders.Set3DCapsVisible(visible);
        }

        private void SetRotationHandlesVisible(bool visible)
        {
            _rtAxesSliders.SetBorderVisible(visible);
            _rtMidCap.SetVisible(visible);
            _rtCamLookSlider.SetBorderVisible(visible);
        }

        private void SetScaleHandlesVisible(bool visible)
        {
            _scMidCap.SetVisible(visible);
        }
    }
}
