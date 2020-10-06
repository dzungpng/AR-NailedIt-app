using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoCollectionEnabledStateSnapshot
    {
        private Dictionary<Gizmo, bool> _gizmoToState = new Dictionary<Gizmo, bool>();

        public void Snapshot(IEnumerable<Gizmo> gizmos)
        {
            _gizmoToState.Clear();
            foreach (var gizmo in gizmos) _gizmoToState.Add(gizmo, gizmo.IsEnabled);
        }

        public void Apply()
        {
            foreach(var pair in _gizmoToState)
            {
                pair.Key.SetEnabled(pair.Value);
            }
            _gizmoToState.Clear();
        }
    }
}
