using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlaneGenerator : MonoBehaviour {

    public Dropdown mode;
    public GameObject plane;
    public GameObject marker;
    public GameObject drillPoints;

    public List<Transform> markerList;
    public List<Transform> planes;


    public GameObject vumarks;

    public static GameObject bone;
    bool alreadyClicked;

    // Use this for initialization
    void Start () {
        alreadyClicked = false;
        markerList = new System.Collections.Generic.List<Transform>();
        planes = new System.Collections.Generic.List<Transform>();

        bone = GameObject.Find("Bone");
    }
	
	// Update is called once per frame
	void Update () {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        // if mouse is clicked 
        if (Input.GetMouseButton(0) && mode.value == 1)
        {
            bone = BoneModelDropdown.selectedBoneModel;
            RaycastHit hitInfo;
            if (Physics.Raycast(ray.origin, ray.direction, out hitInfo))
            {
                // only drop markers on the raycastObject
                if (hitInfo.collider.CompareTag("Bone") && !alreadyClicked && markerList.Count < 3)
                {
                    GameObject newMarker = Instantiate(marker, hitInfo.point,
                        Quaternion.FromToRotation(Vector3.up, hitInfo.normal)) as GameObject;

                    markerList.Add(newMarker.transform);
                    clearOtherSelection();
                }
            }
            alreadyClicked = true;
        }
        else
        {
            // reset ability to place marker
            alreadyClicked = false;
        }

        if (markerList.Count == 3 && Input.GetKeyDown(KeyCode.Return))
        {
            createPlane();
            foreach(Transform t in markerList)
            {
                Destroy(t.gameObject);
            }
            markerList.Clear();
        }

    }

    void createPlane()
    {
        float minX = System.Math.Min((markerList[0].position)[0], System.Math.Min((markerList[1].position)[0], (markerList[2].position)[0]));
        float maxX = System.Math.Max((markerList[0].position)[0], System.Math.Max((markerList[1].position)[0], (markerList[2].position)[0]));
        float minY = System.Math.Min((markerList[0].position)[1], System.Math.Min((markerList[1].position)[1], (markerList[2].position)[1]));
        float maxY = System.Math.Max((markerList[0].position)[1], System.Math.Max((markerList[1].position)[1], (markerList[2].position)[1]));
        float minZ = System.Math.Min((markerList[0].position)[2], System.Math.Min((markerList[1].position)[2], (markerList[2].position)[2]));
        float maxZ = System.Math.Max((markerList[0].position)[2], System.Math.Max((markerList[1].position)[2], (markerList[2].position)[2]));

        Vector3 midpoint = new Vector3((minX + maxX) / 2.0F, (minY + maxY) / 2.0F, (minZ + maxZ) / 2.0F);
        Vector3 vec1 = markerList[0].position - markerList[1].position;
        Vector3 vec2 = markerList[2].position - markerList[1].position;
        Vector3 normal = Vector3.Cross(vec1, vec2);
        if(Vector3.Dot(normal, Camera.main.transform.forward) > 0.0)
        { // flip normal of plane
            normal = Vector3.Cross(vec2, vec1);
        }
        GameObject newPlane = Instantiate(plane, midpoint, Quaternion.FromToRotation(Vector3.up, normal)) as GameObject;

        newPlane.transform.parent = bone.transform;
        
        // set to none mode
        mode.value = 0;

        planes.Add(newPlane.transform);
    }

    private void clearOtherSelection()
    {
        // clear vumark selection
        vumarks.GetComponent<VuMarkSelect>().Deselect();
        drillPoints.GetComponent<MarkerSelect>().Deselect();
    }



}
