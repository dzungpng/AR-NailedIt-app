using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class MarkerSelect : MonoBehaviour {

    // the currently selected game object pair
    public GameObject currCone;
    public GameObject currMarker;

    public MasterDeselect masterDeselect;

    public Material originalMarkerMat;
    public Material selectedMarkerMat;
    public Material originalConeMat;
    public Material selectedConeMat;

    public Dropdown mode;
    public Slider coneSlider;
    public Slider heightSlider;
    public Slider xSlider;
    public Slider ySlider;
    public Button resetAngle;

    public GameObject DrillPoints;
    private DrillPointScript drillPoints;

    private bool alreadyClicked;

	// Use this for initialization
	void Start () {
        alreadyClicked = false;

        drillPoints = DrillPoints.GetComponent<DrillPointScript>();

        coneSlider.onValueChanged.AddListener(delegate { OnSliderChanged(); });
        heightSlider.onValueChanged.AddListener(delegate { OnHeightSliderChanged(); });
        ySlider.onValueChanged.AddListener(delegate { OnYSliderChanged(); });
        xSlider.onValueChanged.AddListener(delegate { OnXSliderChanged(); });
        resetAngle.onClick.AddListener(delegate { onAngleReset(); });
    }
	
	// Update is called once per frame
	void Update () {
        //Create a ray from the Mouse click position
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        // drag marker/cone 
        if (alreadyClicked && currCone != null)
        {
            RaycastHit[] hits;
            hits = Physics.RaycastAll(ray.origin, ray.direction, 1000.0F);

            for(int i = 0; i < hits.Length; i++)
            {
                RaycastHit hit = hits[i];
                if(hit.collider.CompareTag("Bone"))
                {
                    if(currCone != null && currMarker != null)
                    {
                        currMarker.transform.position = hit.point;
                        currMarker.transform.rotation = Quaternion.FromToRotation(Vector3.up, hit.normal);
                        currCone.transform.position = hit.point;

                        drillPoints.fixConeRotation(currCone);
                    }
                    break;
                }
            }
            alreadyClicked = false;
        } 
        // if non-UI element is clicked, get new selection
        else if (Input.GetMouseButton(0) && !(mode.value == 2) && 
            !EventSystem.current.IsPointerOverGameObject())
        {

            RaycastHit enter;
            if (Physics.Raycast(ray, out enter))
            {
                // handle selection events
                onConeClicked(enter);
                onMarkerClicked(enter);
            }
            alreadyClicked = true;
        } else { // mouse not down
            alreadyClicked = false;
        }

        // change selection to highlight colors
        changeColor(selectedConeMat, selectedMarkerMat);

        // deleting markers
        if((Input.GetKeyDown(KeyCode.Delete) || Input.GetKeyDown(KeyCode.Backspace)))
        {
            if(currCone != null)
            {
                drillPoints.coneList.Remove(currCone.transform);
                drillPoints.markerList.Remove(currMarker.transform);

                Destroy(currCone);
                Destroy(currMarker);
                currCone = null;
                currMarker = null;

            }
        }

        // enter clears selection
        if(Input.GetKeyDown(KeyCode.Return))
        {
            Deselect();
        }

        if((mode.value == 1))
        {
            changeColor(originalConeMat, originalMarkerMat);
            currCone = null;
            currMarker = null;
        }

    }

    void onConeClicked(RaycastHit enter)
    {
        // if you hit a cone
        if (enter.collider.CompareTag("Cone"))
        {

            // if you're not already clicked (prohibit drag selecting)
            if (!alreadyClicked)
            {
                masterDeselect.Deselect();

                changeColor(originalConeMat, originalMarkerMat);

                currCone = enter.collider.gameObject;
                currMarker = currCone.GetComponent<PairScript>().pair;
            }
        }     
    }

    void onMarkerClicked(RaycastHit enter)
    {
        // if you hit a cone
        if (enter.collider.CompareTag("Marker"))
        {
            // if you're not already clicked (prohibit drag selecting)
            if (!alreadyClicked)
            {
                masterDeselect.Deselect();

                changeColor(originalConeMat, originalMarkerMat);

                currMarker = enter.collider.gameObject;
                currCone = currMarker.GetComponent<PairScript>().pair;
            }
        }
    }

    void OnSliderChanged()
    {
        if(currCone != null)
        {
            Vector3 currScale = currCone.transform.localScale;
            currCone.transform.localScale = new Vector3(coneSlider.value, currScale[1], coneSlider.value);
        } else
        {
            foreach (Transform t in drillPoints.coneList)
            {
                Vector3 currScale = t.localScale;
                t.localScale = new Vector3(coneSlider.value, currScale[1], coneSlider.value);
            }
        }

    }

    void OnHeightSliderChanged()
    {
        if (currCone != null)
        {
            Vector3 currScale = currCone.transform.localScale;
            currCone.transform.localScale = new Vector3(currScale[0], heightSlider.value, currScale[2]);
        } else
        {
            foreach (Transform t in drillPoints.coneList)
            {
                Vector3 currScale = t.localScale;
                t.localScale = new Vector3(currScale[0], heightSlider.value, currScale[2]);
            }
        }
    }

    void OnXSliderChanged()
    {
        if (currCone != null)
        {
            Quaternion rotation;
            GameObject plane = this.gameObject.GetComponent<DrillPointScript>().getConesPlane(currCone);
            if(plane != null)
            {
                rotation = plane.transform.rotation;
            } else
            {
                rotation = Quaternion.Euler(new Vector3(0, 1, 0));
            }
            Vector3 normal = rotation * new Vector3(0, 1, 0);
            Vector3.Normalize(normal);
            Vector3 tangent = Vector3.Normalize(Vector3.Cross(normal, new Vector3(0, 1, 0)));
            Vector3 bitangent = Vector3.Normalize(Vector3.Cross(tangent, normal));

            currCone.transform.rotation = rotation;
            currCone.transform.RotateAround(currCone.transform.position, bitangent, xSlider.value);
        }
        else
        {
            foreach (Transform t in drillPoints.coneList)
            {
                GameObject cone = t.gameObject; Quaternion rotation;
                GameObject plane = this.gameObject.GetComponent<DrillPointScript>().getConesPlane(cone);
                if (plane != null)
                {
                    rotation = plane.transform.rotation;
                }
                else
                {
                    rotation = Quaternion.Euler(new Vector3(0, 1, 0));
                }
                Vector3 normal = rotation * new Vector3(0, 1, 0);
                Vector3.Normalize(normal);
                Vector3 tangent = Vector3.Normalize(Vector3.Cross(normal, new Vector3(0, 1, 0)));
                Vector3 bitangent = Vector3.Normalize(Vector3.Cross(tangent, normal));

                cone.transform.rotation = rotation;
                cone.transform.RotateAround(t.position, bitangent, xSlider.value);
            }
        }
    }

    void OnYSliderChanged()
    {
        if (currCone != null)
        {
            Quaternion rotation;
            GameObject plane = this.gameObject.GetComponent<DrillPointScript>().getConesPlane(currCone);
            if (plane != null)
            {
                rotation = plane.transform.rotation;
            }
            else
            {
                rotation = Quaternion.Euler(new Vector3(0, 1, 0));
            }
            Vector3 normal = rotation * new Vector3(0, 1, 0);
            Vector3.Normalize(normal);
            Vector3 tangent = Vector3.Normalize(Vector3.Cross(normal, new Vector3(0, 1, 0)));
            Vector3 bitangent = Vector3.Normalize(Vector3.Cross(tangent, normal));

            currCone.transform.rotation = rotation;
            currCone.transform.RotateAround(currCone.transform.position, tangent, ySlider.value);
        } else
        {
            foreach (Transform t in drillPoints.coneList)
            {
                GameObject cone = t.gameObject;
                Quaternion rotation;
                GameObject plane = this.gameObject.GetComponent<DrillPointScript>().getConesPlane(cone);
                if (plane != null)
                {
                    rotation = plane.transform.rotation;
                }
                else
                {
                    rotation = Quaternion.Euler(new Vector3(0, 1, 0));
                }
                Vector3 normal = rotation * new Vector3(0, 1, 0);
                Vector3.Normalize(normal);
                Vector3 tangent = Vector3.Normalize(Vector3.Cross(normal, new Vector3(0, 1, 0)));
                Vector3 bitangent = Vector3.Normalize(Vector3.Cross(tangent, normal));

                cone.transform.rotation = rotation;
                cone.transform.RotateAround(t.position, tangent, ySlider.value);
            }
        }
    }

    void onAngleReset()
    {
        if (currCone != null)
        {
            currCone.transform.rotation = this.gameObject.GetComponent<DrillPointScript>().getConesPlane(currCone).transform.rotation;
        } else
        {
            foreach (Transform t in drillPoints.coneList)
            {
                t.rotation = this.gameObject.GetComponent<DrillPointScript>().getConesPlane(t.gameObject).transform.rotation;
            }
        }
    }

    void changeColor(Material coneColor, Material markerColor)
    {
        if (currCone != null)
        {
            heightSlider.value = currCone.transform.localScale[1];
            coneSlider.value = currCone.transform.localScale[0];

            currCone.GetComponentInChildren<MeshRenderer>().material = coneColor;
        }

        if (currMarker != null)
        {
            currMarker.GetComponentInChildren<MeshRenderer>().material = markerColor;
        }
    }

    public void Deselect()
    {
        changeColor(originalConeMat, originalMarkerMat);
        currCone = null;
        currMarker = null;
    }
}
