using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    /// <summary>
    /// This class represents a 3D line slider. This type of slider is rendered as a 
    /// straight line segment (thin or thick) and it allows for moving, rotating and
    /// scaling entities. 
    /// </summary>
    public class GizmoLineSlider3D : GizmoSlider
    {
        private SegmentShape3D _segment = new SegmentShape3D();
        private BoxShape3D _box = new BoxShape3D();
        private CylinderShape3D _cylinder = new CylinderShape3D();

        private int _segmentIndex;
        private int _boxIndex;
        private int _cylinderIndex;

        private IGizmoLineSlider3DController[] _controllers = new IGizmoLineSlider3DController[System.Enum.GetValues(typeof(GizmoLine3DType)).Length];
        private GizmoLineSlider3DControllerData _controllerData = new GizmoLineSlider3DControllerData();
        
        private GizmoDragChannel _dragChannel = GizmoDragChannel.Scale;
        private GizmoSglAxisOffsetDrag3D _offsetDrag = new GizmoSglAxisOffsetDrag3D();
        private GizmoSglAxisRotationDrag3D _rotationDrag = new GizmoSglAxisRotationDrag3D();
        private GizmoRotationArc3D _rotationArc = new GizmoRotationArc3D();
        private GizmoSglAxisScaleDrag3D _scaleDrag = new GizmoSglAxisScaleDrag3D();
        private int _scaleDragAxisIndex = 0;
        private List<GizmoScalerHandle> _scalerHandles = new List<GizmoScalerHandle>();
        private IGizmoDragSession _selectedDragSession;

        private GizmoCap3D _cap3D;

        private GizmoTransform _transform = new GizmoTransform();
        private GizmoTransformAxisMap3D _directionAxisMap = new GizmoTransformAxisMap3D();
        private GizmoTransformAxisMap3D _dragRotationAxisMap = new GizmoTransformAxisMap3D();

        private GizmoOverrideColor _overrideColor = new GizmoOverrideColor();

        private GizmoLineSlider3DSettings _settings = new GizmoLineSlider3DSettings();
        private GizmoLineSlider3DSettings _sharedSettings;
        private GizmoLineSlider3DLookAndFeel _lookAndFeel = new GizmoLineSlider3DLookAndFeel();
        private GizmoLineSlider3DLookAndFeel _sharedLookAndFeel;

        /// <summary>
        /// Returns the slider's direction. This is a normalized axis which points from the 
        /// slider's start point to its end point. When the slider is used for scaling, it is 
        /// recommended to use 'GetRealDirection' instead because the scale session can cause 
        /// the slider to point in the opposite direction. This is something that is ignored 
        /// by this property.
        /// </summary>
        public Vector3 Direction { get { return _directionAxisMap.Axis; } }
        /// <summary>
        /// Returns the rotation axis which is used during rotation sessions.
        /// </summary>
        public Vector3 DragRotationAxis { get { return _dragRotationAxisMap.Axis; } }
        /// <summary>
        /// Allows the client code to set or retrieve the scale drag axis index. This is the
        /// index of the scale drag vector component that is affected during a scale session. 
        /// Format: 0->X, 1->Y, 2->Z;
        /// </summary>
        public int ScaleDragAxisIndex { get { return _scaleDragAxisIndex; } set { _scaleDragAxisIndex = Mathf.Clamp(value, 0, 2); } }
        /// <summary>
        /// Returns the slider's starting position.
        /// </summary>
        public Vector3 StartPosition { get { return _transform.Position3D; } set { _transform.Position3D = value; } }
        /// <summary>
        /// Returns the slider's drag channel. This can be used to inform the client code
        /// about the type of drag that can be performed with the slider (move, rotate or scale).
        /// </summary>
        public GizmoDragChannel DragChannel { get { return _dragChannel; } }
        /// <summary>
        /// Checks if the slideer is currently being dragged. In order to get more specific info
        /// about how the slider is being dragged, use the 'IsMoving', 'IsRotating' and 'IsScaling'
        /// properties. The 'DragChannel' property can also be used to identify the type of drag
        /// that is being applied.
        /// </summary>
        public bool IsDragged { get { return Gizmo.IsDragged && (Gizmo.DragHandleId == HandleId || Gizmo.DragHandleId == _cap3D.HandleId); } }
        /// <summary>
        /// Checks if the slider is being moved. 
        /// </summary>
        public bool IsMoving { get { return _offsetDrag.IsActive; } }
        /// <summary>
        /// Checks if the slider is being rotated. 
        /// </summary>
        public bool IsRotating { get { return _rotationDrag.IsActive; } }
        /// <summary>
        /// Checks if the slider is being scaled. 
        /// </summary>
        public bool IsScaling { get { return _scaleDrag.IsActive; } }
        /// <summary>
        /// Checks if the slider's 3D cap is visible.
        /// </summary>
        public bool Is3DCapVisible { get { return _cap3D.IsVisible; } }
        /// <summary>
        /// Checks if the slider's 3D cap is hoverable.
        /// </summary>
        public bool Is3DCapHoverable { get { return _cap3D.IsHoverable; } }
        /// <summary>
        /// Returns the id of the cap handle.
        /// </summary>
        public int Cap3DHandleId { get { return _cap3D.HandleId; } }
        /// <summary>
        /// Returns the total drag offset since the drag session started.
        /// </summary>
        public Vector3 TotalDragOffset { get { return _offsetDrag.TotalDragOffset; } }
        /// <summary>
        /// Returns the relative drag offset since the last drag session update.
        /// </summary>
        public Vector3 RelativeDragOffset { get { return _offsetDrag.RelativeDragOffset; } }
        /// <summary>
        /// Returns the total drag rotation since the drag session started.
        /// </summary>
        public float TotalDragRotation { get { return _rotationDrag.TotalRotation; } }
        /// <summary>
        /// Returns the relative drag rotation since the last drag session update.
        /// </summary>
        public float RelativeDragRotation { get { return _rotationDrag.RelativeRotation; } }
        /// <summary>
        /// Returns the total drag scale since the drag session started.
        /// </summary>
        public float TotalDragScale { get { return _scaleDrag.TotalScale; } }
        /// <summary>
        /// Returns the relative drag scale since the last drag session update.
        /// </summary>
        public float RelativeDragScale { get { return _scaleDrag.RelativeScale; } }
        /// <summary>
        /// Returns the slider's override color. This can be used in situations where more direct 
        /// control is required over the slider's color. This property only affects the slider's 
        /// color. The cap color can not be  affected by this property. In order to specify an override 
        /// color for the slider's cap, you can use 'Cap3DOverrideColor'.
        /// </summary>
        public GizmoOverrideColor OverrideColor { get { return _overrideColor; } }
        /// <summary>
        /// Returns the override color for the slider's 3D cap. This can be used in 
        /// situations where more direct control is required over the cap's color. 
        /// </summary>
        public GizmoOverrideColor Cap3DOverrideColor { get { return _cap3D.OverrideColor; } }
        /// <summary>
        /// Returns the slider's functional settings. If the slider uses shared settings,
        /// the shared settings will be returned. Otherwise, the property will return the
        /// settings associated with the slider instance.
        /// </summary>
        public GizmoLineSlider3DSettings Settings { get { return _sharedSettings != null ? _sharedSettings : _settings; } }
        /// <summary>
        /// Allows the client code to retrieve or set the slider's shared functional settings.
        /// </summary>
        public GizmoLineSlider3DSettings SharedSettings { get { return _sharedSettings; } set { _sharedSettings = value; } }
        /// <summary>
        /// Returns the slider's look and feel settings. If the slider uses shared settings,
        /// the shared settings will be returned. Otherwise, the property will return the
        /// settings associated with the slider instance.
        /// </summary>
        public GizmoLineSlider3DLookAndFeel LookAndFeel { get { return _sharedLookAndFeel != null ? _sharedLookAndFeel : _lookAndFeel; } }
        /// <summary>
        /// Allows the client code to retrieve or set the slider's shared look and feel settings.
        /// </summary>
        public GizmoLineSlider3DLookAndFeel SharedLookAndFeel 
        {
            get { return _sharedLookAndFeel; } 
            set 
            { 
                _sharedLookAndFeel = value;
                SetupSharedLookAndFeel();
            } 
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="gizmo">The gizmo which owns the slider.</param>
        /// <param name="handleId">The id of the slider handle.</param>
        /// <param name="capHandleId">The id of the slider's cap handle.</param>
        public GizmoLineSlider3D(Gizmo gizmo, int handleId, int capHandleId)
            :base(gizmo, handleId)
        {
            _segmentIndex = Handle.Add3DShape(_segment);
            _boxIndex = Handle.Add3DShape(_box);
            _cylinderIndex = Handle.Add3DShape(_cylinder);

            _cap3D = new GizmoCap3D(Gizmo, capHandleId);
            SetupSharedLookAndFeel();

            MapDirection(0, AxisSign.Positive);
            SetDragChannel(GizmoDragChannel.Offset);

            _controllerData.Gizmo = Gizmo;
            _controllerData.Slider = this;
            _controllerData.SliderHandle = Handle;
            _controllerData.Segment = _segment;
            _controllerData.Box = _box;
            _controllerData.Cylinder = _cylinder;
            _controllerData.SegmentIndex = _segmentIndex;
            _controllerData.BoxIndex = _boxIndex;
            _controllerData.CylinderIndex = _cylinderIndex;

            _controllers[(int)GizmoLine3DType.Thin] = new GizmoThinLineSlider3DController(_controllerData);
            _controllers[(int)GizmoLine3DType.Box] = new GizmoBoxLineSlider3DController(_controllerData);
            _controllers[(int)GizmoLine3DType.Cylinder] = new GizmoCylinderLineSlider3DController(_controllerData);

            _transform.Changed += OnTransformChanged;
            Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            Gizmo.PreDragBeginAttempt += OnGizmoAttemptHandleDragBegin;
            Gizmo.PreHoverEnter += OnGizmoHandleHoverEnter;
            Gizmo.PreHoverExit += OnGizmoHandleHoverExit;
            Gizmo.PostEnabled += OnGizmoPostEnabled;
            Gizmo.PostDisabled += OnGizmoPostDisabled;

            AddTargetTransform(_transform);
            AddTargetTransform(Gizmo.Transform);
            _cap3D.RegisterTransformAsDragTarget(_offsetDrag);
            _cap3D.RegisterTransformAsDragTarget(_rotationDrag);
            _cap3D.RegisterTransformAsDragTarget(_scaleDrag);
            _transform.SetParent(Gizmo.Transform);
        }

        /// <summary>
        /// Checks if the slider contains a record of a scaler handle with the specified id.
        /// </summary>
        public bool IsScalerHandleRegistered(int handleId)
        {
            return _scalerHandles.FindAll(item => item.HandleId == handleId).Count != 0;
        }

        /// <summary>
        /// Checks if the slider contains a record of a scaler handle with the specified id
        /// which also affects the specified scale drag axis.
        /// </summary>
        public bool IsScalerHandleRegistered(int handleId, int scaleDragAxisIndex)
        {
            var scalerHandles = _scalerHandles.FindAll(item => item.HandleId == handleId);
            if (scalerHandles.Count == 0) return false;

            return scalerHandles[0].ContainsScaleDragAxisIndex(scaleDragAxisIndex);
        }

        /// <summary>
        /// This function is useful when the slider needs to have its size affected by scale
        /// sessions which originate from other handles. For example, the mid cap of a scale 
        /// gizmo affects the length of the axes sliders. The function receives the id of the 
        /// scaler handle (mid cap in this example) and a list of scale drag axis indices which 
        /// represent the indices of the scale drag vector which are affected by the scaler 
        /// handle. The function has no effect if a scaler handle with the same id already exists.
        /// </summary>
        /// <param name="handleId">
        /// The scaler handle id.
        /// </param>
        /// <param name="scaleDragAxisIndices">
        /// A collection of scale drag axis indices which represent the indices of the scale drag
        /// vector components which are affected by the scaler handle. The important thing to 
        /// remember is that the slider is only affected by the scale drag vector component with 
        /// index = ScaleDragAxisIndex.
        /// </param>
        public void RegisterScalerHandle(int handleId, IEnumerable<int> scaleDragAxisIndices)
        {
            if (!IsScalerHandleRegistered(handleId))
            {
                _scalerHandles.Add(new GizmoScalerHandle(handleId, scaleDragAxisIndices));
            }
        }

        /// <summary>
        /// Unregisters the scaler handle with the specified handle id. The function has no
        /// effect if a scaler handle with the specified id doesn't exist. After this function
        /// is called, any scale sessions which originate from the handle with the specified
        /// id will no longer affect the slider length.
        /// </summary>
        public void UnregisterScalerHandle(int handleId)
        {
            _scalerHandles.RemoveAll(item => item.HandleId == handleId);
        }

        /// <summary>
        /// Can be used to enable/disable snapping for all drag channels.
        /// </summary>
        public override void SetSnapEnabled(bool isEnabled)
        {
            _offsetDrag.IsSnapEnabled = isEnabled;
            _rotationDrag.IsSnapEnabled = isEnabled;
            _scaleDrag.IsSnapEnabled = isEnabled;
        }

        /// <summary>
        /// Sets the visibility state of the 3D cap. A visible cap will be rendered, and 
        /// it can also be hovered if it is set to be hoverable (see 'Set3DCapHoverable').
        /// </summary>
        public void Set3DCapVisible(bool isVisible)
        {
            _cap3D.SetVisible(isVisible);
        }

        /// <summary>
        /// Sets the hoverable state of the 3D cap. A hoverable cap can be hovered ONLY if 
        /// it is visible (see 'Set3DCapVisible'). So passing true to this function will only 
        /// allow the cap to be hovered if it is also visible.
        /// </summary>
        public void Set3DCapHoverable(bool isHoverable)
        {
            _cap3D.SetHoverable(isHoverable);
        }

        /// <summary>
        /// Sets the zoom factor transform. The world position of the zoom factor transform is
        /// used to calculate a slider zoom factor. The zoom factor is used in order to allow 
        /// the slider to maintain a constant size regardless of its distance from the camera.
        /// </summary>
        /// <param name="transform">
        /// The zoom factor transform. If null, the function will default to using the transform
        /// of the owner gizmo instead.
        /// </param>
        public void SetZoomFactorTransform(GizmoTransform transform)
        {
            Handle.SetZoomFactorTransform(transform);
        }

        /// <summary>
        /// Calculates and returns the slider zoom factor for the specified camera. The zoom factor 
        /// is calculated using the current zoom factor transform. See 'SetZoomFactorTransform'. This
        /// value can be useful for scaling different values such as sizes for example in order to
        /// allow them to have a constant magnitude in relation to the distance between the camera and
        /// the position of the zoom factor transform. The function returns a value of 1.0f if the look
        /// and feel settings have been set up to ignore the zoom factor.
        /// </summary>
        public float GetZoomFactor(Camera camera)
        {
            if (!LookAndFeel.UseZoomFactor) return 1.0f;
            return Handle.GetZoomFactor(camera);
        }

        /// <summary>
        /// Returns the real direction axis of the slider. This function has the same purpose as the
        /// 'Direction' property, but it also takes into account the scaling which is applied during
        /// a scale session which can cause the slider to point in the opposite direction. If you know 
        /// that a slider will never be used for scaling, you can use the 'Direction' property instead
        /// as it is faster.
        /// </summary>
        public Vector3 GetRealDirection()
        {
            float sign = 1.0f;
            if (_scaleDrag.IsActive) sign = Mathf.Sign(TotalDragScale);
            else 
            if (Gizmo.IsDragged && IsScalerHandleRegistered(Gizmo.DragHandleId, ScaleDragAxisIndex)) sign = Mathf.Sign(Gizmo.TotalDragScale[ScaleDragAxisIndex]);

            return Direction * sign;
        }

        /// <summary>
        /// Returns the size (length and thickness) of the slider along the specified direction
        /// axis. The function will take into accoun the look and feel settings such as the slider
        /// type (line, box, cylinder), scale and whether or not a zoom factor should be applied.
        /// </summary>
        /// <param name="camera">
        /// This is the camera needed to calculate the slider zoom factor if necessary.
        /// </param>
        /// <param name="direction">
        /// The direction along which the slider size will be calculated.
        /// </param>
        public float GetRealSizeAlongDirection(Camera camera, Vector3 direction)
        {
            return _controllers[(int)LookAndFeel.LineType].GetRealSizeAlongDirection(direction, GetZoomFactor(Gizmo.GetWorkCamera()));
        }

        /// <summary>
        /// Returns the real length of the slider. The real length takes into account all the look
        /// and feel settings such as length, scale and zoom factor and combines them to return a
        /// value that represents the real length of the slider. If the slider is participating in
        /// a scale drag session, the total scale applied since session begin will also be used to 
        /// calculate the length.
        /// </summary>
        /// <param name="zoomFactor">
        /// The slider's zoom factor. Can be calculated using 'GetZoomFactor'.
        /// </param>
        public float GetRealLength(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float length = LookAndFeel.Length * LookAndFeel.Scale * zoomFactor;
            if (_scaleDrag.IsActive) length *= _scaleDrag.TotalScale;
            else
            if (Gizmo.IsDragged && IsScalerHandleRegistered(Gizmo.DragHandleId, ScaleDragAxisIndex)) length *= Gizmo.TotalDragScale[ScaleDragAxisIndex];

            return length;
        }

        /// <summary>
        /// Same as 'GetRealLength', but it also takes the length of the 3D cap into account.
        /// </summary>
        /// <param name="zoomFactor">
        /// The slider's zoom factor. Can be calculated using 'GetZoomFactor'.
        /// </param>
        public float GetRealLengthWith3DCap(float zoomFactor)
        {
            return _cap3D.GetSliderAlignedRealLength(zoomFactor) + GetRealLength(zoomFactor);
        }

        /// <summary>
        /// Returns the slider's real end point. Works in pretty much the same way as
        /// 'GetRealLength' but it can be used to calculate the end point instead. In
        /// fact this function uses 'GetRealLength' under the hood to travel from the
        /// start poition to the end.
        /// </summary>
        /// <param name="zoomFactor">
        /// The slider's zoom factor. Can be calculated using 'GetZoomFactor'.
        /// </param>
        public Vector3 GetRealEndPosition(float zoomFactor)
        {
            return StartPosition + Direction * GetRealLength(zoomFactor);
        }

        /// <summary>
        /// Same as 'GetRealEndPosition' but it also takes into account the slider's 3D cap. 
        /// </summary>
        /// <param name="zoomFactor">
        /// The slider's zoom factor. Can be calculated using 'GetZoomFactor'.
        /// </param>
        public Vector3 GetRealEndPositionWith3DCap(float zoomFactor)
        {
            return StartPosition + Direction * GetRealLengthWith3DCap(zoomFactor);
        }

        /// <summary>
        /// Returns the real height of the slider's box. This is useful when the slider 
        /// type is set to box and you need to know the real height of the box. The real
        /// height takes into account scale and zoom factor if necessary.
        /// </summary>
        /// <param name="zoomFactor">
        /// The slider's zoom factor. Can be calculated using 'GetZoomFactor'.
        /// </param>
        public float GetRealBoxHeight(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.BoxHeight * LookAndFeel.Scale * zoomFactor;
        }

        /// <summary>
        /// Returns the real depth of the slider's box. This is useful when the slider 
        /// type is set to box and you need to know the real depth of the box. The real
        /// depth takes into account scale and zoom factor if necessary.
        /// </summary>
        /// <param name="zoomFactor">
        /// The slider's zoom factor. Can be calculated using 'GetZoomFactor'.
        /// </param>
        public float GetRealBoxDepth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.BoxDepth * LookAndFeel.Scale * zoomFactor;
        }

        /// <summary>
        /// Returns the real radius of the slider's cylinder. This is useful when the 
        /// slider type is set to cylinder and you need to know the real radius. The real
        /// radius takes into account scale and zoom factor if necessary.
        /// </summary>
        /// <param name="zoomFactor">
        /// The slider's zoom factor. Can be calculated using 'GetZoomFactor'.
        /// </param>
        public float GetRealCylinderRadius(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.CylinderRadius * LookAndFeel.Scale * zoomFactor;
        }

        /// <summary>
        /// This function can be used to link the slider's direction axis to one its transform
        /// axes. For example, if you wish the direction axis to always point along the slider's
        /// transform up vector, you would call MapDirection(1, AxisSign.Positive). Linking the
        /// direction axis to the slider's transform like this has the advantage that no matter
        /// how the slider is rotated, the direction axis will follow. The function has no effect
        /// if the slider is currently involved in a drag operation.
        /// </summary>
        /// <param name="axisIndex">
        /// The index of the slider transform axis which will act as the direction axis. The format
        /// is: 0->X, 1->Y, 2->Z.
        /// </param>
        /// <param name="axisSign">
        /// The sign of the axis. Allows you to differentiate between positive and negative axes.
        /// </param>
        public void MapDirection(int axisIndex, AxisSign axisSign)
        {
            if (IsDragged) return;
            _directionAxisMap.Map(_transform, axisIndex, axisSign);
        }

        /// <summary>
        /// Similar to 'MapDirection', but this function applies to the slider's drag rotation axis.
        /// This is the axis around which the slider will rotate during a rotation session. The other
        /// difference is that this function requires you to pass a transform and the rest of the 
        /// parameters identify the axis inside this transform. The function has no effect if the slider
        /// is currently involved in a drag operation.
        /// </summary>
        public void MapDragRotationAxis(GizmoTransform mapTransform, int axisIndex, AxisSign axisSign)
        {
            if (IsDragged) return;
            _dragRotationAxisMap.Map(mapTransform, axisIndex, axisSign);
        }

        /// <summary>
        /// Removes the mapping for the drag rotation axis which was created using a previous call
        /// to 'MapDragRotationAxis'. The function has no effect if the slider is currently involved 
        /// in a drag operation.
        /// </summary>
        public void UnmapDragRotationAxis()
        {
            if (IsDragged) return;
            _dragRotationAxisMap.Unmap();
        }

        /// <summary>
        /// Sets the direction of the slider. This is useful when you have access to a direction 
        /// vector and you would like the slider to point along this vector. Calling this function
        /// will change the slider transform's rotation in order to align the direction axis with
        /// the desired vector. The function has no effect if the slider is currently involved in 
        /// a drag operation.
        /// </summary>
        /// <param name="directionAxis">
        /// The slider's direction axis. The function will automatically normalize this vector.
        /// </param>
        public void SetDirection(Vector3 directionAxis)
        {
            if (IsDragged) return;
            _directionAxisMap.SetAxis(directionAxis);
        }

        /// <summary>
        /// Sets the drag rotation axis. This is useful when you have access to a rotation axis 
        /// vector and you would like to use that during rotation sessions. Calling this function
        /// will cancel the mapping created via a previous call to 'MapDragRotationAxis'. The 
        /// function has no effect if the slider is currently involved in a drag operation.
        /// </summary>
        /// <param name="rotationAxis"></param>
        public void SetDragRotationAxis(Vector3 rotationAxis)
        {
            if (IsDragged) return;

            _dragRotationAxisMap.Unmap();
            _dragRotationAxisMap.SetAxis(rotationAxis);
        }

        /// <summary>
        /// Call this function when you have a transform that you would like to be affected
        /// by the slider's drag sessions. After calling this function, the world position and
        /// rotation of the specified transform will be affected by the slider's offset and
        /// rotation drag sessions. The function has no effect if the transform has already
        /// been registered via a previous call to 'AddTargetTransform'.
        /// </summary>
        public void AddTargetTransform(GizmoTransform transform)
        {
            _offsetDrag.AddTargetTransform(transform);
            _rotationDrag.AddTargetTransform(transform);
            _scaleDrag.AddTargetTransform(transform);
        }

        /// <summary>
        /// Call this function when you have a transform that you would like to be affected
        /// by one of the slider's drag sessions. The specified drag channel identifies the
        /// type of session that will affect the specified transform. The function has no 
        /// effect if the transform has already been registered via a previous call to 
        /// 'AddTargetTransform'. 
        /// </summary>
        public void AddTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel)
        {
            if (dragChannel == GizmoDragChannel.Offset) _offsetDrag.AddTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Rotation) _rotationDrag.AddTargetTransform(transform);
            else if (_dragChannel == GizmoDragChannel.Scale) _scaleDrag.AddTargetTransform(transform);
        }

        /// <summary>
        /// Removes the specified target transform. After this function is called, the specified
        /// transform will no longer be affected by any of the slider's drag sessions.
        /// </summary>
        public void RemoveTargetTransform(GizmoTransform transform)
        {
            _offsetDrag.RemoveTargetTransform(transform);
            _rotationDrag.RemoveTargetTransform(transform);
            _scaleDrag.RemoveTargetTransform(transform);
        }

        /// <summary>
        /// Removes the specified target transform. After this function is called, the specified
        /// transform will no longer be affected by the drag session which corresponds to the 
        /// specified drag channel.
        /// </summary>
        public void RemoveTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel)
        {
            if (dragChannel == GizmoDragChannel.Offset) _offsetDrag.RemoveTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Rotation) _rotationDrag.RemoveTargetTransform(transform);
            else if (_dragChannel == GizmoDragChannel.Scale) _scaleDrag.RemoveTargetTransform(transform);
        }

        /// <summary>
        /// Sets the slider's drag channel. This is how the client code can switch between an offset
        /// slider, a rotation slider or a scale slider.
        /// </summary>
        public void SetDragChannel(GizmoDragChannel dragChannel)
        {   
            _dragChannel = dragChannel;
            if (_dragChannel == GizmoDragChannel.Offset) _selectedDragSession = _offsetDrag;
            else if (_dragChannel == GizmoDragChannel.Rotation) _selectedDragSession = _rotationDrag;
            else if (_dragChannel == GizmoDragChannel.Scale) _selectedDragSession = _scaleDrag;

            Handle.DragSession = _selectedDragSession;
            _cap3D.DragSession = _selectedDragSession;
        }

        /// <summary>
        /// This function calculates the slider's zoom factor for the specified camera and uses
        /// it to adjust the slider shape transforms such as size for example. The zoom factor
        /// is automatically applied during each gizmo 'UpdateBegin' step, so the ONLY time when
        /// this function should be called is when more than one camera can render the slider.
        /// In that case, before calling 'Render, the client code should call this function to
        /// ensure that the slider is rendered correctly. The function has no effect if the look
        /// and feel settings' 'UseZoomFactor' property returns false.
        /// </summary>
        public void ApplyZoomFactor(Camera camera)
        {
            if (LookAndFeel.UseZoomFactor)
            {
                float zoomFactor = GetZoomFactor(camera);
                _controllers[(int)LookAndFeel.LineType].UpdateTransforms(zoomFactor);

                _cap3D.ApplyZoomFactor(camera);
                _cap3D.CapSlider3D(GetRealDirection(), GetRealEndPosition(zoomFactor));
            }
        }

        /// <summary>
        /// Renders the slider with the specified camera. This function should be called
        /// directly or indirectly from a Monobehaviour's 'OnRenderObject' function.
        /// </summary>
        public override void Render(Camera camera)
        {
            if (!IsVisible && !Is3DCapVisible) return;

            Color color = new Color();
            if (!OverrideColor.IsActive)
            {
                if (Gizmo.HoverHandleId == HandleId) color = LookAndFeel.HoveredColor;
                else color = LookAndFeel.Color;
            }
            else color = OverrideColor.Color;

            if (LookAndFeel.IsRotationArcVisible && IsRotating)
            {
                _rotationArc.RotationAngle = _rotationDrag.TotalRotation;
                _rotationArc.Radius = GetRealLength(GetZoomFactor(camera));
                _rotationArc.Render(LookAndFeel.RotationArcLookAndFeel);
            }

            bool renderCapFirst = !camera.IsPointFacingCamera(GetRealEndPosition(GetZoomFactor(camera)), GetRealDirection());
            if (Is3DCapVisible && renderCapFirst) _cap3D.Render(camera);

            if (IsVisible)
            {
                if (LookAndFeel.FillMode == GizmoFillMode3D.Filled)
                {
                    bool isLit = LookAndFeel.ShadeMode == GizmoShadeMode.Lit && LookAndFeel.LineType != GizmoLine3DType.Thin;

                    GizmoSolidMaterial solidMaterial = GizmoSolidMaterial.Get;
                    solidMaterial.ResetValuesToSensibleDefaults();
                    solidMaterial.SetLit(isLit);
                    if (isLit) solidMaterial.SetLightDirection(camera.transform.forward);
                    solidMaterial.SetColor(color);
                    solidMaterial.SetPass(0);

                    Handle.Render3DSolid();
                }
                else
                {
                    GizmoLineMaterial lineMaterial = GizmoLineMaterial.Get;
                    lineMaterial.ResetValuesToSensibleDefaults();
                    lineMaterial.SetColor(color);
                    lineMaterial.SetPass(0);

                    Handle.Render3DWire();
                }
            }

            if (Is3DCapVisible && !renderCapFirst) _cap3D.Render(camera);
        }

        /// <summary>
        /// This function can be called after changing functional or look and feel settings
        /// to ensure that these settings take effect.
        /// </summary>
        public void Refresh()
        {
            Camera camera = Gizmo.GetWorkCamera();
            float zoomFactor = GetZoomFactor(camera);

            _controllers[(int)LookAndFeel.LineType].UpdateHandles();
            _controllers[(int)LookAndFeel.LineType].UpdateEpsilons(zoomFactor);
            _controllers[(int)LookAndFeel.LineType].UpdateTransforms(zoomFactor);
            _cap3D.CapSlider3D(GetRealDirection(), GetRealEndPosition(zoomFactor));
        }

        protected override void OnVisibilityStateChanged()
        {
            _controllers[(int)LookAndFeel.LineType].UpdateHandles();
            Camera camera = Gizmo.GetWorkCamera();
            float zoomFactor = GetZoomFactor(camera);

            _controllers[(int)LookAndFeel.LineType].UpdateEpsilons(zoomFactor);
            _controllers[(int)LookAndFeel.LineType].UpdateTransforms(zoomFactor);
            _cap3D.CapSlider3D(GetRealDirection(), GetRealEndPosition(zoomFactor));
        }

        protected override void OnHoverableStateChanged()
        {
            Handle.SetHoverable(IsHoverable);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            int controllerIndex = (int)LookAndFeel.LineType;
            _controllers[controllerIndex].UpdateHandles();

            float zoomFactor = GetZoomFactor(gizmo.FocusCamera);
            _offsetDrag.Sensitivity = Settings.OffsetSensitivity;
            _rotationDrag.Sensitivity = Settings.RotationSensitivity;
            _scaleDrag.Sensitivity = Settings.ScaleSensitivity;
            _controllers[controllerIndex].UpdateTransforms(zoomFactor);
            _controllers[controllerIndex].UpdateEpsilons(zoomFactor);

            _cap3D.GenericHoverPriority.Value = GenericHoverPriority.Value;
            _cap3D.HoverPriority2D.Value = HoverPriority2D.Value;
            _cap3D.HoverPriority3D.Value = HoverPriority3D.Value;
            _cap3D.CapSlider3D(GetRealDirection(), GetRealEndPosition(zoomFactor));
        }

        private void OnGizmoAttemptHandleDragBegin(Gizmo gizmo, int handleId)
        { 
            if (handleId == Handle.Id || handleId == _cap3D.HandleId)
            {
                if (_dragChannel == GizmoDragChannel.Offset)
                {
                    // We need to tell the session about the data that it needs in order to do its work
                    GizmoSglAxisOffsetDrag3D.WorkData workData = new GizmoSglAxisOffsetDrag3D.WorkData();
                    workData.Axis = Direction;                              // The offset session will offset along the slider direction
                    workData.DragOrigin = StartPosition;                    // The point on the drag plane is the slider's start point
                    workData.SnapStep = Settings.OffsetSnapStep;            // Use the snap step stored in the slider settings
                    _offsetDrag.SetWorkData(workData);                      // Set the work data
                }
                else
                if (_dragChannel == GizmoDragChannel.Rotation)
                {
                    // We need to tell the session about the data that it needs in order to do its work
                    GizmoSglAxisRotationDrag3D.WorkData workData = new GizmoSglAxisRotationDrag3D.WorkData();
                    workData.Axis = DragRotationAxis;                       // The rotation session will rotate around the drag rotation axis
                    workData.RotationPlanePos = StartPosition;              // The point on the rotation plane is the slider's start point
                    workData.SnapStep = Settings.RotationSnapStep;          // Use the snap step stored in the slider settings
                    workData.SnapMode = Settings.RotationSnapMode;          // Use the snap mode stored in the slider settings
                    _rotationDrag.SetWorkData(workData);                    // Set the work data

                    // Configure the rotation arc plane
                    _rotationArc.SetArcData(DragRotationAxis, StartPosition, StartPosition + Direction, GetRealLength(GetZoomFactor(Gizmo.FocusCamera)));
                }
                else
                if (_dragChannel == GizmoDragChannel.Scale)
                {
                    // We need to tell the session about the data that it needs in order to do its work
                    GizmoSglAxisScaleDrag3D.WorkData workData = new GizmoSglAxisScaleDrag3D.WorkData();
                    workData.Axis = Direction;                                              // The scale session will scale along the slider direction
                    workData.DragOrigin = StartPosition;                                    // The point on the drag plane is the slider's start point
                    workData.SnapStep = Settings.ScaleSnapStep;                             // Use the snap step stored in the slider settings
                    workData.AxisIndex = ScaleDragAxisIndex;                                // We want the slider to store the scale output in the component with the specified index.
                    workData.EntityScale = 1.0f;

                    _scaleDrag.SetWorkData(workData);                                       // Set the work data
                }
            }
        }

        private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            if (changeData.ChangeReason == GizmoTransform.ChangeReason.ParentChange || 
                changeData.TRSDimension == GizmoDimension.Dim3D)
            {
                Camera camera = Gizmo.GetWorkCamera();
                float zoomFactor = GetZoomFactor(camera);

                _controllers[(int)LookAndFeel.LineType].UpdateTransforms(zoomFactor);
                _cap3D.CapSlider3D(GetRealDirection(), GetRealEndPosition(zoomFactor));
            }
        }

        private void OnGizmoHandleHoverEnter(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId)
            {
                _cap3D.OverrideColor.IsActive = true;
                _cap3D.OverrideColor.Color = LookAndFeel.CapLookAndFeel.HoveredColor;
            }
            else
            if (handleId == _cap3D.HandleId)
            {
                OverrideColor.IsActive = true;
                OverrideColor.Color = LookAndFeel.HoveredColor;
            }
        }

        private void OnGizmoPostEnabled(Gizmo gizmo)
        {
            Refresh();
        }

        private void OnGizmoPostDisabled(Gizmo gizmo)
        {
            OverrideColor.IsActive = false;
            _cap3D.OverrideColor.IsActive = false;
        }

        private void OnGizmoHandleHoverExit(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId) _cap3D.OverrideColor.IsActive = false;
            else if (handleId == _cap3D.HandleId) OverrideColor.IsActive = false;
        }

        private void SetupSharedLookAndFeel()
        {
            _cap3D.SharedLookAndFeel = LookAndFeel.CapLookAndFeel;
        }
    }
}
