using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoScalerHandle
    {
        private int _handleId;
        private List<int> _scaleDragAxisIndices = new List<int>();

        public int HandleId { get { return _handleId; } }
        public List<int> ScaleDragAxisIndices { get { return new List<int>(_scaleDragAxisIndices); } }

        public GizmoScalerHandle(int handleId, IEnumerable<int> scaleDragAxisIndices)
        {
            _handleId = handleId;
            _scaleDragAxisIndices = new List<int>(scaleDragAxisIndices);
        }

        public bool ContainsScaleDragAxisIndex(int scaleDragAxisIndex)
        {
            return _scaleDragAxisIndices.Contains(scaleDragAxisIndex);
        }
    }
}
