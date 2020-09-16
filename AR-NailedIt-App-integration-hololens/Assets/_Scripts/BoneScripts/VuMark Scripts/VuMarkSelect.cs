using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VuMarkSelect : MonoBehaviour {

    public MasterDeselect masterDeselect;

    public GameObject currMarker;

    public Dropdown vumarkType;
    public Dropdown mode;
    public Slider offsetSlider;

    public GameObject VuMarks;
    private bool alreadyClicked;
    private VuMarkPlacement vumarks;

    // Use this for initialization
    void Start()
    {
        alreadyClicked = false;
        vumarks = VuMarks.GetComponent<VuMarkPlacement>();
        offsetSlider.onValueChanged.AddListener(delegate { OnOffsetSliderChanged(); });
    }

    // Update is called once per frame
    void Update()
    {
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

                        currMarker.transform.parent.position = hit.point;
                        // hold the y axis 
                        Quaternion newRotation = Quaternion.FromToRotation(Vector3.up, hit.normal);
                        currMarker.transform.parent.rotation = Quaternion.Euler(newRotation.eulerAngles.x,
                            currMarker.transform.parent.rotation.eulerAngles.y, newRotation.eulerAngles.z);
                        
                    }
                    break;
                }
            }
            alreadyClicked = false;
        }
        // if non-UI element is clicked, get new selection
        else if (Input.GetMouseButton(0) && vumarkType.value == 0 && mode.value == 0)
        {
            RaycastHit enter;
            if (Physics.Raycast(ray, out enter))
            {
                // handle selection events
                onMarkerClicked(enter);
            }
            alreadyClicked = true;
        }
        else
        { // mouse not down
            alreadyClicked = false;
        }

        // change selection to highlight colors
        if (currMarker != null)
        {
            currMarker.GetComponentInChildren<MeshRenderer>().material.SetColor("_MainColor", Color.red);
        }

        // deleting markers
        if ((Input.GetKeyDown(KeyCode.Delete) || Input.GetKeyDown(KeyCode.Backspace)))
        {
            if (currMarker != null)
            {
                if(currMarker.transform.parent.gameObject == vumarks.front)
                {
                    vumarks.front = null;

                } else if (currMarker.transform.parent.gameObject == vumarks.back)
                {
                    vumarks.back = null;

                } else if (currMarker.transform.parent.gameObject == vumarks.left)
                {
                    vumarks.left = null;

                } else if (currMarker.transform.parent.gameObject == vumarks.right)
                {
                    vumarks.right = null;
                } else if (currMarker.transform.parent.gameObject == vumarks.anchor)
                {
                    vumarks.anchor = null;
                }

                vumarks.updateVuMarkText();
                Destroy(currMarker);
                currMarker = null;

            }
        }

        // enter clears selection
        if (Input.GetKeyDown(KeyCode.Return) || (mode.value == 1) || (mode.value == 2) || vumarkType.value != 0)
        {
            Deselect();
        }

    }

    void onMarkerClicked(RaycastHit enter)
    {
        // if you hit a cone
        if (enter.collider.CompareTag("VuMark"))
        {
            masterDeselect.Deselect();
            Debug.Log("VuMark");
            // if you're not already clicked (prohibit drag selecting)
            if (!alreadyClicked)
            {
                if(currMarker != null)
                {
                    currMarker.GetComponentInChildren<Renderer>().material.SetColor("_MainColor", Color.white);
                }
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

    public void Deselect()
    {
        if(currMarker != null)
        {
            currMarker.GetComponentInChildren<Renderer>().material.SetColor("_MainColor", Color.white);
            currMarker = null;
        }
    }

    void OnOffsetSliderChanged()
    {
        if(currMarker != null)
        {
            Vector3 originalPos = new Vector3(0, 0, 0);
            if(currMarker.transform.parent.gameObject == vumarks.front)
            {
                originalPos = vumarks.frontPos;

            } else if (currMarker.transform.parent.gameObject == vumarks.back)
            {
                originalPos = vumarks.backPos;
            }
            else if (currMarker.transform.parent.gameObject == vumarks.left)
            {
                originalPos = vumarks.leftPos;
            }
            else if (currMarker.transform.parent.gameObject == vumarks.right)
            {
                originalPos = vumarks.rightPos;
            }
            Vector3 normal = currMarker.transform.parent.rotation * new Vector3(0, 1, 0);
            currMarker.transform.parent.position = (offsetSlider.value * normal) + originalPos;
        }
    }
}
