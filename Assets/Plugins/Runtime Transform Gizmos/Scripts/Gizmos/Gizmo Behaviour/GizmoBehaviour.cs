using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public abstract class GizmoBehaviour : IGizmoBehaviour
    {
        protected Gizmo _gizmo;
        protected bool _isEnabled = true;

        public Gizmo Gizmo { get { return _gizmo; } }
        public bool IsEnabled { get { return _isEnabled; } }

        public void Init_SystemCall(GizmoBehaviorInitParams initParams)
        {
            _gizmo = initParams.Gizmo;
        }

        public void SetEnabled(bool enabled)
        {
            if (enabled == _isEnabled) return;

            if(enabled)
            {
                _isEnabled = enabled;
                OnEnabled();
            }
            else
            {
                _isEnabled = false;
                OnDisabled();
            }
        }

        public virtual void OnAttached() { }
        public virtual void OnDetached() { }

        public virtual void OnGizmoEnabled() { }
        public virtual void OnGizmoDisabled() { }
        public virtual void OnEnabled() { }
        public virtual void OnDisabled() { }

        public virtual void OnGizmoHandlePicked(int handleId) { }
        public virtual bool OnGizmoCanBeginDrag(int handleId) { return true; }
        public virtual void OnGizmoAttemptHandleDragBegin(int handleId) { }
        public virtual void OnGizmoDragBegin(int handleId) { }
        public virtual void OnGizmoDragUpdate(int handleId) { }
        public virtual void OnGizmoDragEnd(int handleId) { }
        public virtual void OnGizmoHoverEnter(int handleId) { }
        public virtual void OnGizmoHoverExit(int handleId) { }

        public virtual void OnGizmoUpdateBegin() { }
        public virtual void OnGizmoUpdateEnd() { }

        public virtual void OnGUI() { }
        public virtual void OnGizmoRender(Camera camera) { }

        protected void CheckRequiredBehaviours(List<Type> reqBehaviourTypes)
        {
            foreach(var bhvType in reqBehaviourTypes)
            {
                var behaviour = Gizmo.GetFirstBehaviourOfType(bhvType);
                if(behaviour == null)
                {
                    ThrowReqBehaviourExeception(bhvType);
                    break;
                }
            }
        }

        private void ThrowReqBehaviourExeception(Type reqBehaviorType)
        {
            if(Application.isEditor)
            {
                Debug.Break();
                throw new UnityException(GetType().ToString() + " requires a behaviour of type " + reqBehaviorType.ToString());
            }
        }
    }
}
