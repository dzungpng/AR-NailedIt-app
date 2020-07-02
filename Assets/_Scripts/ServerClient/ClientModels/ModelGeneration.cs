using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelGeneration : MonoBehaviour
{
    public GameObject plane;
    public GameObject bone;

    // Update is called once per frame
    void Update()
    {
        if(Client.Data.Trim() != "")
        {
            ParseData(Client.Data);
            Client.Data = "";
        }
    }

    private Vector3 StringToVector3(string s)
    {
        string[] splitS = s.Split(',');
        return new Vector3(float.Parse(splitS[0]), float.Parse(splitS[1]), float.Parse(splitS[2]));
    }

    /**
     * Parse the data.txt file that was generated from the planning app
     * Data must be properlly formatted as such: 
     * Line 1: 4
     * Line 2: VuMark position, rotation, scale
     * Line 3: Plane position, rotation, scale
     * Line 4: Number of cones (ex. 3)
     * Line 5: Cone 1 position, rotation, scale
     * Line 6: Cone 2 position, rotation, scale
     * ...
     * Line n: Cone n position, rotation, scale
    **/
    private void ParseData(string data)
    {
        string[] splitData = data.Split(';');

        Vector3 vuMarkPosition = StringToVector3(splitData[0].Substring(1));
        Vector3 vuMarkRotation = StringToVector3(splitData[1]);
        Vector3 vuMarkScale    = StringToVector3(splitData[2]);

        Vector3 planePosition = StringToVector3(splitData[3]);
        Vector3 planeRotation = StringToVector3(splitData[4]);
        Vector3 planeScale    = StringToVector3(splitData[5]);
        plane.transform.localPosition = planePosition;
        plane.transform.localRotation = Quaternion.Euler(planeRotation);
        plane.transform.localScale = planeScale;

        //List<Transform> cones = new List<Transform>();
        //for(int i = 6; i < splitData.Length; i+=3)
        //{
        //    if(i == 6)
        //    {
                
        //    }
        //}
    }
}
