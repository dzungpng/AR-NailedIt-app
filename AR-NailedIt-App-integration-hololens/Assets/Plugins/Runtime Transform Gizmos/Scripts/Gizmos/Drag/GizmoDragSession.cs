using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public abstract class GizmoDragSession : IGizmoDragSession
    {
        private List<GizmoTransform> _targetTransforms = new List<GizmoTransform>();

        protected Vector3 _totalDragOffset;
        protected Quaternion _totalDragRotation;
        protected Vector3 _totalDragScale;

        protected Vector3 _relativeDragOffset;
        protected Quaternion _relativeDragRotation = Quaternion.identity;
        protected Vector3 _relativeDragScale = Vector3.one;

        public int NumTargetTransforms { get { return _targetTransforms.Count; } }
        public Vector3 TotalDragOffset { get { return _totalDragOffset; } }
        public Quaternion TotalDragRotation { get { return _totalDragRotation; } }
        public Vector3 TotalDragScale { get { return _totalDragScale; } }
        public Vector3 RelativeDragOffset { get { return _relativeDragOffset; } }
        public Quaternion RelativeDragRotation { get { return _relativeDragRotation; } }
        public Vector3 RelativeDragScale { get { return _relativeDragScale; } }

        public abstract bool IsActive { get; }
        public abstract GizmoDragChannel DragChannel { get; }

        public bool ContainsTargetTransform(GizmoTransform transform)
        {
            return _targetTransforms.Contains(transform);
        }

        public void AddTargetTransform(GizmoTransform transform)
        {
            if (!IsActive && 
                !ContainsTargetTransform(transform)) _targetTransforms.Add(transform);
        }

        public void RemoveTargetTransform(GizmoTransform transform)
        {
            if (!IsActive) _targetTransforms.Remove(transform);
        }

        public bool Begin()
        {
            if (!CanBegin()) return false;
            if (!DoBeginSession()) return false;

            OnSessionBegin();
            return true;
        }

        public bool Update()
        {
            if (!IsActive) return false;

            if (DoUpdateSession())
            {
                CalculateDragValues();
                ApplyDrag();
                return true;
            }

            return false;
        }

        public void End()
        {
            if (IsActive)
            {
                DoEndSession();

                _totalDragOffset = _relativeDragOffset = Vector3.zero;
                _totalDragRotation = _relativeDragRotation = Quaternion.identity;
                _totalDragScale = _relativeDragScale = Vector3.one;

                OnSessionEnd();
            }
        }

        protected abstract bool DoBeginSession();
        protected abstract bool DoUpdateSession();
        protected abstract void DoEndSession();
        protected abstract void CalculateDragValues();

        protected void ApplyDrag()
        {
            List<GizmoTransform> parents = GizmoTransform.FilterParentsOnly(_targetTransforms);
            if(DragChannel == GizmoDragChannel.Offset)
            {
                foreach (var parentTransform in parents)
                    parentTransform.Position3D = parentTransform.Position3D + _relativeDragOffset;
            }
            else
            if(DragChannel == GizmoDragChannel.Rotation)
            {
                foreach (var parentTransform in parents)
                    parentTransform.Rotation3D = _relativeDragRotation * parentTransform.Rotation3D;
            }
        }

        protected virtual bool CanBegin()
        {
            return !IsActive;
        }

        protected virtual void OnSessionBegin() { }
        protected virtual void OnSessionEnd() { }
    }
}
