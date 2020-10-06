using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class SceneTree
    {
        private SphereTree<GameObject> _objectTree = new SphereTree<GameObject>(2);
        private Dictionary<GameObject, SphereTreeNode<GameObject>> _objectToNode = new Dictionary<GameObject, SphereTreeNode<GameObject>>();

        public GameObjectRayHit RaycastMeshObject(Ray ray, GameObject gameObject)
        {
            Mesh objectMesh = gameObject.GetMesh();
            RTMesh rtMesh = RTMeshDb.Get.GetRTMesh(objectMesh);

            if (rtMesh != null)
            {
                MeshRayHit meshRayHit = rtMesh.Raycast(ray, gameObject.transform.localToWorldMatrix);
                if (meshRayHit != null) return new GameObjectRayHit(ray, gameObject, meshRayHit);
            }
            else
            {
                // If no RTMesh instance is available, we will cast a ray against
                // the object's MeshCollider as a last resort. This is actually useful
                // when dealing with static mesh objects. These objects' meshes have
                // their 'isReadable' flag set to false and can not be used to create
                // an RTMesh instance. Thus a mesh collider is the next best choice.
                MeshCollider meshCollider = gameObject.GetComponent<MeshCollider>();
                if (meshCollider != null)
                {
                    RaycastHit rayHit;
                    if (meshCollider.Raycast(ray, out rayHit, float.MaxValue)) return new GameObjectRayHit(ray, rayHit);
                }
            }

            return null;
        }

        public GameObjectRayHit RaycastSpriteObject(Ray ray, GameObject gameObject)
        {
            float t;
            OBB worldOBB = ObjectBounds.CalcSpriteWorldOBB(gameObject);
            if (!worldOBB.IsValid) return null;

            if (BoxMath.Raycast(ray, out t, worldOBB.Center, worldOBB.Size, worldOBB.Rotation)) 
                return new GameObjectRayHit(ray, gameObject, worldOBB.GetPointFaceNormal(ray.GetPoint(t)), t);

            return null;
        }

        public List<GameObjectRayHit> RaycastAll(Ray ray, SceneRaycastPrecision raycastPresicion)
        {
            var nodeHits = _objectTree.RaycastAll(ray);
            if (nodeHits.Count == 0) return new List<GameObjectRayHit>();

            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
            boundsQConfig.NoVolumeSize = Vector3Ex.FromValue(RTScene.Get.Settings.NonMeshObjectSize);

            Vector3 camLook = RTFocusCamera.Get.Look;
            if (raycastPresicion == SceneRaycastPrecision.BestFit)
            {
                var hitList = new List<GameObjectRayHit>(10);
                foreach (var nodeHit in nodeHits)
                {
                    GameObject sceneObject = nodeHit.HitNode.Data;
                    if (sceneObject == null || !sceneObject.activeInHierarchy) continue;

                    Renderer renderer = sceneObject.GetComponent<Renderer>();
                    if (renderer != null && !renderer.isVisible) continue;

                    GameObjectType objectType = sceneObject.GetGameObjectType();
                    if (objectType == GameObjectType.Mesh)
                    {
                        GameObjectRayHit objectHit = RaycastMeshObject(ray, sceneObject);
                        if (objectHit != null) hitList.Add(objectHit);
                    }
                    else
                    if (objectType == GameObjectType.Terrain)
                    {
                        TerrainCollider terrainCollider = sceneObject.GetComponent<TerrainCollider>();
                        if(terrainCollider != null)
                        {
                            RaycastHit hitInfo;
                            if (terrainCollider.Raycast(ray, out hitInfo, float.MaxValue)) hitList.Add(new GameObjectRayHit(ray, hitInfo));
                        }
                    }
                    else
                    if(objectType == GameObjectType.Sprite)
                    {
                        GameObjectRayHit objectHit = RaycastSpriteObject(ray, sceneObject);
                        if (objectHit != null) hitList.Add(objectHit);
                    }
                    else
                    {
                        OBB worldOBB = ObjectBounds.CalcWorldOBB(sceneObject, boundsQConfig);
                        if (worldOBB.IsValid)
                        {
                            float t;
                            if (BoxMath.Raycast(ray, out t, worldOBB.Center, worldOBB.Size, worldOBB.Rotation))
                            {
                                var faceDesc = BoxMath.GetFaceClosestToPoint(ray.GetPoint(t), worldOBB.Center, worldOBB.Size, worldOBB.Rotation, camLook);
                                var hit = new GameObjectRayHit(ray, sceneObject, faceDesc.Plane.normal, t);
                                hitList.Add(hit);
                            }
                        }
                    }
                }

                return hitList;
            }
            else
            if (raycastPresicion == SceneRaycastPrecision.Box)
            {
                var hitList = new List<GameObjectRayHit>(10);
                foreach (var nodeHit in nodeHits)
                {
                    GameObject sceneObject = nodeHit.HitNode.Data;
                    if (sceneObject == null || !sceneObject.activeInHierarchy) continue;

                    Renderer renderer = sceneObject.GetComponent<Renderer>();
                    if (renderer != null && !renderer.isVisible) continue;

                    OBB worldOBB = ObjectBounds.CalcWorldOBB(sceneObject, boundsQConfig);
                    if (worldOBB.IsValid)
                    {
                        float t;
                        if (BoxMath.Raycast(ray, out t, worldOBB.Center, worldOBB.Size, worldOBB.Rotation))
                        {
                            var faceDesc = BoxMath.GetFaceClosestToPoint(ray.GetPoint(t), worldOBB.Center, worldOBB.Size, worldOBB.Rotation, camLook);
                            var hit = new GameObjectRayHit(ray, sceneObject, faceDesc.Plane.normal, t);
                            hitList.Add(hit);
                        }
                    }
                }

                return hitList;
            }
            
            return new List<GameObjectRayHit>();
        }

        public List<GameObject> OverlapBox(OBB obb)
        {
            List<SphereTreeNode<GameObject>> overlappedNodes = _objectTree.OverlapBox(obb);
            if (overlappedNodes.Count == 0) return new List<GameObject>();

            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
            boundsQConfig.NoVolumeSize = Vector3Ex.FromValue(RTScene.Get.Settings.NonMeshObjectSize);

            var overlappedObjects = new List<GameObject>();
            foreach (SphereTreeNode<GameObject> node in overlappedNodes)
            {
                GameObject sceneObject = (GameObject)node.Data;
                if (sceneObject == null || !sceneObject.activeInHierarchy) continue;

                OBB worldOBB = ObjectBounds.CalcWorldOBB(sceneObject, boundsQConfig);
                if (obb.IntersectsOBB(worldOBB)) overlappedObjects.Add(sceneObject);
            }

            return overlappedObjects;
        }

        public bool IsObjectRegistered(GameObject gameObject)
        {
            return _objectToNode.ContainsKey(gameObject);
        }

        public void RegisterObject(GameObject gameObject)
        {
            if (!CanRegisterObject(gameObject)) return;

            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
            boundsQConfig.NoVolumeSize = Vector3Ex.FromValue(RTScene.Get.Settings.NonMeshObjectSize);

            AABB worldAABB = ObjectBounds.CalcWorldAABB(gameObject, boundsQConfig);
            Sphere worldSphere = new Sphere(worldAABB);

            SphereTreeNode<GameObject> objectNode = _objectTree.AddNode(gameObject, worldSphere);
            _objectToNode.Add(gameObject, objectNode);

            RTFocusCamera.Get.SetObjectVisibilityDirty();
        }

        public void OnObjectTransformChanged(Transform objectTransform)
        {
            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
            boundsQConfig.NoVolumeSize = Vector3Ex.FromValue(RTScene.Get.Settings.NonMeshObjectSize);

            AABB worldAABB = ObjectBounds.CalcWorldAABB(objectTransform.gameObject, boundsQConfig);
            Sphere worldSphere = new Sphere(worldAABB);

            SphereTreeNode<GameObject> objectNode = _objectToNode[objectTransform.gameObject];
            objectNode.Sphere = worldSphere;

            _objectTree.OnNodeSphereUpdated(objectNode);
            RTFocusCamera.Get.SetObjectVisibilityDirty();
        }

        public void RemoveNodesWithNullObjects()
        {
            var newObjectToNodeDictionary = new Dictionary<GameObject, SphereTreeNode<GameObject>>();
            foreach (var pair in _objectToNode)
            {
                if (pair.Key == null)  _objectTree.RemoveNode(pair.Value);
                else newObjectToNodeDictionary.Add(pair.Key, pair.Value);
            }

            _objectToNode.Clear();
            _objectToNode = newObjectToNodeDictionary;
        }

        public void DebugDraw()
        {
            _objectTree.DebugDraw();
        }

        private bool CanRegisterObject(GameObject gameObject)
        {
            if (gameObject == null || IsObjectRegistered(gameObject)) return false;
            if (gameObject.IsRLDAppObject()) return false;
            if (gameObject.GetComponent<RectTransform>() != null) return false;

            return true;
        }
    }
}
