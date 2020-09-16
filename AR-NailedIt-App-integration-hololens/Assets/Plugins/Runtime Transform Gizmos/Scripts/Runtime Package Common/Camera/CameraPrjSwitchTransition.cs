using UnityEngine;
using System.Collections;

namespace RTG
{
    public delegate void CameraProjectionSwitchBeginHandler(CameraPrjSwitchTransition.Type transitionType);
    public delegate void CameraProjectionSwitchUpdateHandler(CameraPrjSwitchTransition.Type transitionType);
    public delegate void CameraProjectionSwitchEndHandler(CameraPrjSwitchTransition.Type transitionType);

    public class CameraPrjSwitchTransition
    {
        public enum Type
        {
            None = 0,
            ToOrtho,
            ToPerspective
        }

        public event CameraProjectionSwitchBeginHandler TransitionBegin;
        public event CameraProjectionSwitchUpdateHandler TransitionUpdate;
        public event CameraProjectionSwitchBeginHandler TransitionEnd;

        private IEnumerator _transitionCrtn;
        private MonoBehaviour _targetMono;
        private Camera _targetCamera;
        private float _camFieldOfView = 60.0f;
        private Vector3 _camFocusPoint;
        private Vector3 _camRestorePosition;
        private CameraPrjSwitchTransition.Type _transitionType = Type.None;
        private float _durationInSeconds = 0.23f;
        private float _progress = 0.0f;

        public MonoBehaviour TargetMono { get { return _targetMono; } set { if (!IsActive && value != null) _targetMono = value; } }
        public Camera TargetCamera { get { return _targetCamera; } set { if (!IsActive && value != null) _targetCamera = value; } }
        public CameraPrjSwitchTransition.Type TransitionType { get { return _transitionType; } }
        public float DurationInSeconds { get { return _durationInSeconds; } set { if (!IsActive) _durationInSeconds = Mathf.Max(1e-2f, Mathf.Abs(value)); } }
        public float Progress { get { return _progress; } }
        public float CamFieldOfView { get { return _camFieldOfView; } set { if (!IsActive) _camFieldOfView = Mathf.Abs(value); } }
        public Vector3 CamFocusPoint { get { return _camFocusPoint; } set { if (!IsActive) _camFocusPoint = value; } }
        public bool IsActive { get { return _transitionType != Type.None; } }

        public void Begin()
        {
            if (_targetMono == null || _targetCamera == null) return;

            if (IsActive)
            {
                TargetMono.StopCoroutine(_transitionCrtn);
                _transitionCrtn = null;
                _targetCamera.transform.position = _camRestorePosition;
            }
            TargetMono.StartCoroutine(_transitionCrtn = DoTransition());
        }

        private IEnumerator DoTransition()
        {
            float frustumHeight = _targetCamera.orthographicSize * 2.0f;
            float startFOV = 0.0f, targetFOV = 0.0f;

            if (!IsActive)
            {
                if (_targetCamera.orthographic)
                {
                    startFOV = _targetCamera.GetOrthoFOV();
                    targetFOV = _camFieldOfView;
                    _transitionType = CameraPrjSwitchTransition.Type.ToPerspective;
                }
                else
                {
                    startFOV = _camFieldOfView;
                    targetFOV = _targetCamera.GetOrthoFOV();
                    _transitionType = CameraPrjSwitchTransition.Type.ToOrtho;
                }
            }
            else
            {
                if (_transitionType == CameraPrjSwitchTransition.Type.ToOrtho)
                {
                    startFOV = _targetCamera.fieldOfView;
                    targetFOV = _camFieldOfView;
                    _transitionType = CameraPrjSwitchTransition.Type.ToPerspective;
                }
                else
                if (_transitionType == CameraPrjSwitchTransition.Type.ToPerspective)
                {
                    startFOV = _targetCamera.fieldOfView;
                    targetFOV = _targetCamera.GetOrthoFOV();
                    _transitionType = CameraPrjSwitchTransition.Type.ToOrtho;
                }
            }

            _progress = 0.0f;
            if (TransitionBegin != null) TransitionBegin(_transitionType);

            float invDuration = 1.0f / _durationInSeconds;
            float fovSpeed = (targetFOV - startFOV) * invDuration;

            Transform _targetTransform = _targetCamera.transform;
            _targetCamera.orthographic = false;
            _targetCamera.fieldOfView = startFOV;

            _camRestorePosition = _targetTransform.position;
            while (_progress < 1.0f)
            {
                _targetCamera.fieldOfView += fovSpeed * Time.deltaTime;
                _targetCamera.transform.position = _camFocusPoint - _targetTransform.forward * _targetCamera.GetFrustumDistanceFromHeight(frustumHeight);

                _progress += Time.deltaTime * invDuration;
                _progress = Mathf.Min(1.0f, _progress);

                if ((fovSpeed < 0.0f && _targetCamera.fieldOfView <= targetFOV) ||
                   (fovSpeed > 0.0f && _targetCamera.fieldOfView >= targetFOV))
                {
                    _progress = 1.0f;
                    _targetCamera.fieldOfView = targetFOV;
                    if (_transitionType == CameraPrjSwitchTransition.Type.ToOrtho) _targetCamera.orthographic = true;

                    _targetTransform.position = _camRestorePosition;
                    _targetCamera.fieldOfView = _camFieldOfView;
                    if (TransitionUpdate != null) TransitionUpdate(_transitionType);

                    // Note: Use 'yield return null' instead of 'break'! This is important as it allows 
                    //       listeners to capture a transition update for the last pahse of the transition.
                    yield return null;
                }
                else
                {
                    if (TransitionUpdate != null) TransitionUpdate(_transitionType);
                    yield return null;
                }
            }

            if (TransitionEnd != null) TransitionEnd(_transitionType);

            _transitionType = CameraPrjSwitchTransition.Type.None;
            _progress = 0.0f;
            _transitionCrtn = null;
        }
    }
}
