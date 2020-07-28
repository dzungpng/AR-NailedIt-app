using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VuMarkPlacement : MonoBehaviour {

    public GameObject frontPrefab;
    public GameObject backPrefab;
    public GameObject leftPrefab;
    public GameObject rightPrefab;
    public GameObject anchorPrefab;

    public GameObject front;
    public GameObject back;
    public GameObject left;
    public GameObject right;
    public GameObject anchor;

    public Vector3 frontPos;
    public Vector3 backPos;
    public Vector3 rightPos;
    public Vector3 leftPos;

    // the text written to the vumark info panel
    public Text frontX;
    public Text frontY;
    public Text frontZ;
    public Text backX;
    public Text backY;
    public Text backZ;
    public Text leftX;
    public Text leftY;
    public Text leftZ;
    public Text rightX;
    public Text rightY;
    public Text rightZ;
    
    public Text frontRad;
    public Text backRad;
    public Text leftRad;
    public Text rightRad;


    public Dropdown vumarkType;
    // bool determining if mouse has already been down to avoid
    // placing more than one marker at a given spot
    bool alreadyClicked;

    static public GameObject bone; // Bone contains the parent transforms for plane and vumark 

    // Use this for initialization
    void Start()
    {
        bone = GameObject.Find("Bone");
        alreadyClicked = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(bone == null)
        {
            bone = GameObject.Find("Bone");
        }

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        // if mouse is clicked 
        if (Input.GetMouseButton(0) && vumarkType.value != 0)
        {
            RaycastHit hitInfo;
            if (Physics.Raycast(ray.origin, ray.direction, out hitInfo))
            {
                // only drop markers on the raycastObject
                if (hitInfo.collider.CompareTag("Bone") && !alreadyClicked)
                {

                    if (vumarkType.value == 1 && front == null) // front
                    {
                        this.gameObject.GetComponent<VuMarkSelect>().Deselect();

                        front = Instantiate(frontPrefab, hitInfo.point,
                        Quaternion.FromToRotation(Vector3.up, hitInfo.normal)) as GameObject;

                        updateVuMarkText();
                        // make child of raycastObject so it moves with raycastObject rotation
                        front.transform.parent = bone.transform;

                        frontPos = hitInfo.point;
                        vumarkType.value = 0;
                    }
                    else if (vumarkType.value == 2 && back == null) // back
                    {
                        this.gameObject.GetComponent<VuMarkSelect>().Deselect();

                        back = Instantiate(backPrefab, hitInfo.point,
                        Quaternion.FromToRotation(Vector3.up, hitInfo.normal)) as GameObject;

                        updateVuMarkText();

                        // make child of raycastObject so it moves with raycastObject rotation
                        back.transform.parent = bone.transform;

                        backPos = hitInfo.point;
                        vumarkType.value = 0;
                    }
                    else if (vumarkType.value == 3 && left == null) // left
                    {
                        this.gameObject.GetComponent<VuMarkSelect>().Deselect();

                        left = Instantiate(leftPrefab, hitInfo.point,
                        Quaternion.FromToRotation(Vector3.up, hitInfo.normal)) as GameObject;

                        updateVuMarkText();

                        // make child of raycastObject so it moves with raycastObject rotation
                        left.transform.parent = bone.transform;

                        leftPos = hitInfo.point;
                        vumarkType.value = 0;
                    }
                    else if (vumarkType.value == 4 && right == null) // right
                    {
                        this.gameObject.GetComponent<VuMarkSelect>().Deselect();

                        right = Instantiate(rightPrefab, hitInfo.point,
                        Quaternion.FromToRotation(Vector3.up, hitInfo.normal)) as GameObject;

                        updateVuMarkText();

                        // make child of raycastObject so it moves with raycastObject rotation
                        right.transform.parent = bone.transform;

                        rightPos = hitInfo.point;
                        vumarkType.value = 0;
                    }
                    else if (vumarkType.value == 5 && anchor == null) // right
                    {
                        this.gameObject.GetComponent<VuMarkSelect>().Deselect();

                        anchor = Instantiate(anchorPrefab, hitInfo.point,
                        Quaternion.FromToRotation(Vector3.up, hitInfo.normal)) as GameObject;

                        updateVuMarkText();

                        // make child of raycastObject so it moves with raycastObject rotation
                        anchor.transform.parent = bone.transform;
                        
                        vumarkType.value = 0;
                    }
                }
            }
            alreadyClicked = true;

        }
        else
        {
            // reset ability to place marker
            alreadyClicked = false;
        }
    }

    public void updateVuMarkText()
    {
        float xOffset, yOffset, zOffset, radius;
        float boneScale = .02f;
        float numPlaces = 1000.0f;

        if(front != null)
        {
            
            if(anchor != null)
            {
                front.transform.parent = null;

                radius = (frontPos - anchor.transform.position).magnitude;
                xOffset = (frontPos.x - anchor.transform.position.x) * boneScale * 100.0f;
                yOffset = (frontPos.y - anchor.transform.position.y) * boneScale * 100.0f;
                zOffset = (frontPos.z - anchor.transform.position.z) * boneScale * 100.0f;

                // truncate the decimal places
                xOffset = Mathf.Round(xOffset * numPlaces) / numPlaces;
                yOffset = Mathf.Round(yOffset * numPlaces) / numPlaces;
                zOffset = Mathf.Round(zOffset * numPlaces) / numPlaces;
                radius = Mathf.Round(radius * numPlaces) / numPlaces;

                frontX.GetComponent<Text>().text = xOffset.ToString() + " cm";
                frontY.GetComponent<Text>().text = yOffset.ToString() + " cm";
                frontZ.GetComponent<Text>().text = zOffset.ToString() + " cm";
                frontRad.GetComponent<Text>().text = radius.ToString() + " cm";
                front.transform.parent = bone.transform;
            }
            
        } else
        {
            frontX.GetComponent<Text>().text = "";
            frontY.GetComponent<Text>().text = "";
            frontZ.GetComponent<Text>().text = "";
            frontRad.GetComponent<Text>().text = "";
        }

        if (back != null)
        {
            
            if (anchor != null)
            {
                back.transform.parent = null;

                radius = (backPos - anchor.transform.position).magnitude;
                xOffset = (backPos.x - anchor.transform.position.x) *boneScale * 100.0f;
                yOffset = (backPos.y - anchor.transform.position.y) * boneScale * 100.0f;
                zOffset = (backPos.z - anchor.transform.position.z) * boneScale * 100.0f;

                xOffset = Mathf.Round(xOffset * numPlaces) / numPlaces;
                yOffset = Mathf.Round(yOffset * numPlaces) / numPlaces;
                zOffset = Mathf.Round(zOffset * numPlaces) / numPlaces;
                radius = Mathf.Round(radius * numPlaces) / numPlaces;

                backX.GetComponent<Text>().text = xOffset.ToString() + " cm";
                backY.GetComponent<Text>().text = yOffset.ToString() + " cm";
                backZ.GetComponent<Text>().text = zOffset.ToString() + " cm";
                backRad.GetComponent<Text>().text = radius.ToString() + " cm";

                back.transform.parent = bone.transform;
            }
            back.transform.parent = bone.transform;
        } else
        {
            backX.GetComponent<Text>().text = "";
            backY.GetComponent<Text>().text = "";
            backZ.GetComponent<Text>().text = "";
            backRad.GetComponent<Text>().text = "";
        }

        if (left != null)
        {
            if (anchor != null)
            {
                left.transform.parent = null;

                radius = (leftPos - anchor.transform.position).magnitude;
                xOffset = (leftPos.x - anchor.transform.position.x) * boneScale * 100.0f;
                yOffset = (leftPos.y - anchor.transform.position.y) * boneScale * 100.0f;
                zOffset = (leftPos.z - anchor.transform.position.z) * boneScale * 100.0f;

                xOffset = Mathf.Round(xOffset * numPlaces) / numPlaces;
                yOffset = Mathf.Round(yOffset * numPlaces) / numPlaces;
                zOffset = Mathf.Round(zOffset * numPlaces) / numPlaces;
                radius = Mathf.Round(radius * numPlaces) / numPlaces;

                leftX.GetComponent<Text>().text = xOffset.ToString() + " cm";
                leftY.GetComponent<Text>().text = yOffset.ToString() + " cm";
                leftZ.GetComponent<Text>().text = zOffset.ToString() + " cm";
                leftRad.GetComponent<Text>().text = radius.ToString() + " cm";

                left.transform.parent = bone.transform;
            }
        } else
        {
            leftX.GetComponent<Text>().text = "";
            leftY.GetComponent<Text>().text = "";
            leftZ.GetComponent<Text>().text = "";
            leftRad.GetComponent<Text>().text = "";
        }

        if (right != null)
        {
            if (anchor != null)
            {
                right.transform.parent = null;

                radius = (rightPos - anchor.transform.position).magnitude;
                xOffset = (rightPos.x - anchor.transform.position.x) * boneScale * 100.0f;
                yOffset = (rightPos.y - anchor.transform.position.y) * boneScale * 100.0f;
                zOffset = (rightPos.z - anchor.transform.position.z) * boneScale * 100.0f;

                xOffset = Mathf.Round(xOffset * numPlaces) / numPlaces;
                yOffset = Mathf.Round(yOffset * numPlaces) / numPlaces;
                zOffset = Mathf.Round(zOffset * numPlaces) / numPlaces;
                radius = Mathf.Round(radius * numPlaces) / numPlaces;

                rightX.GetComponent<Text>().text = xOffset.ToString() + " cm";
                rightY.GetComponent<Text>().text = yOffset.ToString() + " cm";
                rightZ.GetComponent<Text>().text = zOffset.ToString() + " cm";
                rightRad.GetComponent<Text>().text = radius.ToString() + " cm";

                right.transform.parent = bone.transform;
            }
        } else
        {
            rightX.GetComponent<Text>().text = "";
            rightY.GetComponent<Text>().text = "";
            rightZ.GetComponent<Text>().text = "";
            rightRad.GetComponent<Text>().text = "";
        }
    }
}
