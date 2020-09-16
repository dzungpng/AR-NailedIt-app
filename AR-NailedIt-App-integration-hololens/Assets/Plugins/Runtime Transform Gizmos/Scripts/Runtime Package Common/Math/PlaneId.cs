using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum PlaneId
    {
        XY = 0,
        YZ,
        ZX
    }

    public static class PlaneIdHelper
    {
        private struct PlaneQuadrantInfo
        {
            public PlaneQuadrantId Quadrant;
            public AxisSign FirstAxisSign;
            public AxisSign SecondAxisSign;
        }

        private struct PlaneInfo
        {
            public PlaneId PlaneId;
            public List<PlaneQuadrantInfo> QuadrantInfo;
        }

        private static List<PlaneInfo> _planeInfo = new List<PlaneInfo>(3)
        {
            new PlaneInfo(), new PlaneInfo(), new PlaneInfo()
        };
        private static PlaneId[] _allPlaneIds = new PlaneId[]
        {
            PlaneId.XY, PlaneId.ZX, PlaneId.YZ
        };

        static PlaneIdHelper()
        {
            var planeIdInfo = new PlaneInfo();
            planeIdInfo.PlaneId = PlaneId.XY;
            planeIdInfo.QuadrantInfo = new List<PlaneQuadrantInfo>()
            {
                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.First,
                    FirstAxisSign = AxisSign.Positive,
                    SecondAxisSign = AxisSign.Positive
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Second,
                    FirstAxisSign = AxisSign.Negative,
                    SecondAxisSign = AxisSign.Positive
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Third,
                    FirstAxisSign = AxisSign.Negative,
                    SecondAxisSign = AxisSign.Negative
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Fourth,
                    FirstAxisSign = AxisSign.Positive,
                    SecondAxisSign = AxisSign.Negative
                }
            };
            _planeInfo[(int)PlaneId.XY] = planeIdInfo;

            planeIdInfo = new PlaneInfo();
            planeIdInfo.PlaneId = PlaneId.YZ;
            planeIdInfo.QuadrantInfo = new List<PlaneQuadrantInfo>()
            {
                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.First,
                    FirstAxisSign = AxisSign.Positive,
                    SecondAxisSign = AxisSign.Negative
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Second,
                    FirstAxisSign = AxisSign.Positive,
                    SecondAxisSign = AxisSign.Positive
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Third,
                    FirstAxisSign = AxisSign.Negative,
                    SecondAxisSign = AxisSign.Positive
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Fourth,
                    FirstAxisSign = AxisSign.Negative,
                    SecondAxisSign = AxisSign.Negative
                }
            };
            _planeInfo[(int)PlaneId.YZ] = planeIdInfo;

            planeIdInfo = new PlaneInfo();
            planeIdInfo.PlaneId = PlaneId.ZX;
            planeIdInfo.QuadrantInfo = new List<PlaneQuadrantInfo>()
            {
                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.First,
                    FirstAxisSign = AxisSign.Positive,
                    SecondAxisSign = AxisSign.Positive
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Second,
                    FirstAxisSign = AxisSign.Negative,
                    SecondAxisSign = AxisSign.Positive
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Third,
                    FirstAxisSign = AxisSign.Negative,
                    SecondAxisSign = AxisSign.Negative
                },

                new PlaneQuadrantInfo()
                {
                    Quadrant = PlaneQuadrantId.Fourth,
                    FirstAxisSign = AxisSign.Positive,
                    SecondAxisSign = AxisSign.Negative
                }
            };
            _planeInfo[(int)PlaneId.ZX] = planeIdInfo;
        }

        public static PlaneId[] AllPlaneIds { get { return _allPlaneIds.Clone() as PlaneId[]; } }

        public static AxisDescriptor GetFirstAxisDescriptor(PlaneId planeId, PlaneQuadrantId planeQuadrant)
        {
            return new AxisDescriptor(PlaneIdToFirstAxisIndex(planeId), GetFirstAxisSign(planeId, planeQuadrant));
        }

        public static AxisDescriptor GetSecondAxisDescriptor(PlaneId planeId, PlaneQuadrantId planeQuadrant)
        {
            return new AxisDescriptor(PlaneIdToSecondAxisIndex(planeId), GetSecondAxisSign(planeId, planeQuadrant));
        }

        public static AxisSign GetFirstAxisSign(PlaneId planeId, PlaneQuadrantId planeQuadrant)
        {
            var quadrantInfo = _planeInfo[(int)planeId].QuadrantInfo.FindAll(item => item.Quadrant == planeQuadrant)[0];
            return quadrantInfo.FirstAxisSign;
        }

        public static AxisSign GetSecondAxisSign(PlaneId planeId, PlaneQuadrantId planeQuadrant)
        {
            var quadrantInfo = _planeInfo[(int)planeId].QuadrantInfo.FindAll(item => item.Quadrant == planeQuadrant)[0];
            return quadrantInfo.SecondAxisSign;
        }

        public static PlaneQuadrantId GetQuadrantFromAxesSigns(PlaneId planeId, AxisSign firstAxisSign, AxisSign secondAxisSign)
        {
            var quadrantInfo = _planeInfo[(int)planeId].
                QuadrantInfo.FindAll(item => item.FirstAxisSign == firstAxisSign && item.SecondAxisSign == secondAxisSign)[0];
            return quadrantInfo.Quadrant;
        }

        public static int PlaneIdToFirstAxisIndex(PlaneId planeId)
        {
            if (planeId == PlaneId.XY) return 0;
            if (planeId == PlaneId.ZX) return 2;
            return 1;
        }

        public static int PlaneIdToSecondAxisIndex(PlaneId planeId)
        {
            if (planeId == PlaneId.XY) return 1;
            if (planeId == PlaneId.ZX) return 0;
            return 2;
        }

        public static PlaneId NormalAxisIndexToPlaneId(int axisIndex)
        {
            if (axisIndex == 0) return PlaneId.YZ;
            if (axisIndex == 1) return PlaneId.ZX;
            return PlaneId.XY;
        }
    }
}
