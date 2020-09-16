using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    /// <summary>
    /// The main focus in this tutorial is to learn how to enable and
    /// disable gizmos in the scene, switch between different gizmo
    /// types, pick a target object by clicking on objects in the scene
    /// and implement a basic gizmo manager in the process.
    /// </summary>
    public class Tut_1_Enabling_and_Disabling_Gizmos : MonoBehaviour
    {
        /// <summary>
        /// A private enum which is used by the class to differentiate between different 
        /// gizmo types. An example where this enum will come in handy is when we use the 
        /// W,E,R,T keys to switch between different types of gizmos. When the W key is 
        /// pressed for example, we will call the 'SetWorkGizmoId' function passing 
        /// GizmoId.Move as the parameter.
        /// </summary>
        private enum GizmoId
        {
            Move = 1,
            Rotate,
            Scale,
            Universal
        }

        /// <summary>
        /// The following 4 variables are references to the ObjectTransformGizmo behaviours
        /// that will be used to move, rotate and scale our objects.
        /// </summary>
        private ObjectTransformGizmo _objectMoveGizmo;
        private ObjectTransformGizmo _objectRotationGizmo;
        private ObjectTransformGizmo _objectScaleGizmo;
        private ObjectTransformGizmo _objectUniversalGizmo;

        /// <summary>
        /// The current work gizmo id. The work gizmo is the gizmo which is currently used
        /// to transform objects. The W,E,R,T keys can be used to change the work gizmo as
        /// needed.
        /// </summary>
        private GizmoId _workGizmoId;
        /// <summary>
        /// A reference to the current work gizmo. If the work gizmo id is GizmoId.Move, then
        /// this will point to '_objectMoveGizmo'. For GizmoId.Rotate, it will point to 
        /// '_objectRotationGizmo' and so on.
        /// </summary>
        private ObjectTransformGizmo _workGizmo;
        /// <summary>
        /// A reference to the target object. This is the object that will be manipulated by
        /// the gizmos and it will always be picked from the scene via a mouse click. This will
        /// be set to null when the user clicks in thin air.
        /// </summary>
        private GameObject _targetObject;

        /// <summary>
        /// Performs all necessary initializations.
        /// </summary>
        private void Start()
        {
            // Create the 4 gizmos
            _objectMoveGizmo = RTGizmosEngine.Get.CreateObjectMoveGizmo();
            _objectRotationGizmo = RTGizmosEngine.Get.CreateObjectRotationGizmo();
            _objectScaleGizmo = RTGizmosEngine.Get.CreateObjectScaleGizmo();
            _objectUniversalGizmo = RTGizmosEngine.Get.CreateObjectUniversalGizmo();

            // Call the 'SetEnabled' function on the parent gizmo to make sure
            // the gizmos are initially hidden in the scene. We want the gizmo
            // to show only when we have a target object available.
            _objectMoveGizmo.Gizmo.SetEnabled(false);
            _objectRotationGizmo.Gizmo.SetEnabled(false);
            _objectScaleGizmo.Gizmo.SetEnabled(false);
            _objectUniversalGizmo.Gizmo.SetEnabled(false);

            // We initialize the work gizmo to the move gizmo by default. This means
            // that the first time an object is clicked, the move gizmo will appear.
            // You can change the default gizmo, by simply changing these 2 lines of
            // code. For example, if you wanted the scale gizmo to be the default work
            // gizmo, replace '_objectMoveGizmo' with '_objectScaleGizmo' and GizmoId.Move
            // with GizmoId.Scale.
            _workGizmo = _objectMoveGizmo;
            _workGizmoId = GizmoId.Move;
        }

        /// <summary>
        /// Called every frame to perform all necessary updates. In this tutorial,
        /// we listen to user input and take action. 
        /// </summary>
        private void Update()
        {
            // Check if the left mouse button was pressed in the current frame.
            // Note: Something that was left out of the video tutorial by mistake. We 
            //       only take the mouse click into account if no gizmo is currently 
            //       hovered. When a gizmo is hovered, we ignore clicks because in that
            //       case a click usually represents the intent of clicking and dragging
            //       the gizmo handles. If we didn't perform this check, clicking on a
            //       gizmo might actually disable it instead if the click does not hover
            //       a game object (i.e. thin air click).
            if (Input.GetMouseButtonDown(0) && 
                RTGizmosEngine.Get.HoveredGizmo == null)
            {
                // The left mouse button was pressed; now pick a game object and check
                // if the picked object is different than the current target object if
                // if is, we call 'OnTargetObjectChanged' to take action.
                GameObject pickedObject = PickGameObject();
                if (pickedObject != _targetObject) OnTargetObjectChanged(pickedObject);
            }

            // Switch between different gizmo types using the W,E,R,T keys.
            // Note: We use the 'SetWorkGizmoId' function to perform the switch.
            if (Input.GetKeyDown(KeyCode.W)) SetWorkGizmoId(GizmoId.Move);
            else if (Input.GetKeyDown(KeyCode.E)) SetWorkGizmoId(GizmoId.Rotate);
            else if (Input.GetKeyDown(KeyCode.R)) SetWorkGizmoId(GizmoId.Scale);
            else if (Input.GetKeyDown(KeyCode.T)) SetWorkGizmoId(GizmoId.Universal);
        }

        /// <summary>
        /// Uses the mouse position to pick a game object in the scene. Returns
        /// the picked game object or null if no object is picked.
        /// </summary>
        /// <remarks>
        /// Objects must have colliders attached.
        /// </remarks>
        private GameObject PickGameObject()
        {
            // Build a ray using the current mouse cursor position
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            // Check if the ray intersects a game object. If it does, return it
            RaycastHit rayHit;
            if (Physics.Raycast(ray, out rayHit, float.MaxValue))
                return rayHit.collider.gameObject;

            // No object is intersected by the ray. Return null.
            return null;
        }

        /// <summary>
        /// This function is called to change the type of work gizmo. This is
        /// used in the 'Update' function in response to the user pressing the
        /// W,E,R,T keys to switch between different gizmo types.
        /// </summary>
        private void SetWorkGizmoId(GizmoId gizmoId)
        {
            // If the specified gizmo id is the same as the current id, there is nothing left to do
            if (gizmoId == _workGizmoId) return;

            // Start with a clean slate and disable all gizmos
            _objectMoveGizmo.Gizmo.SetEnabled(false);
            _objectRotationGizmo.Gizmo.SetEnabled(false);
            _objectScaleGizmo.Gizmo.SetEnabled(false);
            _objectUniversalGizmo.Gizmo.SetEnabled(false);

            // At this point all gizmos are disabled. Now we need to check the gizmo id
            // and adjust the '_workGizmo' variable.
            _workGizmoId = gizmoId;
            if (gizmoId == GizmoId.Move) _workGizmo = _objectMoveGizmo;
            else if (gizmoId == GizmoId.Rotate) _workGizmo = _objectRotationGizmo;
            else if (gizmoId == GizmoId.Scale) _workGizmo = _objectScaleGizmo;
            else if (gizmoId == GizmoId.Universal) _workGizmo = _objectUniversalGizmo;

            // At this point, the work gizmo points to the correct gizmo based on the 
            // specified gizmo id. All that's left to do is to activate the gizmo. 
            // Note: We only activate the gizmo if we have a target object available.
            //       If no target object is available, we don't do anything because we
            //       only want to show a gizmo when a target is available for use.
            if (_targetObject != null) _workGizmo.Gizmo.SetEnabled(true);
        }

        /// <summary>
        /// Called from the 'Update' function when the user clicks on a game object
        /// that is different from the current target object. The function takes care
        /// of adjusting the gizmo states accordingly.
        /// </summary>
        private void OnTargetObjectChanged(GameObject newTargetObject)
        {
            // Store the new target object
            _targetObject = newTargetObject;

            // Is the target object valid?
            if (_targetObject != null)
            {
                // It is. Now call 'SetTargetObject' for all gizmos. After the next 4 lines
                // of code are executed, all gizmos will be able to control this object.
                _objectMoveGizmo.SetTargetObject(_targetObject);
                _objectRotationGizmo.SetTargetObject(_targetObject);
                _objectScaleGizmo.SetTargetObject(_targetObject);
                _objectUniversalGizmo.SetTargetObject(_targetObject);

                // Make sure the work gizmo is enabled. We always activate the work gizmo when
                // a target object is valid. There is no need to check if the gizmo is already
                // enabled. The 'SetEnabled' call will simply be ignored if that is the case.
                _workGizmo.Gizmo.SetEnabled(true);
            }
            else
            {
                // The target object is null. In this case, we don't want any gizmos to be visible
                // in the scene, so we disable all of them.
                _objectMoveGizmo.Gizmo.SetEnabled(false);
                _objectRotationGizmo.Gizmo.SetEnabled(false);
                _objectScaleGizmo.Gizmo.SetEnabled(false);
                _objectUniversalGizmo.Gizmo.SetEnabled(false);
            }
        }
    }
}
