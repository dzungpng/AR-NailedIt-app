using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlaneMarkerSelect : MonoBehaviour {

    private Dropdown mode;
    private GameObject planeGenerator;

    public Material originalMarkerMat;
    public Material selectedMarkerMat;

    private List<Transform> markerList;
    private bool alreadyClicked;
    private GameObject currMarker;
    

	// Use this for initialization
	void Start () {
        currMarker = null;
        alreadyClicked = false;

        mode = GameObject.Find("Dropdown").GetComponent<Dropdown>();
        planeGenerator = GameObject.Find("Plane Generator");
        markerList = planeGenerator.GetComponent<PlaneGenerator>().markerList;
	}
	
	// Update is called once per frame
	void Update () {
        //Create a ray from the Mouse click position
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        // drag marker/cone 
        if (alreadyClicked && currMarker != null)
        {
            RaycastHit[] hits;
            hits = Physics.RaycastAll(ray.origin, ray.direction, 1000.0F);

            for (int i = 0; i < hits.Length; i++)
            {
                RaycastHit hit = hits[i];
                if (hit.collider.CompareTag("Bone"))
                {
                    if (currMarker != null)
                    {
                        currMarker.transform.position = hit.point;
                        currMarker.transform.rotation = Quaternion.FromToRotation(Vector3.up, hit.normal);
                    }
                    break;
                }
            }
            alreadyClicked = false;
        }        // if non-UI element is clicked, clear the selection
        else if (Input.GetMouseButton(0))
        {
            RaycastHit enter;
            if (Physics.Raycast(ray, out enter))
            {
                // handle selection events
                onMarkerClicked(enter);
            }
            else
            { // hit nothing, reset everything
                changeColor(originalMarkerMat);
                currMarker = null;
            }
            alreadyClicked = true;
        }
        else
        { // mouse not down
            alreadyClicked = false;
        }

        // change selection to highlight colors
        changeColor(selectedMarkerMat);

        // code for deleting markers
        if (Input.GetKeyDown(KeyCode.Delete) || Input.GetKeyDown(KeyCode.Backspace))
        {
            if (currMarker != null)
            {
                markerList.Remove(currMarker.transform);
                Destroy(currMarker);
                currMarker = null;
            }
        }

        // deselect if not in correct mode
        if(mode.value != 1)
        {
            changeColor(originalMarkerMat);
            currMarker = null;
        }
    }

    void onMarkerClicked(RaycastHit enter)
    {
        // if you hit a cone
        if (enter.collider.CompareTag("PlaneMarker"))
        {
            // if you're not already clicked (prohibit drag selecting)
            if (!alreadyClicked)
            {
                changeColor(originalMarkerMat);

                currMarker = enter.collider.gameObject;
            }
        }
    }

    void changeColor(Material markerColor)
    {
        if (currMarker != null)
        {
            currMarker.GetComponentInChildren<MeshRenderer>().material = markerColor;
        }
    }
}
