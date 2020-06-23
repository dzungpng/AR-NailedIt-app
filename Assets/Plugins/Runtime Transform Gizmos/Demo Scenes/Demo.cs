using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class Demo : MonoBehaviour
    {
        private void Start()
        {
            var moveTargetNames = new string[] { "Blue Cube", "Sphere" };
            foreach (var targetName in moveTargetNames)
            {
                var transformGizmo = RTGizmosEngine.Get.CreateObjectMoveGizmo();

                GameObject targetObject = GameObject.Find(targetName);
                transformGizmo.SetTargetObject(targetObject);
                transformGizmo.Gizmo.MoveGizmo.SetVertexSnapTargetObjects(new List<GameObject> { targetObject });
                transformGizmo.SetTransformSpace(GizmoSpace.Local);
            }
            
            var rotationTargetNames = new string[] { "Cylinder", "Red Cube" };
            foreach (var targetName in rotationTargetNames)
            {
                var transformGizmo = RTGizmosEngine.Get.CreateObjectRotationGizmo();

                GameObject targetObject = GameObject.Find(targetName);
                transformGizmo.SetTargetObject(targetObject);
                transformGizmo.SetTransformSpace(GizmoSpace.Local);
            }

            var scaleTargetNames = new string[] { "Cylinder (1)", "Sphere (1)" };
            foreach (var targetName in scaleTargetNames)
            {
                var transformGizmo = RTGizmosEngine.Get.CreateObjectScaleGizmo();

                GameObject targetObject = GameObject.Find(targetName);
                transformGizmo.SetTargetObject(targetObject);
                transformGizmo.SetTransformSpace(GizmoSpace.Local);
            }

            var universalTargetNames = new string[] { "Blue Cube (1)", "Green Cube" };
            foreach (var targetName in universalTargetNames)
            {
                var transformGizmo = RTGizmosEngine.Get.CreateObjectUniversalGizmo();

                GameObject targetObject = GameObject.Find(targetName);
                transformGizmo.SetTargetObject(targetObject);
                transformGizmo.Gizmo.UniversalGizmo.SetMvVertexSnapTargetObjects(new List<GameObject> { targetObject });
                transformGizmo.SetTransformSpace(GizmoSpace.Local);
            }
        }
    }
}
