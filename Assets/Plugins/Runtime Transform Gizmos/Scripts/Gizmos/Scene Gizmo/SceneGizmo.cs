using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class SceneGizmo : GizmoBehaviour, ISceneGizmo
    {
        private SceneGizmoCamPrjSwitchLabel _camPrjSwitchLabel;
        private SceneGizmoMidCap _midAxisHandle;
        private SceneGizmoAxisCap[] _axesHandles = new SceneGizmoAxisCap[6];
        private List<SceneGizmoCap> _renderSortedHandles = new List<SceneGizmoCap>(7);

        private RTSceneGizmoCamera _sceneGizmoCamera;

        [SerializeField]
        private SceneGizmoLookAndFeel _lookAndFeel = new SceneGizmoLookAndFeel();
        [SerializeField]
        private SceneGizmoLookAndFeel _sharedLookAndFeel;

        public RTSceneGizmoCamera SceneGizmoCamera { get { return _sceneGizmoCamera; } }
        public Gizmo OwnerGizmo { get { return Gizmo; } }
        public Camera SceneCamera { get { return _sceneGizmoCamera.SceneCamera; } }
        public SceneGizmoLookAndFeel LookAndFeel { get { return _sharedLookAndFeel != null ? _sharedLookAndFeel : _lookAndFeel; } }
        public SceneGizmoLookAndFeel SharedLookAndFeel { get { return _sharedLookAndFeel; } set { _sharedLookAndFeel = value; } }

        public override void OnAttached()
        {
            _sceneGizmoCamera = RTGizmosEngine.Get.CreateSceneGizmoCamera(RTFocusCamera.Get.TargetCamera, new SceneGizmoCamViewportUpdater(this));

            // Create the mid axis handle
            _midAxisHandle = new SceneGizmoMidCap(this);
            _renderSortedHandles.Add(_midAxisHandle);

            // Create the axes handles
            AxisDescriptor[] axesDescriptors = new AxisDescriptor[]
            {
                new AxisDescriptor(0, AxisSign.Positive), new AxisDescriptor(1, AxisSign.Positive),
                new AxisDescriptor(2, AxisSign.Positive), new AxisDescriptor(0, AxisSign.Negative),
                new AxisDescriptor(1, AxisSign.Negative), new AxisDescriptor(2, AxisSign.Negative)
            };
            int[] handleIds = new int[]
            {
                GizmoHandleId.SceneGizmoPositiveXAxis, GizmoHandleId.SceneGizmoPositiveYAxis,
                GizmoHandleId.SceneGizmoPositiveZAxis, GizmoHandleId.SceneGizmoNegativeXAxis,
                GizmoHandleId.SceneGizmoNegativeYAxis, GizmoHandleId.SceneGizmoNegativeZAxis
            };
            for (int axisIndex = 0; axisIndex < axesDescriptors.Length; ++axisIndex)
            {
                _axesHandles[axisIndex] = new SceneGizmoAxisCap(this, handleIds[axisIndex], axesDescriptors[axisIndex]);
                _renderSortedHandles.Add(_axesHandles[axisIndex]);
            }

            // Create the camera projection switch handle
            _camPrjSwitchLabel = new SceneGizmoCamPrjSwitchLabel(this);

            // Establish the scene gizmo's transform. These will remain unchanged.
            Gizmo.Transform.Position3D = _sceneGizmoCamera.LookAtPoint;
            Gizmo.Transform.Rotation3D = Quaternion.identity;

            // We want the scene gizmo to have the highest hover priority. This way, whatever
            // other gizmo lies behind it, the scene gizmo will be the one hovered by the cursor.
            Gizmo.GenericHoverPriority.MakeHighest();
            Gizmo.HoverPriority2D.MakeHighest();
            Gizmo.HoverPriority3D.MakeHighest();
        }

        public override void OnGUI()
        {
            _camPrjSwitchLabel.OnGUI();
        }

        public override void OnGizmoRender(Camera camera)
        {
            if (camera != _sceneGizmoCamera.Camera) return;

            // The handles are rendered with ZTest disabled so we will first sort 
            // the handle list by their render sorting position and then render them.
            Vector3 cameraPos = _sceneGizmoCamera.WorldPosition;
            _renderSortedHandles.Sort(delegate(SceneGizmoCap h0, SceneGizmoCap h1)
            {
                float d0 = (h0.Position - cameraPos).sqrMagnitude;
                float d1 = (h1.Position - cameraPos).sqrMagnitude;
                return d1.CompareTo(d0);
            });

            // The handles have been sorted. Now we can render them.
            foreach (var handle in _renderSortedHandles) handle.Render(_sceneGizmoCamera.Camera);
        }
    }
}
