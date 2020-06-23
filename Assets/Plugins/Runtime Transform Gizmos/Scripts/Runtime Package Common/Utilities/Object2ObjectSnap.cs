using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    public static class Object2ObjectSnap
    {
        public static int MaxSourceObjects { get { return 100; } }

        [Flags]
        public enum Prefs
        {
            None = 0,
            TryMatchArea = 1,
            All = TryMatchArea
        }

        public enum SnapFailReson
        {
            None = 0,
            MaxObjectsExceeded,
            InvalidSourceObjects,
            NoDestinationFound
        }

        public struct SnapResult
        {
            private bool _success;
            private Vector3 _snapPivot;
            private Vector3 _snapDestination;
            private float _snapDistance;
            private SnapFailReson _failReason;

            public bool Success { get { return _success; } }
            public Vector3 SnapPivot { get { return _snapPivot; } }
            public Vector3 SnapDestination { get { return _snapDestination; } }
            public float SnapDistance { get { return _snapDistance; } }
            public SnapFailReson FailReason { get { return _failReason; } }

            public SnapResult(SnapFailReson failReson)
            {
                _success = false;
                _snapPivot = Vector3.zero;
                _snapDestination = Vector3.zero;
                _snapDistance = 0.0f;
                _failReason = failReson;
            }

            public SnapResult(Vector3 snapPivot, Vector3 snapDestination, float snapDistance)
            {
                _success = true;
                _snapPivot = snapPivot;
                _snapDestination = snapDestination;
                _snapDistance = snapDistance;
                _failReason = SnapFailReson.None;
            }
        }

        public struct Config
        {
            private float _areaMatchEps;

            public List<GameObject> IgnoreDestObjects;
            public int DestinationLayers;
            public float SnapRadius;
            public Prefs Prefs;
            public float AreaMatchEps { get { return _areaMatchEps; } set { _areaMatchEps = Mathf.Abs(value); } }
        }

        private static Config _defaultConfig;
        static Object2ObjectSnap()
        {
            _defaultConfig = new Config();
            _defaultConfig.AreaMatchEps = 1e-5f;
            _defaultConfig.Prefs = Prefs.None;
        }

        private struct SnapSortData
        {
            public GameObject SrcObject;
            public GameObject DestObject;

            public BoxFace SrcSnapFace;
            public BoxFace DestSnapFace;
            public bool FaceAreasMatch;
            public float FaceAreaDiff;

            public Vector3 SnapPivot;
            public Vector3 SnapDest;
            public float SnapDistance;
        }

        public static Config DefaultConfig { get { return _defaultConfig; } }

        public static SnapResult Snap(List<GameObject> roots, Config snapConfig)
        {
            float minSnapDistance = float.MaxValue;
            SnapResult bestResult = new SnapResult(SnapFailReson.NoDestinationFound);

            foreach(var root in roots)
            {
                var snapResult = CalculateSnapResult(root, snapConfig);

                if (snapResult.FailReason == SnapFailReson.MaxObjectsExceeded) return snapResult;
                else if(snapResult.FailReason == SnapFailReson.None)
                {
                    if (snapResult.SnapDistance < minSnapDistance)
                    {
                        minSnapDistance = snapResult.SnapDistance;
                        bestResult = snapResult;
                    }
                }
            }

            if (bestResult.Success) ObjectSnap.Snap(roots, bestResult.SnapPivot, bestResult.SnapDestination);
            return bestResult;
        }

        public static SnapResult Snap(GameObject root, Config snapConfig)
        {
            var snapResult = CalculateSnapResult(root, snapConfig);
            if (snapResult.Success) ObjectSnap.Snap(root, snapResult.SnapPivot, snapResult.SnapDestination);

            return snapResult;
        }

        public static SnapResult CalculateSnapResult(GameObject root, Config snapConfig)
        {
            if (snapConfig.IgnoreDestObjects == null) snapConfig.IgnoreDestObjects = new List<GameObject>();

            List<GameObject> sourceObjects = root.GetAllChildrenAndSelf();
            if (sourceObjects.Count > MaxSourceObjects) return new SnapResult(SnapFailReson.MaxObjectsExceeded);

            List<GameObject> sourceMeshObjects = root.GetMeshObjectsInHierarchy();
            List<GameObject> sourceSpriteObjects = root.GetSpriteObjectsInHierarchy();
            if (sourceMeshObjects.Count == 0 && sourceSpriteObjects.Count == 0) return new SnapResult(SnapFailReson.InvalidSourceObjects);

            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectType.Mesh | GameObjectType.Sprite;

            Vector3 overlapSizeAdd = Vector3.one * snapConfig.SnapRadius * 2.0f;
            var allSnapFaces = BoxMath.AllBoxFaces;
            bool tryMatchAreas = (snapConfig.Prefs & Prefs.TryMatchArea) != 0;
            bool foundMatchingAreas = false;
            List<SnapSortData> sortedSnapData = new List<SnapSortData>(10);
            SnapSortData sortData = new SnapSortData();

            foreach (var sourceObject in sourceObjects)
            {
                OBB overlapOBB = ObjectBounds.CalcWorldOBB(sourceObject, boundsQConfig);
                overlapOBB.Size = overlapOBB.Size + overlapSizeAdd;

                List<GameObject> nearbyObjects = RTScene.Get.OverlapBox(overlapOBB);
                nearbyObjects.RemoveAll(item => item.transform.IsChildOf(root.transform) ||
                                        snapConfig.IgnoreDestObjects.Contains(item) || !LayerEx.IsLayerBitSet(snapConfig.DestinationLayers, item.layer));
                if (nearbyObjects.Count == 0) continue;

                var sourceSnapData = Object2ObjectSnapDataDb.Get.GetObject2ObjectSnapData(sourceObject);
                if (sourceSnapData == null) continue;

                sortData.SrcObject = sourceObject;
                foreach(var srcSnapFace in allSnapFaces)
                {
                    var srcAreaDesc = sourceSnapData.GetWorldSnapAreaDesc(srcSnapFace);
                    var srcAreaBounds = sourceSnapData.GetWorldSnapAreaBounds(srcSnapFace);
                    var srcAreaPts = srcAreaBounds.GetCenterAndCornerPoints();
                    sortData.SrcSnapFace = srcSnapFace;

                    foreach (var destObject in nearbyObjects)
                    {
                        var destSnapData = Object2ObjectSnapDataDb.Get.GetObject2ObjectSnapData(destObject);
                        if (destSnapData == null) continue;

                        sortData.DestObject = destObject;
                        foreach(var destSnapFace in allSnapFaces)
                        {
                            sortData.DestSnapFace = destSnapFace;
                            var destAreaDesc = destSnapData.GetWorldSnapAreaDesc(destSnapFace);

                            sortData.FaceAreasMatch = false;

                            if (tryMatchAreas && destAreaDesc.AreaType == srcAreaDesc.AreaType)
                            {
                                sortData.FaceAreaDiff = Mathf.Abs(destAreaDesc.Area - srcAreaDesc.Area);
                                if (sortData.FaceAreaDiff <= 1000.0f) sortData.FaceAreasMatch = true;
                            }

                            var destAreaBounds = destSnapData.GetWorldSnapAreaBounds(destSnapFace);
                            var destAreaPts = destAreaBounds.GetCenterAndCornerPoints();

                            foreach (var srcPt in srcAreaPts)
                            {
                                sortData.SnapPivot = srcPt;
                                foreach (var destPt in destAreaPts)
                                {
                                    sortData.SnapDistance = (destPt - srcPt).magnitude;
                                    if (sortData.SnapDistance < snapConfig.SnapRadius)
                                    {
                                        sortData.SnapDest = destPt;
                                        sortedSnapData.Add(sortData);

                                        if (sortData.FaceAreasMatch) foundMatchingAreas = true;
                                    }
                                }
                            }
                        }
                    }
                }      
            }

            if (sortedSnapData.Count != 0)
            {
                if (!tryMatchAreas || !foundMatchingAreas)
                {
                    sortedSnapData.Sort(delegate(SnapSortData s0, SnapSortData s1)
                    {
                        return s0.SnapDistance.CompareTo(s1.SnapDistance);
                    });
                }
                else
                {
                    while(true)
                    {
                        if (!sortedSnapData[0].FaceAreasMatch) sortedSnapData.RemoveAt(0);
                        else break;
                    }

                    sortedSnapData.Sort(delegate(SnapSortData s0, SnapSortData s1)
                    {
                        return s0.FaceAreaDiff.CompareTo(s1.FaceAreaDiff);
                    });
                }

                return new SnapResult(sortedSnapData[0].SnapPivot, sortedSnapData[0].SnapDest, sortedSnapData[0].SnapDistance);
            }
            return new SnapResult(SnapFailReson.NoDestinationFound);
        }     
    }
}
