using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class ExportScript : MonoBehaviour {

    public Button button;
    public GameObject drillPoints;
    public PlaneGenerator planeGenerator;
    public GameObject VuMarks;

    private GameObject bone;
    private string filename;
    private DrillPointScript drillScript;
    private VuMarkPlacement vumarks;


	// Use this for initialization
	void Start () {

        bone = GameObject.Find("Bone");
        drillScript = drillPoints.GetComponent<DrillPointScript>();

        filename = @"\BoneData.txt";
        button.GetComponent<Button>().onClick.AddListener(ExportModelData);

        vumarks = VuMarks.GetComponent<VuMarkPlacement>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void ExportModelData()
    {
        bone = BoneModelDropdown.selectedBoneModel;
        string path = System.Environment.GetFolderPath(System.Environment.SpecialFolder.Desktop);
        StreamWriter sw = System.IO.File.CreateText(path + filename);
        sw.Close();

        string text = "4 \n"; // number of vumarks placeholder
        // placeholders for vumarks
        if(vumarks.front != null)
        {
            // undo the bone parenting
            vumarks.front.transform.parent = null;
            //Mark Modify
            /*
            vumarks.front.transform.rotation = Quaternion.Euler(vumarks.front.transform.rotation.eulerAngles.x,
                vumarks.front.transform.rotation.eulerAngles.y + 180,
                vumarks.front.transform.rotation.eulerAngles.z);
                */
            vumarks.front.transform.Rotate(0, 180, 0, Space.Self);
            //we can recover the rotation if we need
            //******* Mark modify done

            // try getting the position/rotation of the child relative to the parent transform
            bone.transform.parent = vumarks.front.transform;
            text += formatVec3((vumarks.front.transform.InverseTransformPoint(bone.transform.position)));
            text += formatVec3(bone.transform.localRotation.eulerAngles);
            text += formatVec3(bone.transform.localScale) + "\n";
            bone.transform.parent = null;
        }
        if (vumarks.back != null)
        {
            // undo the bone parenting
            vumarks.back.transform.parent = null;

            vumarks.back.transform.Rotate(0, 180, 0, Space.Self);
            bone.transform.parent = vumarks.back.transform;
            text += formatVec3((vumarks.back.transform.InverseTransformPoint(bone.transform.position)));
            text += formatVec3(bone.transform.localRotation.eulerAngles);
            text += formatVec3(bone.transform.localScale) + "\n";
            bone.transform.parent = null;
        }
        if (vumarks.left != null)
        {
            // undo the bone parenting
            vumarks.left.transform.parent = null;

            vumarks.left.transform.Rotate(0, 180, 0, Space.Self);
            bone.transform.parent = vumarks.left.transform;
            text += formatVec3((vumarks.left.transform.InverseTransformPoint(bone.transform.position)));
            text += formatVec3(bone.transform.localRotation.eulerAngles);
            text += formatVec3(bone.transform.localScale) + "\n";
            bone.transform.parent = null;
        }
        if (vumarks.right != null)
        {
            // undo the bone parenting
            vumarks.right.transform.parent = null;

            vumarks.right.transform.Rotate(0, 180, 0, Space.Self);
            bone.transform.parent = vumarks.right.transform;
            text += formatVec3((vumarks.right.transform.InverseTransformPoint(bone.transform.position)));
            text += formatVec3(bone.transform.localRotation.eulerAngles);
            text += formatVec3(bone.transform.localScale) + "\n";
            bone.transform.parent = null;
        }

        // add plane data
        if(planeGenerator.planes.Count > 0)
        {
            Transform plane = planeGenerator.planes[0];
            text += formatVec3(bone.transform.InverseTransformPoint(plane.position));
            text += formatVec3(bone.transform.InverseTransformDirection(plane.rotation.eulerAngles));
            text += formatVec3(plane.localScale) + "\n";
        }

        text += string.Empty + drillScript.coneList.Count + "\n";
            foreach (Transform t in drillScript.coneList)
            {
                text += formatVec3(bone.transform.InverseTransformPoint(t.position));
                text += formatVec3(bone.transform.InverseTransformDirection(t.rotation.eulerAngles));
                text += formatVec3(t.localScale) + "\n";
            }


        System.IO.File.WriteAllText(path + filename, text);
    }

    string formatVec3(Vector3 vec)
    {
        return (vec[0] + "," + vec[1] + "," + vec[2] + ";");
    }

}
