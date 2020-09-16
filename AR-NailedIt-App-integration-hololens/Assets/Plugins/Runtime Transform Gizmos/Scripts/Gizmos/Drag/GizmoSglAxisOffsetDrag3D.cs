using System;
using UnityEngine;

namespace RTG
{
    public class GizmoSglAxisOffsetDrag3D : GizmoPlaneDrag3D
    {
        public struct WorkData
        {
            public Vector3 DragOrigin;
            public Vector3 Axis;
            public float SnapStep;
        }

        private float _accumSnapDrag;
        private WorkData _workData;

        public Vector3 Axis { get { return _workData.Axis; } }
        public override GizmoDragChannel DragChannel { get { return GizmoDragChannel.Offset; } }

        public void SetWorkData(WorkData workData)
        {
            if (!IsActive) _workData = workData;
        }

        protected override Plane CalculateDragPlane()
        {
            return PlaneEx.GetCameraFacingAxisSlicePlane(_workData.DragOrigin, _workData.Axis, RTFocusCamera.Get.TargetCamera);
        }

        protected override void CalculateDragValues()
        {
            float dragAlongAxis = _planeDragSession.DragDelta.Dot(_workData.Axis);
            if (CanSnap())
            {
                _relativeDragOffset = Vector3.zero;

                _accumSnapDrag += dragAlongAxis;
                if(SnapMath.CanExtractSnap(_workData.SnapStep, _accumSnapDrag))
                {
                    float snapAmount = SnapMath.ExtractSnap(_workData.SnapStep, ref _accumSnapDrag);
                    _relativeDragOffset = _workData.Axis * snapAmount;
                }
            }
            else
            {
                _accumSnapDrag = 0.0f;
                _relativeDragOffset = _workData.Axis * dragAlongAxis * Sensitivity;
            }

            _totalDragOffset += _relativeDragOffset;
        }

        protected override void OnSessionEnd()
        {
            _accumSnapDrag = 0.0f;
        }
    }
}
