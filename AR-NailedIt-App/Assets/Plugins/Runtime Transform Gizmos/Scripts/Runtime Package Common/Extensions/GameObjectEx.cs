using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System.Collections.Generic;

namespace RTG
{
    public static class GameObjectEx
    {
        #if UNITY_EDITOR
        public static bool IsSceneObject(this GameObject gameObject)
        {
            PrefabAssetType prefabAssetType = PrefabUtility.GetPrefabAssetType(gameObject);
            return prefabAssetType == PrefabAssetType.NotAPrefab;
        }
        #endif

        public static void SetStatic(this GameObject gameObject, bool isStatic, bool affectChildren)
        {
            if (!affectChildren) gameObject.isStatic = isStatic;
            else
            {
                var allObjects = gameObject.GetAllChildrenAndSelf();
                foreach(var gameObj in allObjects)
                {
                    gameObj.isStatic = isStatic;
                }
            }
        }

        public static bool IsRLDAppObject(this GameObject gameObject)
        {
            GameObject rootObject = gameObject.transform.root.gameObject;
            return rootObject.GetComponent<IRLDApplication>() != null;
        }

        /// <summary>
        /// Returns the game object's type.
        /// </summary>
        /// <remarks>
        /// Because a game object might have multiple components of different types attached to 
        /// it, the function uses the following priority for object components:
        ///     1. Mesh;
        ///     2. Terrain;
        ///     3. Sprite;
        ///     4. Camera;
        ///     5. Light;
        ///     6. Particle System;
        ///     7. Empty;
        /// </remarks>
        public static GameObjectType GetGameObjectType(this GameObject gameObject)
        {
            // Check for different components in order of priority
            Mesh mesh = gameObject.GetMesh();
            if (mesh != null) return GameObjectType.Mesh;

            Terrain terrain = gameObject.GetComponent<Terrain>();
            if (terrain != null) return GameObjectType.Terrain;

            Sprite sprite = gameObject.GetSprite();
            if (sprite != null) return GameObjectType.Sprite;

            Camera camera = gameObject.GetComponent<Camera>();
            if (camera != null) return GameObjectType.Camera;

            Light light = gameObject.GetComponent<Light>();
            if (light != null) return GameObjectType.Light;

            ParticleSystem particleSystem = gameObject.GetComponent<ParticleSystem>();
            if (particleSystem != null) return GameObjectType.ParticleSystem;

            return GameObjectType.Empty;
        }

        public static bool HierarchyHasMesh(this GameObject root)
        {
            var allObjects = root.GetAllChildrenAndSelf();
            foreach (var gameObj in allObjects)
            {
                if (gameObj.GetMesh() != null) return true;
            }

            return false;
        }

        public static bool HierarchyHasSprite(this GameObject root)
        {
            var allObjects = root.GetAllChildrenAndSelf();
            foreach (var gameObj in allObjects)
            {
                if (gameObj.GetSprite() != null) return true;
            }

            return false;
        }

        public static bool HierarchyHasObjectsOfType(this GameObject root, GameObjectType typeFlags)
        {
            var allObjects = root.GetAllChildrenAndSelf();
            foreach (var gameObj in allObjects)
            {
                GameObjectType objectType = gameObj.GetGameObjectType();
                if ((typeFlags & objectType) != 0) return true;
            }

            return false;
        }

        public static List<GameObject> GetMeshObjectsInHierarchy(this GameObject root)
        {
            var allObjects = root.GetAllChildrenAndSelf();
            var allMeshObjects = new List<GameObject>(allObjects.Count);

            foreach(var gameObj in allObjects)
            {
                if (gameObj.GetMesh() != null) allMeshObjects.Add(gameObj);
            }

            return allMeshObjects;
        }

        public static List<GameObject> GetSpriteObjectsInHierarchy(this GameObject root)
        {
            var allObjects = root.GetAllChildrenAndSelf();
            var allSpriteObjects = new List<GameObject>(allObjects.Count);

            foreach (var gameObj in allObjects)
            {
                if (gameObj.GetSprite() != null) allSpriteObjects.Add(gameObj);
            }

            return allSpriteObjects;
        }

        public static void SetHierarchyWorldScaleByPivot(this GameObject root, Vector3 worldScale, Vector3 pivotPoint)
        {
            if (worldScale.x == 0.0f) worldScale.x = 1e-4f;
            if (worldScale.y == 0.0f) worldScale.y = 1e-4f;
            if (worldScale.z == 0.0f) worldScale.z = 1e-4f;

            Transform rootTransform = root.transform;
            Vector3 fromPivotToPosition = rootTransform.position - pivotPoint;
            Vector3 oldScale = rootTransform.lossyScale;
            rootTransform.SetWorldScale(worldScale);

            Vector3 invOldScaleVector = oldScale.GetInverse();
            Vector3 relativeScale = Vector3.Scale(worldScale, invOldScaleVector);
            fromPivotToPosition = Vector3.Scale(relativeScale, fromPivotToPosition);
            rootTransform.position = pivotPoint + fromPivotToPosition;
        }

        public static List<GameObject> GetAllChildren(this GameObject gameObject)
        {
            Transform[] childTransforms = gameObject.GetComponentsInChildren<Transform>();
            var allChildren = new List<GameObject>(childTransforms.Length);

            foreach(var child in childTransforms)
            {
                if(child.gameObject != gameObject) allChildren.Add(child.gameObject);
            }

            return allChildren;
        }

        public static List<GameObject> GetAllChildrenAndSelf(this GameObject gameObject)
        {
            Transform[] childTransforms = gameObject.GetComponentsInChildren<Transform>();
            var allChildren = new List<GameObject>(childTransforms.Length);

            foreach (var child in childTransforms)
            {
                allChildren.Add(child.gameObject);
            }

            return allChildren;
        }

        public static void GetAllChildrenAndSelf(this GameObject gameObject, List<GameObject> childrenAndSelf)
        {
            childrenAndSelf.Clear();

            Transform[] transforms = gameObject.GetComponentsInChildren<Transform>();
            for (int trIndex = 0; trIndex < transforms.Length; ++trIndex)
            {
                childrenAndSelf.Add(transforms[trIndex].gameObject);
            }
        }

        public static Mesh GetMesh(this GameObject gameObject)
        {
            MeshFilter meshFilter = gameObject.GetComponent<MeshFilter>();
            if (meshFilter != null && meshFilter.sharedMesh != null) return meshFilter.sharedMesh;

            SkinnedMeshRenderer skinnedMeshRenderer = gameObject.GetComponent<SkinnedMeshRenderer>();
            if (skinnedMeshRenderer != null && skinnedMeshRenderer.sharedMesh != null) return skinnedMeshRenderer.sharedMesh;

            return null;
        }

        public static Renderer GetMeshRenderer(this GameObject gameObject)
        {
            MeshRenderer meshRenderer = gameObject.GetComponent<MeshRenderer>();
            if (meshRenderer != null) return meshRenderer;

            SkinnedMeshRenderer skinnedRenderer = gameObject.GetComponent<SkinnedMeshRenderer>();
            return skinnedRenderer;
        }

        public static Sprite GetSprite(this GameObject gameObject)
        {
            SpriteRenderer spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
            if (spriteRenderer == null) return null;

            return spriteRenderer.sprite;
        }

        public static List<GameObject> GetRoots(IEnumerable<GameObject> gameObjects)
        {
            if (gameObjects == null) return new List<GameObject>();

            List<GameObject> roots = new List<GameObject>();
            HashSet<GameObject> rootHash = new HashSet<GameObject>();
            foreach(var gameObject in gameObjects)
            {
                GameObject root = gameObject.transform.root.gameObject;
                if(!rootHash.Contains(root))
                {
                    rootHash.Add(root);
                    roots.Add(root);
                }
            }

            rootHash.Clear();
            return roots;
        }

        public static List<GameObject> FilterParentsOnly(IEnumerable<GameObject> gameObjects)
        {
            // Null or empty collection?
            if (gameObjects == null) return new List<GameObject>();

            // Loop through each game object inside the collection and check if it has a parent which
            // resides in the same collection.
            var parents = new List<GameObject>(10);
            foreach(var gameObject in gameObjects)
            {
                // Store data for easy access
                bool foundParent = false;
                Transform objectTransform = gameObject.transform;

                // Now we need to check if the current object has a parent inside the collection
                foreach(var possibleParent in gameObjects)
                {
                    // Same as current object?
                    if (possibleParent != gameObject)
                    {
                        // Is the current object a child of the possible parent object?
                        if(objectTransform.IsChildOf(possibleParent.transform))
                        {
                            // Yes, it is. Set the boolean flag and break out of the loop. There
                            // is no need to go any further because we found a parent so we know
                            // that this object can be discarded.
                            foundParent = true;
                            break;
                        }
                    }
                }

                // If no parent was found, add the object to the output list
                if (!foundParent) parents.Add(gameObject);
            }

            return parents;
        }
    }
}
