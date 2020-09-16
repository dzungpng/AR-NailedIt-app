using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    public delegate void RTGAppInitializedHandler();

    public class RTGApp : MonoSingleton<RTGApp>, IRLDApplication
    {
        public event RTGAppInitializedHandler Initialized;

        private void OnCanCameraUseScrollWheel(YesNoAnswer answer)
        {
            if (RTScene.Get.IsAnyUIElementHovered()) answer.No();
            else answer.Yes();
        }

        private void OnCanCameraProcessInput(YesNoAnswer answer)
        {
            if (RTGizmosEngine.Get.DraggedGizmo != null) answer.No();
            else answer.Yes();
        }

        private void OnCanUndoRedo(UndoRedoOpType undoRedoOpType, YesNoAnswer answer)
        {
            if (RTGizmosEngine.Get.DraggedGizmo == null) answer.Yes();
            else answer.No();
        }

        private void OnCanDoGizmoHoverUpdate(YesNoAnswer answer)
        {
            answer.Yes();
        }

        private void OnViewportsCameraAdded(Camera camera)
        {
            RTGizmosEngine.Get.AddRenderCamera(camera);
        }

        private void OnViewportCameraRemoved(Camera camera)
        {
            RTGizmosEngine.Get.RemoveRenderCamera(camera);
        }

        private void Start()
        {
            // Undo/Redo
            RTUndoRedo.Get.CanUndoRedo += OnCanUndoRedo;

            // Camera
            RTFocusCamera.Get.CanProcessInput += OnCanCameraProcessInput;
            RTFocusCamera.Get.CanUseScrollWheel += OnCanCameraUseScrollWheel;
            RTCameraViewports.Get.CameraAdded += OnViewportsCameraAdded;
            RTCameraViewports.Get.CameraRemoved += OnViewportCameraRemoved;

            // Scene
            RTScene.Get.RegisterHoverableSceneEntityContainer(RTGizmosEngine.Get);
            RTSceneGrid.Get.Initialize_SystemCall();

            // Gizmo engine
            RTGizmosEngine.Get.CanDoHoverUpdate += OnCanDoGizmoHoverUpdate;
            RTGizmosEngine.Get.CreateSceneGizmo(RTFocusCamera.Get.TargetCamera);
            RTGizmosEngine.Get.AddRenderCamera(RTFocusCamera.Get.TargetCamera);

            RTMeshCompiler.CompileEntireScene();
            if (Initialized != null) Initialized();
        }

        private void Update()
        {
            // Note: Don't change the order :)
            RTInputDevice.Get.Update_SystemCall();
            RTFocusCamera.Get.Update_SystemCall();
            RTScene.Get.Update_SystemCall();
            RTSceneGrid.Get.Update_SystemCall();
            RTGizmosEngine.Get.Update_SystemCall();
            RTUndoRedo.Get.Update_SystemCall();
        }

        private void OnRenderObject()
        {
            if (RTGizmosEngine.Get.IsSceneGizmoCamera(Camera.current))
            {
                RTGizmosEngine.Get.Render_SystemCall();
            }
            else
            {
                // Note: Don't change the order :)
                if (RTCameraBackground.Get != null) RTCameraBackground.Get.Render_SystemCall();
                RTSceneGrid.Get.Render_SystemCall();
                RTGizmosEngine.Get.Render_SystemCall();
            }
        }

        #if UNITY_EDITOR
        [MenuItem("Tools/Runtime Transform Gizmos/Initialize")]
        public static void Initialize()
        {
            DestroyAppAndModules();
            RTGApp gizmosApp = CreateAppModuleObject<RTGApp>(null);
            Transform appTransform = gizmosApp.transform;

            CreateAppModuleObject<RTGizmosEngine>(appTransform);

            CreateAppModuleObject<RTScene>(appTransform);
            CreateAppModuleObject<RTSceneGrid>(appTransform);

            var focusCamera = CreateAppModuleObject<RTFocusCamera>(appTransform);
            focusCamera.SetTargetCamera(Camera.main);
            CreateAppModuleObject<RTCameraBackground>(appTransform);

            CreateAppModuleObject<RTInputDevice>(appTransform);
            CreateAppModuleObject<RTUndoRedo>(appTransform);
        }

        private static DataType CreateAppModuleObject<DataType>(Transform parentTransform) where DataType : MonoBehaviour
        {
            string objectName = typeof(DataType).ToString();
            int dotIndex = objectName.IndexOf(".");
            if (dotIndex >= 0) objectName = objectName.Remove(0, dotIndex + 1);

            GameObject moduleObject = new GameObject(objectName);
            moduleObject.transform.parent = parentTransform;

            return moduleObject.AddComponent<DataType>();
        }

        private static void DestroyAppAndModules()
        {
            Type[] allModuleTypes = GetAppModuleTypes();
            foreach (var moduleType in allModuleTypes)
            {
                var allModulesInScene = MonoBehaviour.FindObjectsOfType(moduleType);
                foreach(var module in allModulesInScene)
                {
                    MonoBehaviour moduleMono = module as MonoBehaviour;
                    if (moduleMono != null) DestroyImmediate(moduleMono.gameObject);
                }
            }
        }

        private static Type[] GetAppModuleTypes()
        {
            return new Type[]
            {
                typeof(RTGApp), typeof(RTFocusCamera), typeof(RTCameraBackground), 
                typeof(RTScene), typeof(RTSceneGrid), 
                typeof(RTInputDevice), typeof(RTUndoRedo), typeof(RTGizmosEngine),
            };
        }
        #endif
    }
}
