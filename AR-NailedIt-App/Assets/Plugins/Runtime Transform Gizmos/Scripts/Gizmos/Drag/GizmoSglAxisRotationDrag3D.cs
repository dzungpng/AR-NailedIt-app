using System;
using UnityEngine;

namespace RTG
{
    public class GizmoSglAxisRotationDrag3D : GizmoScreenDrag
    {
        public struct WorkData
        {
            public Vector3 RotationPlanePos;
            public Vector3 Axis;
            public GizmoSnapMode SnapMode;
            public float SnapStep;
        }

        private float _accumSnapDrag;
        private Plane _rotationPlane;
        private Vector3 _screenDragCircleTangent;
        private WorkData _workData;

        private bool _adjustRotationForAbsSnap;
        private float _relativeRotation;
        private float _totalRotation;

        public override GizmoDragChannel DragChannel { get { return GizmoDragChannel.Rotation; } }
        public float RelativeRotation { get { return _relativeRotation; } }
        public float TotalRotation { get { return _totalRotation; } }
        public Plane RotationPlane { get { return _rotationPlane; } }

        public void SetWorkData(WorkData workData)
        {
            if (!IsActive)
            {
                _workData = workData;
                _rotationPlane = new Plane(_workData.Axis, _workData.RotationPlanePos);
            }
        }

        protected override void CalculateDragValues()
        {
            IInputDevice inputDevice = RTInputDevice.Get.Device;
            _relativeRotation = Vector2.Dot(_screenDragCircleTangent, inputDevice.GetFrameDelta()) * Sensitivity;

            if (_relativeRotation == 0.0f)
            {
                _relativeDragRotation = Quaternion.identity;
                return;
            }

            if(CanSnap())
            {
                _accumSnapDrag += _relativeRotation;
                _accumSnapDrag %= 360.0f;

                if (_workData.SnapMode == GizmoSnapMode.Absolute && _adjustRotationForAbsSnap)
                {
                    NumSnapSteps numSnapSteps = SnapMath.CalculateNumSnapSteps(_workData.SnapStep, _totalRotation);

                    float oldRotation = _totalRotation;
                    if (numSnapSteps.AbsFracSteps < 0.5f) _totalRotation = numSnapSteps.AbsIntNumSteps * _workData.SnapStep * Mathf.Sign(_totalRotation);
                    else _totalRotation = (numSnapSteps.AbsIntNumSteps + 1) * _workData.SnapStep * Mathf.Sign(_totalRotation);

                    _relativeRotation = _totalRotation - oldRotation;
                    _accumSnapDrag = 0.0f;

                    _relativeDragRotation = Quaternion.AngleAxis(_relativeRotation, _workData.Axis);
                    _adjustRotationForAbsSnap = false;
                }
                else
                if (SnapMath.CanExtractSnap(_workData.SnapStep, _accumSnapDrag))
                {
                    _relativeRotation = SnapMath.ExtractSnap(_workData.SnapStep, ref _accumSnapDrag);
                    _totalRotation += _relativeRotation;
                    _totalRotation %= 360.0f;

                    _relativeDragRotation = Quaternion.AngleAxis(_relativeRotation, _workData.Axis);
                }
                else _relativeDragRotation = Quaternion.identity;
            }
            else
            {
                _accumSnapDrag = 0.0f;
                _adjustRotationForAbsSnap = true;

                _totalRotation += _relativeRotation;
                _totalRotation %= 360.0f;

                _relativeDragRotation = Quaternion.AngleAxis(_relativeRotation, _workData.Axis);
            }

            _totalDragRotation = Quaternion.AngleAxis(_totalRotation, _workData.Axis);
        }

        protected override void OnSessionBegin()
        {
            Camera focusCamera = RTFocusCamera.Get.TargetCamera;
            _adjustRotationForAbsSnap = false;

            GizmoHoverInfo gizmoHoverInfo = RTGizmosEngine.Get.HoveredGizmo.HoverInfo;
            if (gizmoHoverInfo.HandleDimension == GizmoDimension.Dim3D)
            {
                float t;
                Ray ray = RTInputDevice.Get.Device.GetRay(focusCamera);
                if (_rotationPlane.Raycast(ray, out t))
                {
                    Vector3 intersectPoint = ray.GetPoint(t);
                    Vector3 toHoverPoint = (intersectPoint - _workData.RotationPlanePos);
                    Vector3 circleTangent3D = Vector3.Cross(_workData.Axis, toHoverPoint);

                    Vector2 screenTangentBegin = focusCamera.WorldToScreenPoint(intersectPoint);
                    Vector2 screenTangentEnd = focusCamera.WorldToScreenPoint(intersectPoint + circleTangent3D);
                    _screenDragCircleTangent = (screenTangentEnd - screenTangentBegin).normalized;
                }
            }
            else
            {
                Vector2 inputDevicePos = RTInputDevice.Get.Device.GetPositionYAxisUp();
                Vector2 screenPtOnPlane = focusCamera.WorldToScreenPoint(_workData.RotationPlanePos);
                _screenDragCircleTangent = (inputDevicePos - screenPtOnPlane).GetNormal();
            }
        }

        protected override void OnSessionEnd()
        {
            _accumSnapDrag = 0.0f;
            _screenDragCircleTangent = Vector2.zero;
            _adjustRotationForAbsSnap = false;
            _totalRotation = 0.0f;
            _relativeRotation = 0.0f;
        }
    }
}
