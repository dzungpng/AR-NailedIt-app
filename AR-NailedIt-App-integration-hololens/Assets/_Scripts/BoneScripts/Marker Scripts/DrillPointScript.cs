using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DrillPointScript : MonoBehaviour {

    public MasterDeselect masterDeselect;

    public List<Transform> coneList;
    public List<Transform> markerList;
    public List<Transform> lineList;
    public GameObject planeGenerator;

    //public GameObject VuMarks;
    //public RotationGizmo rotationGizmo;
    //public Gizmo gizmo;

    public Dropdown placementEnabled;

    // prefab of marker to place on raycastObject
    public GameObject drillMarkers;
    public GameObject cones;
    public GameObject lines;

    bool alreadyClicked;
    int numPlanes;
    static public GameObject raycastObject; // Raycast object is the object to add drill points to
    private string rayCastObjectTag= "Nail";

    // Use this for initialization
    void Start () {
        if(raycastObject == null)
        {
            raycastObject = GameObject.Find(rayCastObjectTag);
        }

        numPlanes = 0;
        coneList = new System.Collections.Generic.List<Transform>();
        markerList = new System.Collections.Generic.List<Transform>();

        alreadyClicked = false;
	}
	
	// Update is called once per frame
	void Update () {
        raycastObject = GameObject.Find(rayCastObjectTag);
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        // if mouse is clicked 
        if(Input.GetMouseButton(0) && placementEnabled.value == 2)
        {
            masterDeselect.Deselect();
     
            RaycastHit hitInfo;
            if (Physics.Raycast(ray.origin, ray.direction, out hitInfo))
            {
                // only drop markers on the raycastObject
                if (hitInfo.collider.CompareTag(rayCastObjectTag) && !alreadyClicked)
                {
                    // create the new marker objects
                    GameObject newMarker = Instantiate(drillMarkers, hitInfo.point,
                        Quaternion.FromToRotation(Vector3.up, hitInfo.normal)) as GameObject;

                    GameObject newCone = Instantiate(cones, hitInfo.point, Quaternion.Euler(new Vector3(0, 1, 0))) as GameObject;
                    GameObject axisLine = Instantiate(lines, hitInfo.point, Quaternion.Euler(new Vector3(0, 1, 0))) as GameObject;
                    // make line move with cone
                    axisLine.transform.parent = newCone.transform;
                    fixConeRotation(newCone);
                    

                    // make raycastObject parent so they rotate when raycastObject rotates
                    newCone.transform.parent = raycastObject.transform;
                    newMarker.transform.parent = raycastObject.transform;

                    coneList.Add(newCone.transform);
                    markerList.Add(newMarker.transform);
                    // set the cone and marker up as a pair
                    newMarker.GetComponent<PairScript>().pair = newCone;
                    newCone.GetComponent<PairScript>().pair = newMarker;
                }
            }
            alreadyClicked = true;

        } else {
            // reset ability to place marker
            alreadyClicked = false;
        }  

        if(planeGenerator.GetComponent<PlaneGenerator>().planes.Count != numPlanes)
        {
            numPlanes = planeGenerator.GetComponent<PlaneGenerator>().planes.Count;
            if(numPlanes != 0)
            {
                fixAllConeRotation();
            }
        } 
	}

    public void fixAllConeRotation()
    {
        if (planeGenerator.GetComponent<PlaneGenerator>().planes.Count > 0)
        {
            foreach (Transform t in coneList)
            {
                Quaternion planeNor = getConesPlane(t.gameObject).transform.rotation;
                t.rotation = planeNor;
            }
        }
    }

    public void fixConeRotation(GameObject cone)
    {
        if(planeGenerator.GetComponent<PlaneGenerator>().planes.Count > 0)
        {
            Quaternion planeNor = getConesPlane(cone).transform.rotation;
            cone.transform.rotation = planeNor;
        }
    }

    public GameObject getConesPlane(GameObject cone)
    {
        if(planeGenerator.GetComponent<PlaneGenerator>().planes.Count == 0)
        {
            return null;
        }
        float minDist = 1000000000;
        GameObject closestPlane = null;
        foreach(Transform plane in planeGenerator.GetComponent<PlaneGenerator>().planes)
        {
            Vector3 planeNor = plane.rotation * new Vector3(0, 1, 0);

            // project the point onto the plane
            Vector3 pointOnPlane = projectedPointOnPlane(planeNor, plane.position, cone.transform.position);
            // bring into local plane space
            pointOnPlane = localPoint(plane, pointOnPlane);

            // TODO: check that point is also on the correct side of the plane
            // also modify it so being within a plane trumps being closer to another plane's edge

            float currMinDist = 1000000000;
            bool isWithinPlane = false;
            // if within the plane, distance is from point to projected point in local space
            if(pointOnPlane.x < .5 && pointOnPlane.x > -.5 && pointOnPlane.y < .5 && pointOnPlane.y > -.5)
            {
                isWithinPlane = true;
                currMinDist = (localPoint(plane, cone.transform.position) - pointOnPlane).magnitude;
            } else // otherwise it is minimum distance to an edge in local space
            {
                currMinDist = minEdgeDist(localPoint(plane, cone.transform.position));
            }
            
            if(currMinDist < minDist)
            {
                minDist = currMinDist;
                closestPlane = plane.gameObject;
            }
        }
        return closestPlane;
    }

    // returns closest point on the plane
    private Vector3 projectedPointOnPlane(Vector3 planeNor, Vector3 planePos, Vector3 pointPos)
    {
        Plane p = new Plane(planeNor, planePos);
        Vector3 projectedPoint = p.ClosestPointOnPlane(pointPos);

        return projectedPoint;
    }

    private Vector3 localPoint(Transform plane, Vector3 point)
    {
        point = plane.InverseTransformPoint(point);
        point = Quaternion.Inverse(Quaternion.Euler(90, 0, 0)) * point;
        point = new Vector3(point.x / 2.0f, point.y / 2.0f, point.z);
        return point;
    }

    // returns distance from point to a line
   private float PointToLineDistance(Vector3 point1, Vector3 point2, Vector3 pointPos)
    {
        Vector3 direction = Vector3.Normalize(point2 - point1);
        Ray edge = new Ray(point1, direction);
        return Vector3.Cross(edge.direction, pointPos - point1).magnitude;
    }

    // returns minimum distance from point to the local space plane mesh
    private float minEdgeDist(Vector3 pointPos)
    {
        float minDist;

        Vector3 point1 = new Vector3(-0.5f, 0.5f, 0.0f); // top left
        Vector3 point2 = new Vector3(-0.5f, -0.5f, 0.0f); // bottom left
        Vector3 point3 = new Vector3(0.5f, -0.5f, 0.0f); // bottom right
        Vector3 point4 = new Vector3(0.5f, 0.5f, 0.0f); // top right

        minDist = PointToLineDistance(point1, point2, pointPos);
        minDist = Mathf.Min(minDist, PointToLineDistance(point2, point3, pointPos));
        minDist = Mathf.Min(minDist, PointToLineDistance(point3, point4, pointPos));
        minDist = Mathf.Min(minDist, PointToLineDistance(point4, point1, pointPos));

        return minDist;
    }
}
