using UnityEngine;

namespace RTG
{
    public class GizmoDblAxisScaleDrag3D : GizmoPlaneDrag3D
    {
        public struct WorkData
        {
            public int AxisIndex0;
            public int AxisIndex1;
            public Vector3 DragOrigin;
            public Vector3 Axis0;
            public Vector3 Axis1;
            public float SnapStep;
        }

        private WorkData _workData;
        private float _accumSnapDrag0;
        private float _accumSnapDrag1;
        private float _scale0;
        private float _scale1;
        private float _relativeScale0 = 1.0f;
        private float _relativeScale1 = 1.0f;
        private float _totalScale0 = 1.0f;
        private float _totalScale1 = 1.0f;
        private Vector3 _scaleDragAxis;

        public override GizmoDragChannel DragChannel { get { return GizmoDragChannel.Scale; } }
        public int AxisIndex0 { get { return _workData.AxisIndex0; } }
        public int AxisIndex1 { get { return _workData.AxisIndex1; } }
        public float RelativeScale0 { get { return _relativeScale0; } }
        public float RelativeScale1 { get { return _relativeScale1; } }
        public float TotalScale0 { get { return _totalScale0; } }
        public float TotalScale1 { get { return _totalScale1; } }

        public void SetWorkData(WorkData workData)
        {
            if (!IsActive)
            {
                _workData = workData;
                _scale0 = 1.0f;
                _scale1 = 1.0f;
                _scaleDragAxis = ((workData.Axis0 + workData.Axis1) * 0.5f).normalized;
            }
        }

        protected override Plane CalculateDragPlane()
        {
            Vector3 planeNormal = Vector3.Cross(_workData.Axis0, _workData.Axis1).normalized;
            return new Plane(planeNormal, _workData.DragOrigin);
        }

        protected override void CalculateDragValues()
        {
            float dragAlongAxis0, dragAlongAxis1;
            float snapStep0, snapStep1;
            float entScale0, entScale1;

            dragAlongAxis0 = _planeDragSession.DragDelta.Dot(_scaleDragAxis);
            dragAlongAxis1 = dragAlongAxis0;

            snapStep0 = snapStep1 = _workData.SnapStep;
            entScale0 = entScale1 = 1.0f;

            if (CanSnap())
            {
                _relativeDragScale = Vector3.one;

                _accumSnapDrag0 += dragAlongAxis0;
                if (SnapMath.CanExtractSnap(snapStep0, _accumSnapDrag0))
                {
                    float oldScale = _scale0;
                    _scale0 += SnapMath.ExtractSnap(snapStep0, ref _accumSnapDrag0);
                    _totalScale0 = _scale0 / entScale0;
                    _relativeScale0 = _scale0 / oldScale;
                    _relativeDragScale[_workData.AxisIndex0] = _relativeScale0;
                }

                _accumSnapDrag1 += dragAlongAxis1;
                if (SnapMath.CanExtractSnap(snapStep1, _accumSnapDrag1))
                {
                    float oldScale = _scale1;
                    _scale1 += SnapMath.ExtractSnap(snapStep1, ref _accumSnapDrag1);
                    _totalScale1 = _scale1 / entScale1;
                    _relativeScale1 = _scale1 / oldScale;
                    _relativeDragScale[_workData.AxisIndex1] = _relativeScale1;
                }
            }
            else
            {
                _accumSnapDrag0 = 0.0f;
                _accumSnapDrag1 = 0.0f;

                float oldScale = _scale0;
                _scale0 += dragAlongAxis0 * Sensitivity;
                _totalScale0 = _scale0 / entScale0;
                _relativeScale0 = _scale0 / oldScale;
                _relativeDragScale[_workData.AxisIndex0] = _relativeScale0;

                oldScale = _scale1;
                _scale1 += dragAlongAxis1 * Sensitivity;
                _totalScale1 = _scale1 / entScale1;
                _relativeScale1 = _scale1 / oldScale;
                _relativeDragScale[_workData.AxisIndex1] = _relativeScale1;
            }

            _totalDragScale[_workData.AxisIndex0] = _totalScale0;
            _totalDragScale[_workData.AxisIndex1] = _totalScale1;
        }

        protected override void OnSessionEnd()
        {
            _accumSnapDrag0 = 0.0f;
            _accumSnapDrag1 = 0.0f;
            _relativeScale0 = 1.0f;
            _relativeScale1 = 1.0f;
            _totalScale0 = 1.0f;
            _totalScale1 = 1.0f;
        }
    }
}