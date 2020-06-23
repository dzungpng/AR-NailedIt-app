using System;
using UnityEngine;

namespace RTG
{
    public class GizmoDblAxisRotationDrag3D : GizmoScreenDrag
    {
        public struct WorkData
        {
            public Vector2 ScreenAxis0;
            public Vector2 ScreenAxis1;
            public Vector3 Axis0;
            public Vector3 Axis1;
            public GizmoSnapMode SnapMode;
            public float SnapStep0;
            public float SnapStep1;
        }

        private WorkData _workData;

        private bool _adjustRotationForAbsSnap;
        private float _accumSnapDrag0;
        private float _accumSnapDrag1;
        private float _relativeRotation0;
        private float _relativeRotation1;
        private float _totalRotation0;
        private float _totalRotation1;

        public override GizmoDragChannel DragChannel { get { return GizmoDragChannel.Rotation; } }
        public float RelativeRotation0 { get { return _relativeRotation0; } }
        public float RelativeRotation1 { get { return _relativeRotation1; } }
        public float TotalRotation0 { get { return _totalRotation0; } }
        public float TotalRotation1 { get { return _totalRotation1; } }

        public void SetWorkData(WorkData workData)
        {
            if (!IsActive) _workData = workData;
        }

        protected override void CalculateDragValues()
        {
            IInputDevice inputDevice = RTInputDevice.Get.Device;
            Vector2 inputDeviceDelta = inputDevice.GetFrameDelta();

            _relativeRotation0 = Vector2.Dot(inputDeviceDelta, _workData.ScreenAxis0) * Sensitivity;
            _relativeRotation1 = Vector2.Dot(inputDeviceDelta, _workData.ScreenAxis1) * Sensitivity;

            if (_relativeRotation0 == 0.0f && _relativeRotation1 == 0.0f)
            {
                _relativeDragRotation = Quaternion.identity;
                return;
            }

            if(CanSnap())
            {
                _accumSnapDrag0 += _relativeRotation0;
                _accumSnapDrag0 %= 360.0f;

                _accumSnapDrag1 += _relativeRotation1;
                _accumSnapDrag1 %= 360.0f;

                if (_workData.SnapMode == GizmoSnapMode.Absolute && _adjustRotationForAbsSnap)
                {
                    NumSnapSteps numSnapSteps = SnapMath.CalculateNumSnapSteps(_workData.SnapStep0, _totalRotation0);
                    float oldRotation = _totalRotation0;
                    if (numSnapSteps.AbsFracSteps < 0.5f) _totalRotation0 = numSnapSteps.AbsIntNumSteps * _workData.SnapStep0 * Mathf.Sign(_totalRotation0);
                    else _totalRotation0 = (numSnapSteps.AbsIntNumSteps + 1) * _workData.SnapStep0 * Mathf.Sign(_totalRotation0);

                    _accumSnapDrag0 = 0.0f;
                    _relativeRotation0 = _totalRotation0 - oldRotation;

                    numSnapSteps = SnapMath.CalculateNumSnapSteps(_workData.SnapStep1, _totalRotation1);
                    oldRotation = _totalRotation1;
                    if (numSnapSteps.AbsFracSteps < 0.5f) _totalRotation1 = numSnapSteps.AbsIntNumSteps * _workData.SnapStep1 * Mathf.Sign(_totalRotation1);
                    else _totalRotation1 = (numSnapSteps.AbsIntNumSteps + 1) * _workData.SnapStep1 * Mathf.Sign(_totalRotation1);

                    _accumSnapDrag1 = 0.0f;
                    _relativeRotation1 = _totalRotation1 - oldRotation;
                    _relativeDragRotation = Quaternion.AngleAxis(_relativeRotation1, _workData.Axis1) * Quaternion.AngleAxis(_relativeRotation0, _workData.Axis0);

                    _adjustRotationForAbsSnap = false;
                }
                else
                {
                    _relativeDragRotation = Quaternion.identity;

                    if (SnapMath.CanExtractSnap(_workData.SnapStep0, _accumSnapDrag0))
                    {
                        _relativeRotation0 = SnapMath.ExtractSnap(_workData.SnapStep0, ref _accumSnapDrag0);
                        _totalRotation0 += _relativeRotation0;
                        _totalRotation0 %= 360.0f;

                        _relativeDragRotation = Quaternion.AngleAxis(_relativeRotation0, _workData.Axis0);
                    }

                    if (SnapMath.CanExtractSnap(_workData.SnapStep1, _accumSnapDrag1))
                    {
                        _relativeRotation1 = SnapMath.ExtractSnap(_workData.SnapStep1, ref _accumSnapDrag1);
                        _totalRotation1 += _relativeRotation1;
                        _totalRotation1 %= 360.0f;

                        _relativeDragRotation = Quaternion.AngleAxis(_relativeRotation1, _workData.Axis1) * _relativeDragRotation;
                    }
                }
            }
            else
            {
                _adjustRotationForAbsSnap = true;
                _accumSnapDrag0 = _accumSnapDrag1 = 0.0f;

                _totalRotation0 += _relativeRotation0;
                _totalRotation1 += _relativeRotation1;

                _relativeDragRotation = Quaternion.AngleAxis(_relativeRotation1, _workData.Axis1) * Quaternion.AngleAxis(_relativeRotation0, _workData.Axis0);
            }

            _totalDragRotation = _relativeDragRotation * _totalDragRotation;
        }

        protected override void OnSessionEnd()
        {
            _accumSnapDrag0 = 0.0f;
            _accumSnapDrag1 = 0.0f;
            _relativeRotation0 = 0.0f;
            _relativeRotation1 = 0.0f;
            _totalRotation0 = 0.0f;
            _totalRotation1 = 0.0f;
        }
    }
}