using UnityEngine;

namespace RTG
{
    public class GizmoCap3D : GizmoCap
    {
        private int _coneIndex;
        private ConeShape3D _cone = new ConeShape3D();
        private int _pyramidIndex;
        private PyramidShape3D _pyramid = new PyramidShape3D();
        private int _boxIndex;
        private BoxShape3D _box = new BoxShape3D();
        private int _sphereIndex;
        private SphereShape3D _sphere = new SphereShape3D();
        private int _trPrismIndex;
        private TriangPrismShape3D _trPrism = new TriangPrismShape3D();

        private GizmoCap3DControllerData _controllerData = new GizmoCap3DControllerData();
        private IGizmoCap3DController[] _controllers = new IGizmoCap3DController[System.Enum.GetValues(typeof(GizmoCap3DType)).Length];

        private GizmoTransform _transform = new GizmoTransform();
        private GizmoOverrideColor _overrideColor = new GizmoOverrideColor();

        private GizmoCap3DLookAndFeel _lookAndFeel = new GizmoCap3DLookAndFeel();
        private GizmoCap3DLookAndFeel _sharedLookAndFeel;

        public Vector3 Position { get { return _transform.Position3D; } set { _transform.Position3D = value; } }
        public Quaternion Rotation { get { return _transform.Rotation3D; } set { _transform.Rotation3D = value; } }
        public GizmoOverrideColor OverrideColor { get { return _overrideColor; } }
        public IGizmoDragSession DragSession { get { return Handle.DragSession; } set { Handle.DragSession = value; } }
        public GizmoCap3DLookAndFeel LookAndFeel { get { return _sharedLookAndFeel != null ? _sharedLookAndFeel : _lookAndFeel; } }
        public GizmoCap3DLookAndFeel SharedLookAndFeel { get { return _sharedLookAndFeel; } set { _sharedLookAndFeel = value; } }
       
        public GizmoCap3D(Gizmo gizmo, int handleId)
            :base(gizmo, handleId)
        {
            _coneIndex = Handle.Add3DShape(_cone);
            _pyramidIndex = Handle.Add3DShape(_pyramid);
            _boxIndex = Handle.Add3DShape(_box);
            _sphereIndex = Handle.Add3DShape(_sphere);
            _trPrismIndex = Handle.Add3DShape(_trPrism);

            SetZoomFactorTransform(_transform);
           
            _controllerData.Gizmo = Gizmo;
            _controllerData.Cap = this;
            _controllerData.CapHandle = Handle;
            _controllerData.Cone = _cone;
            _controllerData.ConeIndex = _coneIndex;
            _controllerData.Pyramid = _pyramid;
            _controllerData.PyramidIndex = _pyramidIndex;
            _controllerData.Box = _box;
            _controllerData.BoxIndex = _boxIndex;
            _controllerData.Sphere = _sphere;
            _controllerData.SphereIndex = _sphereIndex;
            _controllerData.TrPrism = _trPrism;
            _controllerData.TrPrismIndex = _trPrismIndex;

            _controllers[(int)GizmoCap3DType.Cone] = new GizmoConeCap3DController(_controllerData);
            _controllers[(int)GizmoCap3DType.Pyramid] = new GizmoPyramidCap3DController(_controllerData);
            _controllers[(int)GizmoCap3DType.Box] = new GizmoBoxCap3DController(_controllerData);
            _controllers[(int)GizmoCap3DType.Sphere] = new GizmoSphereCap3DController(_controllerData);
            _controllers[(int)GizmoCap3DType.TriangPrism] = new GizmoTriPrismCap3DController(_controllerData);

            _transform.Changed += OnTransformChanged;
            _transform.SetParent(Gizmo.Transform);
            Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            Gizmo.PostEnabled += OnGizmoPostEnabled;
            Gizmo.PostDisabled += OnGizmoPostDisabled;
        }

        public void RegisterTransformAsDragTarget(IGizmoDragSession dragSession)
        {
            dragSession.AddTargetTransform(_transform);
        }

        public void UnregisterTransformAsDragTarget(IGizmoDragSession dragSession)
        {
            dragSession.RemoveTargetTransform(_transform);
        }

        public void AlignTransformAxis(int axisIndex, AxisSign axisSign, Vector3 axis)
        {
            _transform.AlignAxis3D(axisIndex, axisSign, axis);
        }

        public void SetZoomFactorTransform(GizmoTransform transform)
        {
            Handle.SetZoomFactorTransform(transform);
        }

        public void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt)
        {
            _controllers[(int)LookAndFeel.CapType].CapSlider3D(sliderDirection, sliderEndPt, GetZoomFactor(Gizmo.GetWorkCamera()));
        }

        public void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt)
        {
            _controllers[(int)LookAndFeel.CapType].CapSlider3DInvert(sliderDirection, sliderEndPt, GetZoomFactor(Gizmo.GetWorkCamera()));
        }

        public float GetSliderAlignedRealLength(float zoomFactor)
        {
            return _controllers[(int)LookAndFeel.CapType].GetSliderAlignedRealLength(zoomFactor);
        }

        public float GetZoomFactor(Camera camera)
        {
            if (!LookAndFeel.UseZoomFactor) return 1.0f;
            return Handle.GetZoomFactor(camera);
        }

        public float GetRealConeHeight(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.ConeHeight * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealConeRadius(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.ConeRadius * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealPyramidWidth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.PyramidWidth * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealPyramidDepth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.PyramidDepth * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealPyramidHeight(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.PyramidHeight * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealBoxWidth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.BoxWidth * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealBoxHeight(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.BoxHeight * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealBoxDepth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.BoxDepth * LookAndFeel.Scale * zoomFactor;
        }

        public Vector3 GetRealBoxSize(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return new Vector3(LookAndFeel.BoxWidth, LookAndFeel.BoxHeight, LookAndFeel.BoxDepth) * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealSphereRadius(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.SphereRadius * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealTriPrismWidth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.TrPrismWidth * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealTriPrismHeight(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.TrPrismHeight * LookAndFeel.Scale * zoomFactor;
        }

        public float GetRealTriPrismDepth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;
            return LookAndFeel.TrPrismDepth * LookAndFeel.Scale * zoomFactor;
        }

        public void ApplyZoomFactor(Camera camera)
        {
            if (LookAndFeel.UseZoomFactor)
            {
                _controllers[(int)LookAndFeel.CapType].UpdateTransforms(GetZoomFactor(camera));
            }
        }

        public override void Render(Camera camera)
        {
            if (!IsVisible) return;

            Color color = new Color();
            if (!OverrideColor.IsActive)
            {
                if (Gizmo.IsHovered && Gizmo.HoverInfo.HandleId == HandleId) color = LookAndFeel.HoveredColor;
                else color = LookAndFeel.Color;
            }
            else color = OverrideColor.Color;

            if (LookAndFeel.FillMode == GizmoFillMode3D.Filled)
            {
                bool isLit = LookAndFeel.ShadeMode == GizmoShadeMode.Lit;

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

            if (LookAndFeel.CapType == GizmoCap3DType.Sphere && LookAndFeel.IsSphereBorderVisible)
            {
                GizmoLineMaterial lineMaterial = GizmoLineMaterial.Get;
                lineMaterial.ResetValuesToSensibleDefaults();
                lineMaterial.SetColor(LookAndFeel.SphereBorderColor);
                lineMaterial.SetPass(0);

                GLRenderer.DrawSphereBorder(camera, Position, GetRealSphereRadius(GetZoomFactor(camera)), LookAndFeel.NumSphereBorderPoints);
            }
        }

        public void Refresh()
        {
            Camera camera = Gizmo.GetWorkCamera();
            float zoomFactor = GetZoomFactor(camera);

            _controllers[(int)LookAndFeel.CapType].UpdateHandles();
            _controllers[(int)LookAndFeel.CapType].UpdateTransforms(zoomFactor);
        }

        protected override void OnVisibilityStateChanged()
        {
            _controllers[(int)LookAndFeel.CapType].UpdateHandles();

            Camera camera = Gizmo.GetWorkCamera();
            _controllers[(int)LookAndFeel.CapType].UpdateTransforms(GetZoomFactor(camera));
        }

        protected override void OnHoverableStateChanged()
        {
            Handle.SetHoverable(IsHoverable);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            int controllerIndex = (int)LookAndFeel.CapType;
            _controllers[controllerIndex].UpdateHandles();
            _controllers[controllerIndex].UpdateTransforms(GetZoomFactor(Gizmo.FocusCamera));
        }

        private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            if (changeData.ChangeReason == GizmoTransform.ChangeReason.ParentChange || 
                changeData.TRSDimension == GizmoDimension.Dim3D) _controllers[(int)LookAndFeel.CapType].UpdateTransforms(GetZoomFactor(Gizmo.GetWorkCamera()));
        }

        private void OnGizmoPostEnabled(Gizmo gizmo)
        {
            Refresh();
        }

        private void OnGizmoPostDisabled(Gizmo gizmo)
        {
            OverrideColor.IsActive = false;
        }
    }
}
