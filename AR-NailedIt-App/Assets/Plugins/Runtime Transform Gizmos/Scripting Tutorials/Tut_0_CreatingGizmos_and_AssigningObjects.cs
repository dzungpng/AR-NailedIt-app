using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    /// <summary>
    /// In this tutorial we create 4 gizmos (move, rotation, scale, universal) 
    /// and assign an object to each gizmo. In order to use the tutorial, you
    /// have to open up the 'Tutorial_0_CreatingGizmos' scene.
    /// </summary>
    public class Tut_0_CreatingGizmos_and_AssigningObjects : MonoBehaviour
    {
        /// <summary>
        /// Performs all necessary initializations. In this tutorial, we create
        /// 4 gizmos and assign them to 4 different objects each.
        /// </summary>
        private void Start()
        {
            // We will first create the move gizmo. We make a call to 'RTGizmosEngine.Get.CreateObjectMoveGizmo'
            // and this function will return an instance of the 'ObjectTransformGizmo' class which is configured
            // to act like a move gizmo. The 'ObjectTransformGizmo' class is derived from 'GizmoBehaviour'. You
            // can think of a gizmo behaviour as the equivalent of a 'MonoBehaviour', but for gizmos. The object
            // transform gizmo behaviour is responsible for listening to gizmo drag events (when you drag the gizmo
            // with the mouse) and applying the drag values to the target object which is set via 'SetTargetObject'.
            ObjectTransformGizmo objectTransformGizmo = RTGizmosEngine.Get.CreateObjectMoveGizmo();
            GameObject targetObject = GameObject.Find("RedCube");
            objectTransformGizmo.SetTargetObject(targetObject);

            // Now we need to add support for vertex snapping. In order to do this, we need to access another gizmo
            // behaviour: 'MoveGizmo'. This behaviour is responsible for drawing the gizmo in the scene and generating
            // the drag values which are then intercepted by 'ObjectTransformGizmo'. In order to support vertex snapping,
            // we have to call 'SetVertexSnapTargetObjects' and pass a list of objects that contain the source vertices.
            // In this case, we only have one target object, so we will use that.
            MoveGizmo moveGizmo = objectTransformGizmo.Gizmo.MoveGizmo;
            moveGizmo.SetVertexSnapTargetObjects(new List<GameObject> { targetObject });

            // Now we need to do the same thing for the other gizmos. Next one on the list is the rotation gizmo. Again,
            // we use the 'RTGizmosEngine' class to create the gizmo. The return value is the same: an instance of the 
            // 'ObjectTransformGizmo' class. The exception in this case is that the returned transform gizmo is configured
            // to intercept rotation values and thus it will rotate objects instead of moving them.
            objectTransformGizmo = RTGizmosEngine.Get.CreateObjectRotationGizmo();
            targetObject = GameObject.Find("GreenCube");
            objectTransformGizmo.SetTargetObject(targetObject);

            // Same for the scale gizmo
            objectTransformGizmo = RTGizmosEngine.Get.CreateObjectScaleGizmo();
            targetObject = GameObject.Find("BlueCube");
            objectTransformGizmo.SetTargetObject(targetObject);
            
            // Same for the universal gizmo. 
            // Note: The object transform gizmo returned from 'CreateObjectUniversalGizmo' is configured to intercept all
            //       types of drag values: offset, rotation and scale. This is because a universal gizmo can be used to
            //       move, rotate and scale objects.
            objectTransformGizmo = RTGizmosEngine.Get.CreateObjectUniversalGizmo();
            targetObject = GameObject.Find("YellowCube");
            objectTransformGizmo.SetTargetObject(targetObject);
        }
    }
}
