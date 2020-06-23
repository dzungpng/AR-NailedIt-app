using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class ObjectSurfaceSnap
    {
        public enum Type
        {
            UnityTerrain = 0,
            Mesh,
            TerrainMesh,
            SphericalMesh,
            SceneGrid,
        }

        public struct SnapConfig
        {
            public bool AlignAxis;
            public TransformAxis AlignmentAxis;
            public Type SurfaceType;
            public float OffsetFromSurface;
            public Vector3 SurfaceHitPoint;
            public Vector3 SurfaceHitNormal;
            public Plane SurfaceHitPlane;
            public GameObject SurfaceObject;

            public bool IsSurfaceMesh()
            {
                return SurfaceType == Type.Mesh || SurfaceType == Type.SphericalMesh || SurfaceType == Type.TerrainMesh;
            }
        }

        public struct SnapResult
        {
            public bool Success;
            public Plane SittingPlane;
            public Vector3 SittingPoint;

            public SnapResult(Plane sittingPlane, Vector3 sittingPoint)
            {
                Success = true;
                SittingPlane = sittingPlane;
                SittingPoint = sittingPoint;
            }
        }

        public static SnapResult SnapHierarchy(GameObject root, SnapConfig snapConfig)
        {
            const float collectEps = 1e-2f;
            const float collectBoxScale = 1e-3f;

            bool hierarchyHasMeshes = root.HierarchyHasMesh();
            bool hierarchyHasSprites = root.HierarchyHasSprite();
            if (!hierarchyHasMeshes && !hierarchyHasSprites)
            {
                Transform rootTransform = root.transform;
                rootTransform.position = snapConfig.SurfaceHitPlane.ProjectPoint(rootTransform.position) + snapConfig.OffsetFromSurface * snapConfig.SurfaceHitNormal;
                return new SnapResult(snapConfig.SurfaceHitPlane, rootTransform.position);
            }

            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectType.Sprite | GameObjectType.Mesh;

            bool isSurfaceSpherical = snapConfig.SurfaceType == Type.SphericalMesh;
            bool isSurfaceTerrain = snapConfig.SurfaceType == Type.UnityTerrain || snapConfig.SurfaceType == Type.TerrainMesh;
            bool isSurfaceUnityTerrain = snapConfig.SurfaceType == Type.UnityTerrain;

            var raycaster = CreateSurfaceRaycaster(snapConfig.SurfaceType, snapConfig.SurfaceObject, true);
            if (snapConfig.SurfaceType != Type.SceneGrid)
            {
                Transform rootTransform = root.transform;
                if (snapConfig.AlignAxis)
                {
                    if (isSurfaceTerrain)
                    {
                        rootTransform.Align(Vector3.up, snapConfig.AlignmentAxis);

                        OBB hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                        if (!hierarchyOBB.IsValid) return new SnapResult();

                        BoxFace pivotFace = BoxMath.GetMostAlignedFace(hierarchyOBB.Center, hierarchyOBB.Size, hierarchyOBB.Rotation, -Vector3.up);
                        var collectedVerts = ObjectVertexCollect.CollectHierarchyVerts(root, pivotFace, collectBoxScale, collectEps);

                        if (collectedVerts.Count != 0)
                        {
                            Vector3 vertsCenter = Vector3Ex.GetPointCloudCenter(collectedVerts);
                            Ray ray = new Ray(vertsCenter + Vector3.up * 1e-3f, -Vector3.up);
                            GameObjectRayHit surfaceHit = raycaster.Raycast(ray);

                            if (surfaceHit != null)
                            {
                                Vector3 alignmentAxis = surfaceHit.HitNormal;
                                if (isSurfaceUnityTerrain)
                                {
                                    Terrain terrain = snapConfig.SurfaceObject.GetComponent<Terrain>();
                                    alignmentAxis = terrain.GetInterpolatedNormal(surfaceHit.HitPoint);
                                }
                                Quaternion appliedRotation = rootTransform.Align(alignmentAxis, snapConfig.AlignmentAxis);

                                hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                                appliedRotation.RotatePoints(collectedVerts, rootTransform.position);

                                Vector3 sitOnPlaneOffset = ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, new Plane(Vector3.up, surfaceHit.HitPoint), 0.1f);
                                rootTransform.position += sitOnPlaneOffset;
                                hierarchyOBB.Center += sitOnPlaneOffset;
                                Vector3Ex.OffsetPoints(collectedVerts, sitOnPlaneOffset);

                                Vector3 embedVector = ObjectSurfaceSnap.CalculateEmbedVector(collectedVerts, snapConfig.SurfaceObject, -Vector3.up, snapConfig.SurfaceType);
                                rootTransform.position += (embedVector + alignmentAxis * snapConfig.OffsetFromSurface);
                                return new SnapResult(new Plane(alignmentAxis, surfaceHit.HitPoint), surfaceHit.HitPoint);
                            }
                        }
                    }
                    else
                    {
                        if (!isSurfaceSpherical)
                        {
                            rootTransform.Align(snapConfig.SurfaceHitNormal, snapConfig.AlignmentAxis);
                            OBB hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                            if (!hierarchyOBB.IsValid) return new SnapResult();

                            BoxFace pivotFace = BoxMath.GetMostAlignedFace(hierarchyOBB.Center, hierarchyOBB.Size, hierarchyOBB.Rotation, -snapConfig.SurfaceHitNormal);
                            var collectedVerts = ObjectVertexCollect.CollectHierarchyVerts(root, pivotFace, collectBoxScale, collectEps);

                            if (collectedVerts.Count != 0)
                            {
                                Vector3 vertsCenter = Vector3Ex.GetPointCloudCenter(collectedVerts);

                                // Note: Cast the ray from far away enough so that we don't cast from the interior of the mesh.
                                //       This can happen when the object is embedded inside the mesh surface.
                                AABB surfaceAABB = ObjectBounds.CalcMeshWorldAABB(snapConfig.SurfaceObject);
                                float sphereRadius = surfaceAABB.Extents.magnitude;
                                Vector3 rayOrigin = vertsCenter + snapConfig.SurfaceHitNormal * sphereRadius;

                                Ray ray = new Ray(rayOrigin, -snapConfig.SurfaceHitNormal);
                                GameObjectRayHit surfaceHit = raycaster.Raycast(ray);

                                if (surfaceHit != null)
                                {
                                    Vector3 alignmentAxis = surfaceHit.HitNormal;
                                    rootTransform.Align(alignmentAxis, snapConfig.AlignmentAxis);
                                    hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);

                                    Vector3 sitOnPlaneOffset = ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, surfaceHit.HitPlane, 0.0f);
                                    rootTransform.position += sitOnPlaneOffset;
                                    rootTransform.position += alignmentAxis * snapConfig.OffsetFromSurface;
                                    return new SnapResult(new Plane(alignmentAxis, surfaceHit.HitPoint), surfaceHit.HitPoint);
                                }
                                else
                                {
                                    Vector3 alignmentAxis = snapConfig.SurfaceHitNormal;
                                    rootTransform.Align(alignmentAxis, snapConfig.AlignmentAxis);
                                    hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);

                                    Vector3 sitOnPlaneOffset = ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, snapConfig.SurfaceHitPlane, 0.0f);
                                    rootTransform.position += sitOnPlaneOffset;
                                    rootTransform.position += alignmentAxis * snapConfig.OffsetFromSurface;
                                    return new SnapResult(snapConfig.SurfaceHitPlane, snapConfig.SurfaceHitPlane.ProjectPoint(vertsCenter));
                                }
                            }
                        }
                        else
                        {
                            Transform surfaceObjectTransform = snapConfig.SurfaceObject.transform;
                            Vector3 sphereCenter = surfaceObjectTransform.position;
                            Vector3 radiusDir = (rootTransform.position - sphereCenter).normalized;
                            float sphereRadius = surfaceObjectTransform.lossyScale.GetMaxAbsComp() * 0.5f;

                            rootTransform.Align(radiusDir, snapConfig.AlignmentAxis);
                            OBB hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                            if (!hierarchyOBB.IsValid) return new SnapResult();

                            BoxFace pivotFace = BoxMath.GetMostAlignedFace(hierarchyOBB.Center, hierarchyOBB.Size, hierarchyOBB.Rotation, -radiusDir);
                            var collectedVerts = ObjectVertexCollect.CollectHierarchyVerts(root, pivotFace, collectBoxScale, collectEps);

                            Vector3 sitPoint = sphereCenter + radiusDir * sphereRadius;
                            Plane sitPlane = new Plane(radiusDir, sitPoint);
                            Vector3 sitOnPlaneOffset = ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, sitPlane, 0.0f);

                            rootTransform.position += sitOnPlaneOffset;
                            hierarchyOBB.Center += sitOnPlaneOffset;
                            Vector3Ex.OffsetPoints(collectedVerts, sitOnPlaneOffset);

                            rootTransform.position += radiusDir * snapConfig.OffsetFromSurface;
                            return new SnapResult(sitPlane, sitPoint);
                        }
                    }
                }
                else
                {
                    OBB hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                    if (!hierarchyOBB.IsValid) return new SnapResult();

                    if (isSurfaceTerrain || (!isSurfaceSpherical && snapConfig.SurfaceType == Type.Mesh))
                    {
                        Ray ray = new Ray(hierarchyOBB.Center, isSurfaceTerrain ? -Vector3.up : -snapConfig.SurfaceHitNormal);
                        GameObjectRayHit surfaceHit = raycaster.Raycast(ray);
                        if (surfaceHit != null)
                        {
                            Vector3 sitOnPlaneOffset = ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, surfaceHit.HitPlane, 0.0f);
                            rootTransform.position += sitOnPlaneOffset;
                            
                            if (isSurfaceTerrain)
                            {
                                hierarchyOBB.Center += sitOnPlaneOffset;
                                BoxFace pivotFace = BoxMath.GetMostAlignedFace(hierarchyOBB.Center, hierarchyOBB.Size, hierarchyOBB.Rotation, -surfaceHit.HitNormal);
                                var collectedVerts = ObjectVertexCollect.CollectHierarchyVerts(root, pivotFace, collectBoxScale, collectEps);

                                Vector3 embedVector = ObjectSurfaceSnap.CalculateEmbedVector(collectedVerts, snapConfig.SurfaceObject, -Vector3.up, snapConfig.SurfaceType);
                                rootTransform.position += embedVector;
                            }

                            rootTransform.position += surfaceHit.HitNormal * snapConfig.OffsetFromSurface;
                            return new SnapResult(surfaceHit.HitPlane, surfaceHit.HitPoint);
                        }
                        else
                        if (!isSurfaceSpherical && snapConfig.SurfaceType == Type.Mesh)
                        {
                            Vector3 sitOnPlaneOffset = ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, snapConfig.SurfaceHitPlane, 0.0f);
                            rootTransform.position += sitOnPlaneOffset;
                            rootTransform.position += snapConfig.SurfaceHitNormal * snapConfig.OffsetFromSurface;
                            return new SnapResult(snapConfig.SurfaceHitPlane, snapConfig.SurfaceHitPlane.ProjectPoint(hierarchyOBB.Center));
                        }
                    }
                    else
                    if (isSurfaceSpherical)
                    {
                        Transform surfaceObjectTransform = snapConfig.SurfaceObject.transform;
                        Vector3 sphereCenter = surfaceObjectTransform.position;
                        Vector3 radiusDir = (rootTransform.position - sphereCenter).normalized;
                        float sphereRadius = surfaceObjectTransform.lossyScale.GetMaxAbsComp() * 0.5f;

                        BoxFace pivotFace = BoxMath.GetMostAlignedFace(hierarchyOBB.Center, hierarchyOBB.Size, hierarchyOBB.Rotation, -radiusDir);
                        var collectedVerts = ObjectVertexCollect.CollectHierarchyVerts(root, pivotFace, collectBoxScale, collectEps);

                        Vector3 sitPoint = sphereCenter + radiusDir * sphereRadius;
                        Plane sitPlane = new Plane(radiusDir, sitPoint);
                        Vector3 sitOnPlaneOffset = ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, sitPlane, 0.0f);

                        rootTransform.position += sitOnPlaneOffset;
                        hierarchyOBB.Center += sitOnPlaneOffset;
                        Vector3Ex.OffsetPoints(collectedVerts, sitOnPlaneOffset);

                        rootTransform.position += radiusDir * snapConfig.OffsetFromSurface;
                        return new SnapResult(sitPlane, sitPoint);
                    }
                }
            }
            if (snapConfig.SurfaceType == Type.SceneGrid)
            {
                OBB hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                if (!hierarchyOBB.IsValid) return new SnapResult();

                Transform rootTransform = root.transform;
                if (snapConfig.AlignAxis)
                {
                    rootTransform.Align(snapConfig.SurfaceHitNormal, snapConfig.AlignmentAxis);
                    hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                }

                rootTransform.position += ObjectSurfaceSnap.CalculateSitOnSurfaceOffset(hierarchyOBB, snapConfig.SurfaceHitPlane, snapConfig.OffsetFromSurface);
                return new SnapResult(snapConfig.SurfaceHitPlane, snapConfig.SurfaceHitPlane.ProjectPoint(hierarchyOBB.Center));
            }

            return new SnapResult();
        }

        public static Vector3 CalculateSitOnSurfaceOffset(OBB obb, Plane surfacePlane, float offsetFromSurface)
        {
            List<Vector3> obbCorners = obb.GetCornerPoints();
            int pivotPointIndex = surfacePlane.GetFurthestPtBehind(obbCorners);
            if (pivotPointIndex < 0) pivotPointIndex = surfacePlane.GetClosestPtInFrontOrOnPlane(obbCorners);

            if (pivotPointIndex >= 0)
            {
                Vector3 pivotPt = obbCorners[pivotPointIndex];
                Vector3 prjPt = surfacePlane.ProjectPoint(pivotPt);
                return (prjPt - pivotPt) + surfacePlane.normal * offsetFromSurface;
            }

            return Vector3.zero;
        }

        public static Vector3 CalculateSitOnSurfaceOffset(AABB aabb, Plane surfacePlane, float offsetFromSurface)
        {
            List<Vector3> aabbCorners = aabb.GetCornerPoints();
            int pivotPointIndex = surfacePlane.GetFurthestPtBehind(aabbCorners);
            if (pivotPointIndex < 0) pivotPointIndex = surfacePlane.GetClosestPtInFrontOrOnPlane(aabbCorners);

            if (pivotPointIndex >= 0)
            {
                Vector3 pivotPt = aabbCorners[pivotPointIndex];
                Vector3 prjPt = surfacePlane.ProjectPoint(pivotPt);
                return (prjPt - pivotPt) + surfacePlane.normal * offsetFromSurface;
            }

            return Vector3.zero;
        }

        public static Vector3 CalculateEmbedVector(List<Vector3> embedPoints, GameObject embedSurface, Vector3 embedDirection, Type surfaceType)
        {
            var raycaster = CreateSurfaceRaycaster(surfaceType, embedSurface, false);

            bool needToMove = false;
            float maxDistSq = float.MinValue;
            GameObjectRayHit objectHit;
            foreach (var point in embedPoints)
            {
                Ray ray = new Ray(point, -embedDirection);
                objectHit = raycaster.Raycast(ray);
                if (objectHit != null) continue;

                ray = new Ray(point, embedDirection);
                objectHit = raycaster.Raycast(ray);
                if (objectHit != null)
                {
                    float distSq = (point - objectHit.HitPoint).sqrMagnitude;
                    if (distSq > maxDistSq)
                    {
                        maxDistSq = distSq;
                        needToMove = true;
                    }
                }
            }

            if (needToMove) return embedDirection * Mathf.Sqrt(maxDistSq);
            return Vector3.zero;
        }

        #region Surface raycasters
        private static SurfaceRaycaster CreateSurfaceRaycaster(Type surfaceType, GameObject surfaceObject, bool raycastReverse)
        {
            if (surfaceType == Type.Mesh || surfaceType == Type.TerrainMesh || surfaceType == Type.SphericalMesh) return new MeshSurfaceRaycaster(surfaceObject, raycastReverse);
            else if (surfaceType == Type.UnityTerrain) return new TerrainSurfaceRaycaster(surfaceObject, raycastReverse);
            return null;
        }

        private abstract class SurfaceRaycaster
        {
            protected GameObject _surfaceObject;
            protected bool _raycastReverse;

            public SurfaceRaycaster(GameObject surfaceObject, bool raycastReverse)
            {
                _surfaceObject = surfaceObject;
                _raycastReverse = raycastReverse;
            }

            public abstract GameObjectRayHit Raycast(Ray ray);
        }

        private class MeshSurfaceRaycaster : SurfaceRaycaster
        {
            public MeshSurfaceRaycaster(GameObject surfaceObject, bool raycastReverse)
                : base(surfaceObject, raycastReverse) { }

            public override GameObjectRayHit Raycast(Ray ray)
            {
                if (_raycastReverse) return RTScene.Get.RaycastMeshObject(ray, _surfaceObject);
                return RTScene.Get.RaycastMeshObject(ray, _surfaceObject);
            }
        }

        private class TerrainSurfaceRaycaster : SurfaceRaycaster
        {
            private TerrainCollider _terrainCollider;

            public TerrainSurfaceRaycaster(GameObject surfaceObject, bool raycastReverse)
                : base(surfaceObject, raycastReverse)
            {
                _terrainCollider = surfaceObject.GetComponent<TerrainCollider>();
            }

            public override GameObjectRayHit Raycast(Ray ray)
            {
                if (_raycastReverse) return RTScene.Get.RaycastTerrainObjectReverseIfFail(ray, _surfaceObject);
                return RTScene.Get.RaycastTerrainObject(ray, _surfaceObject, _terrainCollider);
            }
        }
        #endregion
    }
}