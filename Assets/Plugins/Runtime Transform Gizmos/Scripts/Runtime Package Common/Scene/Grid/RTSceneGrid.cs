using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class RTSceneGrid : MonoSingleton<RTSceneGrid>, IXZGrid
    {
        private enum SnapToPointMode
        {
            Exact,
            ClosestExtremity
        }

        [SerializeField]
        private SceneGridHotkeys _hotkeys = new SceneGridHotkeys();
        [SerializeField]
        private XZGridSettings _settings = new XZGridSettings();
        [SerializeField]
        private XZGridLookAndFeel _lookAndFeel = new XZGridLookAndFeel();

        private List<Camera> _renderIgnoreCameras = new List<Camera>();

        public Quaternion Rotation { get { return Quaternion.Euler(Settings.RotationAngles); } }
        public Vector3 Right { get { return Rotation * Vector3.right; } }
        public Vector3 Look { get { return Rotation * Vector3.forward; } }
        public Vector3 Normal { get { return Rotation * Vector3.up; } }
        public Plane WorldPlane { get { return new Plane(Normal, Normal * YOffset); } }
        public Matrix4x4 WorldMatrix { get { return Matrix4x4.TRS(Normal * YOffset, Rotation, Vector3.one); } }
        public float YOffset { get { return Settings.YOffset; } set { Settings.YOffset = value; } }
        public SceneGridHotkeys Hotkeys { get { return _hotkeys; } }
        public XZGridSettings Settings { get { return _settings; } }
        public XZGridLookAndFeel LookAndFeel { get { return _lookAndFeel; } }

        public void Initialize_SystemCall()
        {
            RTInputDevice.Get.Device.DoubleTap += OnInputDeviceDoubleTap;
        }

        public bool IsRenderIgnoreCamera(Camera camera)
        {
            return _renderIgnoreCameras.Contains(camera);
        }

        public void AddRenderIgnoreCamera(Camera camera)
        {
            if (!IsRenderIgnoreCamera(camera)) _renderIgnoreCameras.Add(camera);
        }

        public void RemoveRenderIgnoreCamera(Camera camera)
        {
            _renderIgnoreCameras.Remove(camera);
        }

        public XZGridCell CellFromWorldPoint(Vector3 worldPoint)
        {
            return XZGridCell.FromPoint(worldPoint, _settings.CellSizeX, _settings.CellSizeZ, this);
        }

        public bool Raycast(Ray ray, out float t)
        {
            return WorldPlane.Raycast(ray, out t);
        }

        public void Update_SystemCall()
        {
            if (!Settings.IsVisible) return;

            if (Hotkeys.GridUp.IsActiveInFrame()) MoveUp();
            else if (Hotkeys.GridDown.IsActiveInFrame()) MoveDown();     

            if (!RTInputDevice.Get.Device.DidDoubleTap &&
                 RTInputDevice.Get.Device.WasButtonPressedInCurrentFrame(0))
            {
                if (Hotkeys.SnapToCursorPickPoint.IsActive())
                {
                    var rayHit = GetSceneHitForGridSnap();
                    if (rayHit.WasAnObjectHit) SnapToObjectHitPoint(rayHit.ObjectHit, SnapToPointMode.Exact);
                }
            }
        }

        public void Render_SystemCall()
        {
            if (!Settings.IsVisible) return;

            Camera camera = Camera.current;
            if (IsRenderIgnoreCamera(camera)) return;

            AABB camViewVolumeAABB = camera.CalculateVolumeAABB();

            Vector3 gridPlanePos = WorldPlane.ProjectPoint(camViewVolumeAABB.Center);
            Vector3 gridPlaneScale = camViewVolumeAABB.Size * 2.0f;
            gridPlaneScale.y = 1.0f;
            Matrix4x4 transformMatrix = Matrix4x4.TRS(gridPlanePos, Rotation, gridPlaneScale);

            // Continue based on whether cell fading is used
            if (LookAndFeel.UseCellFading)
            {
                // We will need to render the grid twice to simulate the grid effect which exists in Unity.
                // When zooming out, it appears that smaller cells fade away while newer and bigger ones 
                // appear instead. We can do this by rendering the grid twice with different cell sizes and
                // alpha values. The first step is to calculate the camera zoom (abs y position) and then
                // count the number of digits in this value.
                float cameraZoom = CalculateCellFadeZoom(camera);
                int numDigits = MathEx.GetNumDigits((int)cameraZoom);

                // The number of digits inside the camera zoom can be used to calculate two power of 10 values.
                // These values will be used to calculate 2 cell sizes: the small size which is fading out and
                // the bigger size which is fading in.
                // Example (assume XZ cell size of 1 and camera Y pos of 10.5)
                //      Zoom = 10 => NumDigits = 2;
                //      Power0 = 1; Power1 = 2;
                //      SmallCellSize = baseSize * 10 ^ Power0 = 10;
                //      BigCellSize = baseSize * 10 ^ Power1 = 100;
                // So the cell size increases in powers of 10.
                int csPower0 = numDigits - 1;
                int csPower1 = csPower0 + 1;

                // Calculate the cell size scale value based on the calculated powers of 10
                float csScale0 = Mathf.Pow(10.0f, csPower0);
                float csScale1 = Mathf.Pow(10.0f, csPower1);

                // Calculate the alpha scale values. The first alpha scale value is used to fade out the small cells. 
                // The second alpha is used to fade in the bigger ones.
                Color color = LookAndFeel.LineColor;
                float alpha0 = (csScale1 - cameraZoom) / (csScale1 - csScale0);
                float alpha1 = 1.0f - alpha0;

                // Set material properties
                Material material = MaterialPool.Get.XZGrid_Plane;
                material.SetFloat("_CamFarPlaneDist", camera.farClipPlane);
                material.SetVector("_CamWorldPos", camera.transform.position);
                material.SetVector("_GridOrigin", Vector3.zero);
                material.SetVector("_GridRight", Right);
                material.SetVector("_GridLook", Look);
                material.SetMatrix("_TransformMatrix", transformMatrix);

                // Render in 2 passes to achieve the cell fade effect
                color.a = LookAndFeel.LineColor.a * alpha0;
                if (color.a != 0.0f)
                {
                    // Set material properties for this pass
                    material.SetFloat("_CellSizeX", Settings.CellSizeX * csScale0);
                    material.SetFloat("_CellSizeZ", Settings.CellSizeZ * csScale0);
                    material.SetColor("_LineColor", color);
                    material.SetPass(0);

                    // Render
                    Graphics.DrawMeshNow(MeshPool.Get.UnitQuadXZ, transformMatrix);
                }
                color.a = LookAndFeel.LineColor.a * alpha1;
                if (color.a != 0.0f)
                {
                    // Set material properties for this pass
                    material.SetFloat("_CellSizeX", Settings.CellSizeX * csScale1);
                    material.SetFloat("_CellSizeZ", Settings.CellSizeZ * csScale1);
                    material.SetColor("_LineColor", color);
                    material.SetPass(0);

                    // Render
                    Graphics.DrawMeshNow(MeshPool.Get.UnitQuadXZ, transformMatrix);
                }
            }
            else
            {
                // Just render the grid once with the chosen cell size
                Material material = MaterialPool.Get.XZGrid_Plane;
                material.SetFloat("_CamFarPlaneDist", camera.farClipPlane);
                material.SetVector("_CamWorldPos", camera.transform.position);
                material.SetMatrix("_TransformMatrix", transformMatrix);
                material.SetFloat("_CellSizeX", Settings.CellSizeX);
                material.SetFloat("_CellSizeZ", Settings.CellSizeZ);
                material.SetColor("_LineColor", LookAndFeel.LineColor);
                material.SetVector("_GridOrigin", Vector3.zero);
                material.SetVector("_GridRight", Right);
                material.SetVector("_GridLook", Look);
                material.SetPass(0);
                Graphics.DrawMeshNow(MeshPool.Get.UnitQuadXZ, transformMatrix);
            }
        }

        private void MoveUp()
        {
            if (!Settings.IsVisible) return;
            YOffset += Settings.UpDownStep;
        }

        private void MoveDown()
        {
            if (!Settings.IsVisible) return;
            YOffset -= Settings.UpDownStep;
        }

        private float CalculateCellFadeZoom(Camera camera)
        {
            return WorldPlane.GetAbsDistanceToPoint(camera.transform.position);
        }

        private SceneRaycastHit GetSceneHitForGridSnap()
        {
            var pickRay = RTInputDevice.Get.Device.GetRay(RTFocusCamera.Get.TargetCamera);
            var raycastFilter = new SceneRaycastFilter();
            raycastFilter.AllowedObjectTypes.Add(GameObjectType.Mesh);

            return RTScene.Get.Raycast(pickRay, SceneRaycastPrecision.BestFit, raycastFilter);
        }

        private void OnInputDeviceDoubleTap(IInputDevice inputDevice, Vector2 position)
        {
            if (Hotkeys.SnapToCursorPickPoint.IsActive())
            {
                var rayHit = GetSceneHitForGridSnap();
                if (rayHit.WasAnObjectHit) SnapToObjectHitPoint(rayHit.ObjectHit, SnapToPointMode.ClosestExtremity);
            }
        }

        private void SnapToObjectHitPoint(GameObjectRayHit objectHit, SnapToPointMode snapMode)
        {
            if (snapMode == SnapToPointMode.Exact)
            {
                float distToPlane = new Plane(Normal, Vector3.zero).GetDistanceToPoint(objectHit.HitPoint);
                YOffset = distToPlane;
            }
            else
            {
                var boundsQConfig = new ObjectBounds.QueryConfig();
                boundsQConfig.ObjectTypes = GameObjectType.Mesh;

                OBB worldOBB = ObjectBounds.CalcWorldOBB(objectHit.HitObject, boundsQConfig);
                if (worldOBB.IsValid)
                {
                    Plane slicePlane = new Plane(Normal, worldOBB.Center);
                    Vector3 destPt = worldOBB.Center;
                    var obbCorners = BoxMath.CalcBoxCornerPoints(worldOBB.Center, worldOBB.Size, worldOBB.Rotation);

                    float sign = Mathf.Sign(slicePlane.GetDistanceToPoint(objectHit.HitPoint));
                    if (sign > 0.0f)
                    {
                        int furthestPtInFront = slicePlane.GetFurthestPtInFront(obbCorners);
                        if (furthestPtInFront >= 0) destPt = obbCorners[furthestPtInFront];
                    }
                    else
                    {
                        int furthestPtBehind = slicePlane.GetFurthestPtBehind(obbCorners);
                        if (furthestPtBehind >= 0) destPt = obbCorners[furthestPtBehind];
                    }

                    float distToPlane = new Plane(Normal, Vector3.zero).GetDistanceToPoint(destPt);
                    YOffset = distToPlane;
                }
            }
        }
    }
}
