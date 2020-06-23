using UnityEngine;

namespace RTG
{
    public class GizmoSglAxisScaleDrag3D : GizmoPlaneDrag3D
    {
        public struct WorkData
        {
            public int AxisIndex;
            public Vector3 DragOrigin;
            public Vector3 Axis;
            public float SnapStep;
            public float EntityScale;
        }

        private float _accumSnapDrag;
        private WorkData _workData;
        private float _scale;
        private float _relativeScale = 1.0f;
        private float _totalScale = 1.0f;

        public override GizmoDragChannel DragChannel { get { return GizmoDragChannel.Scale; } }
        public int AxisIndex { get { return _workData.AxisIndex; } }
        public float RelativeScale { get { return _relativeScale; } }
        public float TotalScale { get { return _totalScale; } }

        public void SetWorkData(WorkData workData)
        {
            if (!IsActive)
            {
                _workData = workData;
                _scale = _workData.EntityScale;
            }
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
                _relativeDragScale = Vector3.one;

                _accumSnapDrag += dragAlongAxis;
                if (SnapMath.CanExtractSnap(_workData.SnapStep, _accumSnapDrag))
                {
                    float snapAmount = SnapMath.ExtractSnap(_workData.SnapStep, ref _accumSnapDrag);

                    float oldScale = _scale;
                    _scale += snapAmount;
                    _totalScale = _scale / _workData.EntityScale;
                    _relativeScale = _scale / oldScale;
                    _relativeDragScale[_workData.AxisIndex] = _relativeScale;
                }
            }
            else
            {
                _accumSnapDrag = 0.0f;

                float oldScale = _scale;
                _scale += dragAlongAxis * Sensitivity;
                _totalScale = _scale / _workData.EntityScale;
                _relativeScale = _scale / oldScale;
                _relativeDragScale[_workData.AxisIndex] = _relativeScale;
            }

            _totalDragScale[_workData.AxisIndex] = _totalScale;
        }

        protected override void OnSessionEnd()
        {
            _accumSnapDrag = 0.0f;
            _relativeScale = 1.0f;
            _totalScale = 1.0f;
            _scale = 1.0f;
        }
    }
}