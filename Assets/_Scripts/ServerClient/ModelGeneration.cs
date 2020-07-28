using UnityEngine;

// Parse the data file sent by server containing drill cone and plane data to display on the client
public class ModelGeneration : MonoBehaviour
{
    public GameObject planePrefab;
    public GameObject bone;
    public GameObject nail;
    public GameObject conePrefab;

    //// Update is called once per frame
    //void Update()
    //{
    //    if(Client.Data.Trim() != "")
    //    {
    //        Debug.Log("Parsing data...");
    //        ParseData(Client.Data);
    //        Client.Data = "";
    //    }
    //}

    /**
     * Parse the data.txt file that was generated from the planning app
     * Data must be properlly formatted as such: 
     * Line 1: 4
     * Line 2: VuMark position 
     * Line 3: VuMark rotation
     * Line 4: VuMark scale
     * Line 5: Plane position
     * Line 6: Plane rotation
     * Line 7: Plane scale
     * Line 4: Number of cones (ex. 3)
     * Line 5, 6, 7: Cone 1 position, rotation, scale
     * Line 8, 9, 10: Cone 2 position, rotation, scale
     * ...
     * Line n, n+1, n+2: Cone nth position, rotation, scale
    **/
    public void ParseData(string data)
    {
        string[] splitData = data.Split('\n');

        Debug.Log("Parsing plane data...");
        Vector3 planePosition = Utils.StringToVector3(splitData[4]);
        Vector3 planeRotation = Utils.StringToVector3(splitData[5]);
        Vector3 planeScale    = Utils.StringToVector3(splitData[6]);
        GameObject plane = Instantiate(planePrefab, bone.transform) as GameObject;
        plane.transform.localPosition = planePosition;
        plane.transform.localRotation = Quaternion.Euler(planeRotation);
        plane.transform.localScale = planeScale;
        Debug.Log("Plane data successfully parsed!");

        Debug.Log("Parsing cone data...");
        for (int i = 8; i < splitData.Length; i+=3)
        {
            GameObject newCone = Instantiate(conePrefab, nail.transform) as GameObject;
            newCone.transform.localPosition = Utils.StringToVector3(splitData[i]);
            newCone.transform.localRotation = Quaternion.Euler(Utils.StringToVector3(splitData[i + 1]));
            newCone.transform.localScale = Utils.StringToVector3(splitData[i + 2]);            
        }
        Debug.Log("Successfully parsed cone data!");
    }
}
