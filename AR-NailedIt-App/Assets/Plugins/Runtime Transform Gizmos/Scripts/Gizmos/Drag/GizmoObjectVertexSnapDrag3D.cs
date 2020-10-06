using UnityEngine;
using System.Collections.Generic;
using System;

namespace RTG
{
    public class GizmoObjectVertexSnapDrag3D : GizmoDragSession
    {
        private IEnumerable<GameObject> _targetObjects;
        private Vector3 _snapPivot;
        private bool _isActive;
        private List<GameObject> _destinationObjects = new List<GameObject>();
        private GizmoObjectVertexSnapSettings _settings = new GizmoObjectVertexSnapSettings();

        public override bool IsActive { get { return _isActive; } }
        public override GizmoDragChannel DragChannel { get { return GizmoDragChannel.Offset; } }
        public Vector3 SnapPivot { get { return _snapPivot; } }
        public GizmoObjectVertexSnapSettings Settings { set { if (value != null) _settings = value; } }

        public void SetTargetObjects(IEnumerable<GameObject> targetObjects)
        {
            if (!IsActive) _targetObjects = targetObjects;
        }

        public bool SelectSnapPivotPoint(Gizmo gizmo)
        {
            if (_targetObjects == null || IsActive) return false;

            return GetWorldPointClosestToInputDevice(gizmo.FocusCamera, _targetObjects, out _snapPivot);
        }

        protected override bool DoBeginSession()
        {
            if (_targetObjects == null) return false;
            _isActive = true;

            return true;
        }

        protected override bool DoUpdateSession()
        {
            GatherDestinationObjects();
            return true;
        }

        protected override void DoEndSession()
        {
            _isActive = false;
            _destinationObjects.Clear();
        }

        protected override void CalculateDragValues()
        {
            Camera focusCamera = RTFocusCamera.Get.TargetCamera;
            _relativeDragOffset = Vector3.zero;

            if (_destinationObjects.Count != 0 && _settings.CanSnapToObjectVerts)
            {
                Vector3 worldDestPos;
                if (GetWorldPointClosestToInputDevice(focusCamera, _destinationObjects, out worldDestPos)) _relativeDragOffset = worldDestPos - _snapPivot;
            }
            else
            if(_settings.CanSnapToGrid)
            {
                Ray ray = RTInputDevice.Get.Device.GetRay(focusCamera);
                XZGridRayHit gridHit = RTScene.Get.RaycastSceneGridIfVisible(ray);
                if (gridHit != null)
                {
                    XZGridCell gridCell = RTSceneGrid.Get.CellFromWorldPoint(gridHit.HitPoint);
                    List<Vector3> centersAndCorners = gridCell.GetCenterAndCorners();
                    int closestPtIndex = Vector3Ex.GetPointClosestToPoint(centersAndCorners, gridHit.HitPoint);
                    if (closestPtIndex >= 0) _relativeDragOffset = centersAndCorners[closestPtIndex] - _snapPivot;
                }
            }

            _snapPivot += _relativeDragOffset;
            _totalDragOffset += _relativeDragOffset;
        }

        protected bool GetWorldPointClosestToInputDevice(Camera focusCamera, IEnumerable<GameObject> gameObjects, out Vector3 point)
        {
            point = Vector3.zero;
            if (gameObjects == null) return false;
            if (!RTInputDevice.Get.Device.HasPointer()) return false;

            Vector2 inputDeviceScreenPt = RTInputDevice.Get.Device.GetPositionYAxisUp();
            float minDistSqr = float.MaxValue;

            bool foundPoint = false;
            foreach (var srcObject in gameObjects)
            {
                Mesh mesh = srcObject.GetMesh();
                if (mesh != null)
                {
                    MeshVertexChunkCollection meshVChunkCollection = MeshVertexChunkCollectionDb.Get[mesh];
                    if (meshVChunkCollection == null) continue;

                    Matrix4x4 worldMtx = srcObject.transform.localToWorldMatrix;
                    List<MeshVertexChunk> testChunks = meshVChunkCollection.GetWorldChunksHoveredByPoint(inputDeviceScreenPt, worldMtx, focusCamera);
                    if (testChunks.Count == 0)
                    {
                        MeshVertexChunk closestChunk = meshVChunkCollection.GetWorldVertChunkClosestToScreenPt(inputDeviceScreenPt, worldMtx, focusCamera);
                        if (closestChunk != null && closestChunk.VertexCount != 0) testChunks.Add(closestChunk);
                    }

                    foreach (var chunk in testChunks)
                    {
                        Vector3 worldVert = chunk.GetWorldVertClosestToScreenPt(inputDeviceScreenPt, worldMtx, focusCamera);
                        Vector2 screenVert = focusCamera.WorldToScreenPoint(worldVert);
                        float distSqr = (inputDeviceScreenPt - screenVert).sqrMagnitude;
                        if (distSqr < minDistSqr)
                        {
                            minDistSqr = distSqr;
                            point = worldVert;
                            foundPoint = true;
                        }
                    }
                }
                else
                {
                    OBB spriteWorldOBB = ObjectBounds.CalcSpriteWorldOBB(srcObject);
                    if (spriteWorldOBB.IsValid)
                    {
                        List<Vector3> obbPoints = spriteWorldOBB.GetCenterAndCornerPoints();
                        List<Vector2> screenPoints = focusCamera.ConvertWorldToScreenPoints(obbPoints);
                        int closestPtIndex = Vector2Ex.GetPointClosestToPoint(screenPoints, inputDeviceScreenPt);
                        if (closestPtIndex >= 0)
                        {
                            Vector2 closestPt = screenPoints[closestPtIndex];
                            float distSqr = (inputDeviceScreenPt - closestPt).sqrMagnitude;
                            if (distSqr < minDistSqr)
                            {
                                minDistSqr = distSqr;
                                point = obbPoints[closestPtIndex];
                                foundPoint = true;
                            }
                        }
                    }
                }
            }

            return foundPoint;
        }

        protected bool CanUseObjectAsSnapDestination(GameObject gameObject)
        {
            return _settings.IsLayerSnapDestination(gameObject.layer);
        }

        private void GatherDestinationObjects()
        {
            Camera focusCamera = RTFocusCamera.Get.TargetCamera;
            _destinationObjects.Clear();

            IInputDevice inputDevice = RTInputDevice.Get.Device;
            if (!inputDevice.HasPointer()) return;
            Vector2 inputDevicePos = inputDevice.GetPositionYAxisUp();

            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
            boundsQConfig.NoVolumeSize = Vector3Ex.FromValue(1e-5f);

            List<GameObject> visibleObjects = RTFocusCamera.Get.GetVisibleObjects();
            List<GameObject> targetObjects = new List<GameObject>(_targetObjects);
            visibleObjects.RemoveAll(a => targetObjects.Contains(a) ||
                                     !ObjectBounds.CalcScreenRect(a, focusCamera, boundsQConfig).Contains(inputDevicePos) ||
                                      targetObjects.FindAll(b => a.transform.IsChildOf(b.transform)).Count != 0);

            foreach (var visibleObject in visibleObjects)
            {
                if (!CanUseObjectAsSnapDestination(visibleObject)) continue;

                GameObjectType objectType = visibleObject.GetGameObjectType();
                if (objectType == GameObjectType.Mesh || objectType == GameObjectType.Sprite) _destinationObjects.Add(visibleObject);
            }
        }
    }
}
