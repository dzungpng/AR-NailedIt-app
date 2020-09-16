using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public delegate void GizmoEngineCanDoHoverUpdateHandler(YesNoAnswer answer);

    public enum GizmosEnginePipelineStage
    {
        Update,
        PostUpdate,
        Render,
        PostRender,
        GUI,
        PostGUI
    }

    public class RTGizmosEngine : MonoSingleton<RTGizmosEngine>, IHoverableSceneEntityContainer
    {
        public event GizmoEngineCanDoHoverUpdateHandler CanDoHoverUpdate;

        [SerializeField]
        private EditorToolbar _mainToolbar = new EditorToolbar
        (
            new EditorToolbarTab[]
            {
                new EditorToolbarTab("General", "General gizmo engine settings."),
                new EditorToolbarTab("Scene gizmo", "Scene gizmo specific settings."),
                new EditorToolbarTab("Move gizmo", "Allows you to change move gizmo settings."),
                new EditorToolbarTab("Rotation gizmo", "Allows you to change rotation settings."),
                new EditorToolbarTab("Scale gizmo", "Allows you to change scale gizmo settings."),
                new EditorToolbarTab("Universal gizmo", "Allows you to change universal gizmo settings."),
            },
            6, Color.green
        );

        [SerializeField]
        private GizmoEngineSettings _settings = new GizmoEngineSettings();
        private GizmosEnginePipelineStage _pipelineStage = GizmosEnginePipelineStage.Update;
        private Gizmo _draggedGizmo;
        private Gizmo _hoveredGizmo;
        private GizmoHoverInfo _gizmoHoverInfo;
        private List<Gizmo> _gizmos = new List<Gizmo>();
        private List<ISceneGizmo> _sceneGizmos = new List<ISceneGizmo>();
        private List<RTSceneGizmoCamera> _sceneGizmoCameras = new List<RTSceneGizmoCamera>();
        private List<Camera> _renderCameras = new List<Camera>();

        [SerializeField]
        private SceneGizmoLookAndFeel _sceneGizmoLookAndFeel = new SceneGizmoLookAndFeel();

        [SerializeField]
        private MoveGizmoSettings2D _moveGizmoSettings2D = new MoveGizmoSettings2D() { IsExpanded = false };
        [SerializeField]
        private MoveGizmoSettings3D _moveGizmoSettings3D = new MoveGizmoSettings3D() { IsExpanded = false };
        [SerializeField]
        private MoveGizmoLookAndFeel2D _moveGizmoLookAndFeel2D = new MoveGizmoLookAndFeel2D() { IsExpanded = false };
        [SerializeField]
        private MoveGizmoLookAndFeel3D _moveGizmoLookAndFeel3D = new MoveGizmoLookAndFeel3D() { IsExpanded = false };
        [SerializeField]
        private MoveGizmoHotkeys _moveGizmoHotkeys = new MoveGizmoHotkeys() { IsExpanded = false };
        [SerializeField]
        private ObjectTransformGizmoSettings _objectMoveGizmoSettings = new ObjectTransformGizmoSettings() { IsExpanded = false };

        [SerializeField]
        private RotationGizmoSettings3D _rotationGizmoSettings3D = new RotationGizmoSettings3D() { IsExpanded = false };
        [SerializeField]
        private RotationGizmoLookAndFeel3D _rotationGizmoLookAndFeel3D = new RotationGizmoLookAndFeel3D() { IsExpanded = false };
        [SerializeField]
        private RotationGizmoHotkeys _rotationGizmoHotkeys = new RotationGizmoHotkeys() { IsExpanded = false };
        [SerializeField]
        private ObjectTransformGizmoSettings _objectRotationGizmoSettings = new ObjectTransformGizmoSettings() { IsExpanded = false };

        [SerializeField]
        private ScaleGizmoSettings3D _scaleGizmoSettings3D = new ScaleGizmoSettings3D() { IsExpanded = false };
        [SerializeField]
        private ScaleGizmoLookAndFeel3D _scaleGizmoLookAndFeel3D = new ScaleGizmoLookAndFeel3D() { IsExpanded = false };
        [SerializeField]
        private ScaleGizmoHotkeys _scaleGizmoHotkeys = new ScaleGizmoHotkeys() { IsExpanded = false };
        [SerializeField]
        private ObjectTransformGizmoSettings _objectScaleGizmoSettings = new ObjectTransformGizmoSettings() { IsExpanded = false };

        [SerializeField]
        private UniversalGizmoConfig _universalGizmoConfig = new UniversalGizmoConfig();
        [SerializeField]
        private UniversalGizmoSettings2D _universalGizmoSettings2D = new UniversalGizmoSettings2D() { IsExpanded = false };
        [SerializeField]
        private UniversalGizmoSettings3D _universalGizmoSettings3D = new UniversalGizmoSettings3D() { IsExpanded = false };
        [SerializeField]
        private UniversalGizmoLookAndFeel2D _universalGizmoLookAndFeel2D = new UniversalGizmoLookAndFeel2D() { IsExpanded = false };
        [SerializeField]
        private UniversalGizmoLookAndFeel3D _universalGizmoLookAndFeel3D = new UniversalGizmoLookAndFeel3D() { IsExpanded = false };
        [SerializeField]
        private UniversalGizmoHotkeys _universalGizmoHotkeys = new UniversalGizmoHotkeys() { IsExpanded = false };
        [SerializeField]
        private ObjectTransformGizmoSettings _objectUniversalGizmoSettings = new ObjectTransformGizmoSettings() { IsExpanded = false };

        public GizmoEngineSettings Settings { get { return _settings; } }
        public GizmosEnginePipelineStage PipelineStage { get { return _pipelineStage; } }
        public Camera RenderStageCamera { get { return Camera.current; } }
        public bool HasHoveredSceneEntity { get { return IsAnyGizmoHovered; } }
        public bool IsAnyGizmoHovered { get { return _hoveredGizmo != null; } }
        public Gizmo HoveredGizmo { get { return _hoveredGizmo; } }
        public Gizmo DraggedGizmo { get { return _draggedGizmo; } }
        public int NumRenderCameras { get { return _renderCameras.Count; } }
        public SceneGizmoLookAndFeel SceneGizmoLookAndFeel { get { return _sceneGizmoLookAndFeel; } }
        public MoveGizmoSettings2D MoveGizmoSettings2D { get { return _moveGizmoSettings2D; } }
        public MoveGizmoSettings3D MoveGizmoSettings3D { get { return _moveGizmoSettings3D; } }
        public MoveGizmoLookAndFeel2D MoveGizmoLookAndFeel2D { get { return _moveGizmoLookAndFeel2D; } }
        public MoveGizmoLookAndFeel3D MoveGizmoLookAndFeel3D { get { return _moveGizmoLookAndFeel3D; } }
        public MoveGizmoHotkeys MoveGizmoHotkeys { get { return _moveGizmoHotkeys; } }
        public ObjectTransformGizmoSettings ObjectMoveGizmoSettings { get { return _objectMoveGizmoSettings; } }
        public RotationGizmoSettings3D RotationGizmoSettings3D { get { return _rotationGizmoSettings3D; } }
        public RotationGizmoLookAndFeel3D RotationGizmoLookAndFeel3D { get { return _rotationGizmoLookAndFeel3D; } }
        public RotationGizmoHotkeys RotationGizmoHotkeys { get { return _rotationGizmoHotkeys; } }
        public ObjectTransformGizmoSettings ObjectRotationGizmoSettings { get { return _objectRotationGizmoSettings; } }
        public ScaleGizmoSettings3D ScaleGizmoSettings3D { get { return _scaleGizmoSettings3D; } }
        public ScaleGizmoLookAndFeel3D ScaleGizmoLookAndFeel3D { get { return _scaleGizmoLookAndFeel3D; } }
        public ScaleGizmoHotkeys ScaleGizmoHotkeys { get { return _scaleGizmoHotkeys; } }
        public ObjectTransformGizmoSettings ObjectScaleGizmoSettings { get { return _objectScaleGizmoSettings; } }
        public UniversalGizmoSettings2D UniversalGizmoSettings2D { get { return _universalGizmoSettings2D; } }
        public UniversalGizmoSettings3D UniversalGizmoSettings3D { get { return _universalGizmoSettings3D; } }
        public UniversalGizmoLookAndFeel2D UniversalGizmoLookAndFeel2D { get { return _universalGizmoLookAndFeel2D; } }
        public UniversalGizmoLookAndFeel3D UniversalGizmoLookAndFeel3D { get { return _universalGizmoLookAndFeel3D; } }
        public UniversalGizmoHotkeys UniversalGizmoHotkeys { get { return _universalGizmoHotkeys; } }
        public ObjectTransformGizmoSettings ObjectUniversalGizmoSettings { get { return _objectUniversalGizmoSettings; } }

        #if UNITY_EDITOR
        public EditorToolbar MainToolbar { get { return _mainToolbar; } }
        public UniversalGizmoConfig UniversalGizmoConfig { get { return _universalGizmoConfig; } }
        #endif

        public void AddRenderCamera(Camera camera)
        {
            if (!IsRenderCamera(camera) && !IsSceneGizmoCamera(camera)) _renderCameras.Add(camera);
        }

        public bool IsRenderCamera(Camera camera)
        {
            return _renderCameras.Contains(camera);
        }

        public void RemoveRenderCamera(Camera camera)
        {
            _renderCameras.Remove(camera);
        }

        public RTSceneGizmoCamera CreateSceneGizmoCamera(Camera sceneCamera, ISceneGizmoCamViewportUpdater viewportUpdater)
        {
            GameObject sceneGizmoCamObject = new GameObject(typeof(RTSceneGizmoCamera).ToString());
            sceneGizmoCamObject.transform.parent = RTGizmosEngine.Get.transform;

            RTSceneGizmoCamera sgCamera = sceneGizmoCamObject.AddComponent<RTSceneGizmoCamera>();
            sgCamera.ViewportUpdater = viewportUpdater;
            sgCamera.SceneCamera = sceneCamera;

            _sceneGizmoCameras.Add(sgCamera);

            return sgCamera;
        }

        public bool IsSceneGizmoCamera(Camera camera)
        {
            return _sceneGizmoCameras.FindAll(item => item.Camera == camera).Count != 0;
        }

        public ISceneGizmo GetSceneGizmoByCamera(Camera sceneCamera)
        {
            foreach (var sceneGizmo in _sceneGizmos)
                if (sceneGizmo.SceneCamera == sceneCamera) return sceneGizmo;

            return null;
        }

        public Gizmo CreateGizmo()
        {
            Gizmo gizmo = new Gizmo();

            RegisterGizmo(gizmo);
            return gizmo;
        }

        public SceneGizmo CreateSceneGizmo(Camera sceneCamera)
        {
            if (GetSceneGizmoByCamera(sceneCamera) != null) return null;

            var gizmo = new Gizmo();
            RegisterGizmo(gizmo);

            var sceneGizmo = gizmo.AddBehaviour<SceneGizmo>();
            sceneGizmo.SceneGizmoCamera.SceneCamera = sceneCamera;
            sceneGizmo.SharedLookAndFeel = SceneGizmoLookAndFeel;

            _sceneGizmos.Add(sceneGizmo);

            return sceneGizmo;
        }

        public MoveGizmo CreateMoveGizmo()
        {
            Gizmo gizmo = CreateGizmo();
            MoveGizmo moveGizmo = new MoveGizmo();
            gizmo.AddBehaviour(moveGizmo);

            moveGizmo.SharedHotkeys = _moveGizmoHotkeys;
            moveGizmo.SharedLookAndFeel2D = _moveGizmoLookAndFeel2D;
            moveGizmo.SharedLookAndFeel3D = _moveGizmoLookAndFeel3D;
            moveGizmo.SharedSettings2D = _moveGizmoSettings2D;
            moveGizmo.SharedSettings3D = _moveGizmoSettings3D;

            return moveGizmo;
        }

        public ObjectTransformGizmo CreateObjectMoveGizmo()
        {
            MoveGizmo moveGizmo = CreateMoveGizmo();
            var transformGizmo = moveGizmo.Gizmo.AddBehaviour<ObjectTransformGizmo>();
            transformGizmo.SetTransformChannelFlags(ObjectTransformGizmo.Channels.Position);

            transformGizmo.SharedSettings = _objectMoveGizmoSettings;

            return transformGizmo;
        }

        public RotationGizmo CreateRotationGizmo()
        {
            Gizmo gizmo = CreateGizmo();
            RotationGizmo rotationGizmo = new RotationGizmo();
            gizmo.AddBehaviour(rotationGizmo);

            rotationGizmo.SharedHotkeys = _rotationGizmoHotkeys;
            rotationGizmo.SharedLookAndFeel3D = _rotationGizmoLookAndFeel3D;
            rotationGizmo.SharedSettings3D = _rotationGizmoSettings3D;

            return rotationGizmo;
        }

        public ObjectTransformGizmo CreateObjectRotationGizmo()
        {
            RotationGizmo rotationGizmo = CreateRotationGizmo();
            var transformGizmo = rotationGizmo.Gizmo.AddBehaviour<ObjectTransformGizmo>();
            transformGizmo.SetTransformChannelFlags(ObjectTransformGizmo.Channels.Rotation);

            transformGizmo.SharedSettings = _objectRotationGizmoSettings;

            return transformGizmo;
        }

        public ScaleGizmo CreateScaleGizmo()
        {
            Gizmo gizmo = CreateGizmo();
            ScaleGizmo scaleGizmo = new ScaleGizmo();
            gizmo.AddBehaviour(scaleGizmo);

            scaleGizmo.SharedHotkeys = _scaleGizmoHotkeys;
            scaleGizmo.SharedLookAndFeel3D = _scaleGizmoLookAndFeel3D;
            scaleGizmo.SharedSettings3D = _scaleGizmoSettings3D;

            return scaleGizmo;
        }

        public ObjectTransformGizmo CreateObjectScaleGizmo()
        {
            ScaleGizmo scaleGizmo = CreateScaleGizmo();
            var transformGizmo = scaleGizmo.Gizmo.AddBehaviour<ObjectTransformGizmo>();
            transformGizmo.SetTransformChannelFlags(ObjectTransformGizmo.Channels.Scale);
            transformGizmo.SetTransformSpace(GizmoSpace.Local);
            transformGizmo.MakeTransformSpacePermanent();

            transformGizmo.SharedSettings = _objectScaleGizmoSettings;

            return transformGizmo;
        }

        public UniversalGizmo CreateUniversalGizmo()
        {
            Gizmo gizmo = CreateGizmo();
            UniversalGizmo universalGizmo = new UniversalGizmo();
            gizmo.AddBehaviour(universalGizmo);

            universalGizmo.SharedHotkeys = _universalGizmoHotkeys;
            universalGizmo.SharedLookAndFeel2D = _universalGizmoLookAndFeel2D;
            universalGizmo.SharedLookAndFeel3D = _universalGizmoLookAndFeel3D;
            universalGizmo.SharedSettings2D = _universalGizmoSettings2D;
            universalGizmo.SharedSettings3D = _universalGizmoSettings3D;

            return universalGizmo;
        }

        public ObjectTransformGizmo CreateObjectUniversalGizmo()
        {
            UniversalGizmo universalGizmo = CreateUniversalGizmo();
            var transformGizmo = universalGizmo.Gizmo.AddBehaviour<ObjectTransformGizmo>();
            transformGizmo.SetTransformChannelFlags(ObjectTransformGizmo.Channels.Position | ObjectTransformGizmo.Channels.Rotation | ObjectTransformGizmo.Channels.Scale);

            transformGizmo.SharedSettings = _objectUniversalGizmoSettings;

            return transformGizmo;
        }

        public void Update_SystemCall()
        {
            foreach (var sceneGizmoCam in _sceneGizmoCameras)
                sceneGizmoCam.Update_SystemCall();

            _pipelineStage = GizmosEnginePipelineStage.Update;
            IInputDevice inputDevice = RTInputDevice.Get.Device;
            bool deviceHasPointer = inputDevice.HasPointer();
            Vector3 inputDevicePos = inputDevice.GetPositionYAxisUp();

            bool isUIHovered = RTScene.Get.IsAnyUIElementHovered();
            bool canUpdateHoverInfo = _draggedGizmo == null && !isUIHovered;

            if (canUpdateHoverInfo)
            {
                YesNoAnswer answer = new YesNoAnswer();
                if (CanDoHoverUpdate != null) CanDoHoverUpdate(answer);
                if (answer.HasNo) canUpdateHoverInfo = false;
            }

            if (canUpdateHoverInfo) 
            {
                _hoveredGizmo = null;
                _gizmoHoverInfo.Reset();
            }

            bool isDeviceInsideFocusCamera = deviceHasPointer && RTFocusCamera.Get.IsViewportHoveredByDevice(); //RTFocusCamera.Get.TargetCamera.pixelRect.Contains(inputDevicePos);
            bool focusCameraCanRenderGizmos = IsRenderCamera(RTFocusCamera.Get.TargetCamera);
            var hoverDataCollection = new List<GizmoHandleHoverData>(10);
            foreach (var gizmo in _gizmos)
            {
                gizmo.OnUpdateBegin_SystemCall();
                if (canUpdateHoverInfo && gizmo.IsEnabled &&
                    isDeviceInsideFocusCamera && deviceHasPointer && focusCameraCanRenderGizmos)
                {
                    var handleHoverData = GetGizmoHandleHoverData(gizmo);
                    if (handleHoverData != null) hoverDataCollection.Add(handleHoverData);
                }
            }

            GizmoHandleHoverData hoverData = null;
            if (canUpdateHoverInfo && hoverDataCollection.Count != 0)
            {
                SortHandleHoverDataCollection(hoverDataCollection, inputDevicePos);

                hoverData = hoverDataCollection[0];
                _hoveredGizmo = hoverData.Gizmo;
                _gizmoHoverInfo.HandleId = hoverData.HandleId;
                _gizmoHoverInfo.HandleDimension = hoverData.HandleDimension;
                _gizmoHoverInfo.HoverPoint = hoverData.HoverPoint;
                _gizmoHoverInfo.IsHovered = true;
            }

            foreach (var gizmo in _gizmos)
            {
                _gizmoHoverInfo.IsHovered = (gizmo == _hoveredGizmo);
                gizmo.UpdateHandleHoverInfo_SystemCall(_gizmoHoverInfo);

                gizmo.HandleInputDeviceEvents_SystemCall();
                gizmo.OnUpdateEnd_SystemCall();
            }

            _pipelineStage = GizmosEnginePipelineStage.PostUpdate;
        }

        public GizmoHandleHoverData GetGizmoHandleHoverData(Gizmo gizmo)
        {
            Camera focusCamera = gizmo.FocusCamera;
            Ray hoverRay = RTInputDevice.Get.Device.GetRay(focusCamera);
            var hoverDataCollection = gizmo.GetAllHandlesHoverData(hoverRay);

            Vector3 screenRayOrigin = focusCamera.WorldToScreenPoint(hoverRay.origin);
            hoverDataCollection.Sort(delegate(GizmoHandleHoverData h0, GizmoHandleHoverData h1)
            {
                var handle0 = gizmo.GetHandleById_SystemCall(h0.HandleId);
                var handle1 = gizmo.GetHandleById_SystemCall(h1.HandleId);

                // Same dimensions?
                bool sameDims = (h0.HandleDimension == h1.HandleDimension);
                if (sameDims)
                {
                    // 2D dimension?
                    if (h0.HandleDimension == GizmoDimension.Dim2D)
                    {
                        // If the priorities are equal, we sort by distance from screen ray origin. 
                        // Otherwise, we sort by priority.
                        if (handle0.HoverPriority2D == handle1.HoverPriority2D)
                        {
                            float d0 = (screenRayOrigin - h0.HoverPoint).sqrMagnitude;
                            float d1 = (screenRayOrigin - h1.HoverPoint).sqrMagnitude;
                            return d0.CompareTo(d1);
                        }
                        else return handle0.HoverPriority2D.CompareTo(handle1.HoverPriority2D);
                    }
                    // 3D dimension
                    else
                    {
                        // If the priorities are equal, we sort by hover enter. Otherwise, we sort by priority.
                        if (handle0.HoverPriority3D == handle1.HoverPriority3D) return h0.HoverEnter3D.CompareTo(h1.HoverEnter3D);
                        else return handle0.HoverPriority3D.CompareTo(handle1.HoverPriority3D);
                    }
                }
                else
                {
                    // When the dimensions differ, we will sort by the gizmo generic priority. If the priorities are equal,
                    // we will give priority to 2D handles.
                    if (handle0.GenericHoverPriority == handle1.GenericHoverPriority)
                    {
                        if (h0.HandleDimension == GizmoDimension.Dim2D) return -1;
                        return 1;
                    }
                    return handle0.GenericHoverPriority.CompareTo(handle1.GenericHoverPriority);
                }
            });

            return hoverDataCollection.Count != 0 ? hoverDataCollection[0] : null;
        }

        public void Render_SystemCall()
        {
            _pipelineStage = GizmosEnginePipelineStage.Render;
            Camera renderCamera = Camera.current;

            if (!IsSceneGizmoCamera(renderCamera) && !IsRenderCamera(renderCamera))
            {
                _pipelineStage = GizmosEnginePipelineStage.PostRender;
                return;
            }

            if (Settings.EnableGizmoSorting)
            {
                Vector3 camPos = RenderStageCamera.transform.position;
                var sortedGizmos = new List<Gizmo>(_gizmos);
                sortedGizmos.Sort(delegate(Gizmo g0, Gizmo g1)
                {
                    float d0 = (g0.Transform.Position3D - camPos).sqrMagnitude;
                    float d1 = (g1.Transform.Position3D - camPos).sqrMagnitude;

                    return d1.CompareTo(d0);
                });

                var worldFrustumPlanes = CameraViewVolume.GetCameraWorldPlanes(renderCamera);
                foreach (var gizmo in sortedGizmos)
                {
                    gizmo.Render_SystemCall(renderCamera, worldFrustumPlanes);
                }
            }
            else
            {
                var worldFrustumPlanes = CameraViewVolume.GetCameraWorldPlanes(renderCamera);
                foreach (var gizmo in _gizmos)
                {
                    gizmo.Render_SystemCall(renderCamera, worldFrustumPlanes);
                }
            }

            _pipelineStage = GizmosEnginePipelineStage.PostRender;
        }

        private void SortHandleHoverDataCollection(List<GizmoHandleHoverData> hoverDataCollection, Vector3 inputDevicePos)
        {
            if (hoverDataCollection.Count == 0) return;

            Ray hoverRay = hoverDataCollection[0].HoverRay;
            hoverDataCollection.Sort(delegate(GizmoHandleHoverData h0, GizmoHandleHoverData h1)
            {
                // Same dimensions?
                bool sameDims = (h0.HandleDimension == h1.HandleDimension);
                if (sameDims)
                {
                    // 2D dimension?
                    if(h0.HandleDimension == GizmoDimension.Dim2D)
                    {
                        // If the gizmo 2D hover priorities are equal, we sort by distance from input device position. 
                        // Otherwise, we sort by priority.
                        if (h0.Gizmo.HoverPriority2D == h1.Gizmo.HoverPriority2D)
                        {
                            float d0 = (inputDevicePos - h0.HoverPoint).sqrMagnitude;
                            float d1 = (inputDevicePos - h1.HoverPoint).sqrMagnitude;
                            return d0.CompareTo(d1);
                        }
                        else return h0.Gizmo.HoverPriority2D.CompareTo(h1.Gizmo.HoverPriority2D);
                    }
                    // 3D dimension
                    else
                    {
                        // If the gizmo 3D hover priorities are equal, we sort by hover enter. Otherwise, we sort by priority.
                        if (h0.Gizmo.HoverPriority3D == h1.Gizmo.HoverPriority3D) return h0.HoverEnter3D.CompareTo(h1.HoverEnter3D);
                        else return h0.Gizmo.HoverPriority3D.CompareTo(h1.Gizmo.HoverPriority3D);
                    }
                }
                else
                {
                    // When the dimensions differ, we will sort by the generic priority. If the priorities are equal,
                    // we will sort by the distance between the gizmo position and the ray origin.
                    if (h0.Gizmo.GenericHoverPriority == h1.Gizmo.GenericHoverPriority)
                    {
                        float d0 = (h0.Gizmo.Transform.Position3D - hoverRay.origin).sqrMagnitude;
                        float d1 = (h1.Gizmo.Transform.Position3D - hoverRay.origin).sqrMagnitude;
                        return d0.CompareTo(d1);
                    }
                    return h0.Gizmo.GenericHoverPriority.CompareTo(h1.Gizmo.GenericHoverPriority);
                }
            });
        }

        private void RegisterGizmo(Gizmo gizmo)
        {
            _gizmos.Add(gizmo);
            gizmo.PreDragBegin += OnGizmoDragBegin;
            gizmo.PreDragEnd += OnGizmoDragEnd;
        }

        private void OnGUI()
        {
            _pipelineStage = GizmosEnginePipelineStage.GUI;
            foreach (var gizmo in _gizmos)
            {
                gizmo.OnGUI_SystemCall();
            }
            _pipelineStage = GizmosEnginePipelineStage.PostGUI;
        }

        private void OnGizmoDragBegin(Gizmo gizmo, int handleId)
        {
            _draggedGizmo = gizmo;
        }

        private void OnGizmoDragEnd(Gizmo gizmo, int handleId)
        {
            _draggedGizmo = null;
        }
    }
}
