using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class XZGridCell
    {
        private IXZGrid _parentGrid;
        private int _xIndex;
        private int _zIndex;
        private Vector3 _min;
        private Vector3 _max;

        public IXZGrid ParentGrid { get { return _parentGrid; } }
        public int XIndex { get { return _xIndex; } }
        public int ZIndex { get { return _zIndex; } }
        public Vector3 Min { get { return _min; } }
        public Vector3 Max { get { return _max; } }
        public Vector3 Center { get { return (_min + _max) * 0.5f; } }

        public XZGridCell(int xIndex, int zIndex, Vector3 min, Vector3 max, IXZGrid parentGrid)
        {
            _xIndex = xIndex;
            _zIndex = zIndex;
            _min = min;
            _max = max;
            _parentGrid = parentGrid;
        }

        public static XZGridCell FromPoint(Vector3 point, float cellSizeX, float cellSizeZ, IXZGrid parentGrid)
        {
            Matrix4x4 gridWorldMtx = parentGrid.WorldMatrix;
            Vector3 gridModelPoint = gridWorldMtx.inverse.MultiplyPoint(point);

            int cellIndexX = Mathf.FloorToInt(gridModelPoint.x / cellSizeX);
            int cellIndexZ = Mathf.FloorToInt(gridModelPoint.z / cellSizeZ);

            Vector3 cellMin = Vector3.right * cellIndexX * cellSizeX + Vector3.forward * cellIndexZ * cellSizeZ;
            Vector3 cellMax = cellMin + Vector3.right * cellSizeX + Vector3.forward * cellSizeZ;

            cellMin = gridWorldMtx.MultiplyPoint(cellMin);
            cellMax = gridWorldMtx.MultiplyPoint(cellMax);

            return new XZGridCell(cellIndexX, cellIndexZ, cellMin, cellMax, parentGrid);
        }

        public List<Vector3> GetCenterAndCorners()
        {
            var centerAndCorners = new List<Vector3>();
            centerAndCorners.Add(Center);

            Vector3 minToMax = _max - _min;
            centerAndCorners.Add(_min);
            centerAndCorners.Add(_min + Vector3.forward * minToMax.z);
            centerAndCorners.Add(_max);
            centerAndCorners.Add(_min + Vector3.right * minToMax.x);

            return centerAndCorners;
        }
    }
}
