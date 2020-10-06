using UnityEngine;

namespace RTG
{
    public class GizmoUniformScaleDrag3D : GizmoPlaneDrag3D
    {
        public struct WorkData
        {
            public Vector3 CameraRight;
            public Vector3 CameraUp;
            public Vector3 DragOrigin;
            public float SnapStep;
        }

        private WorkData _workData;
        private Vector3 _planeAxis0;
        private Vector3 _planeAxis1;
        private float _accumSnapDrag;
        private float _scale;
        private float _relativeScale = 1.0f;
        private float _totalScale = 1.0f;
        private Vector3 _scaleDragAxis;

        public override GizmoDragChannel DragChannel { get { return GizmoDragChannel.Scale; } }
        public float TotalScale { get { return _totalScale; } }
        public float RelativeScale { get { return _relativeScale; } }

        public void SetWorkData(WorkData workData)
        {
            if (!IsActive)
            {
                _workData = workData;
                _scale = 1.0f;
                _scaleDragAxis = ((workData.CameraRight + workData.CameraUp) * 0.5f).normalized;
            }
        }

        protected override Plane CalculateDragPlane()
        {
            _planeAxis0 = _workData.CameraRight;
            _planeAxis1 = _workData.CameraUp;

            return new Plane(Vector3.Cross(_planeAxis0, _planeAxis1).normalized, _workData.DragOrigin);
        }

        protected override void CalculateDragValues()
        {
            if (CanSnap())
            {
                _relativeDragScale = Vector3.one;
                _accumSnapDrag += _planeDragSession.DragDelta.Dot(_scaleDragAxis);

                if (SnapMath.CanExtractSnap(_workData.SnapStep, _accumSnapDrag))
                {
                    float snapAmount = SnapMath.ExtractSnap(_workData.SnapStep, ref _accumSnapDrag);

                    float oldScale = _scale;
                    _scale += snapAmount;
                    _relativeScale = _scale / oldScale;
                    _totalScale = _scale / 1.0f;
                    _relativeDragScale = Vector3Ex.FromValue(_relativeScale);
                }
            }
            else
            {
                _accumSnapDrag = 0;

                float oldScale = _scale;
                _scale += _planeDragSession.DragDelta.Dot(_scaleDragAxis) * Sensitivity;
                _relativeScale = _scale / oldScale;
                _totalScale = _scale / 1.0f;
                _relativeDragScale = Vector3Ex.FromValue(_relativeScale);
            }

            _totalDragScale = Vector3Ex.FromValue(_totalScale);
        }

        protected override void OnSessionEnd()
        {
            _relativeScale = 1.0f;
            _totalScale = 1.0f;
        }
    }
}