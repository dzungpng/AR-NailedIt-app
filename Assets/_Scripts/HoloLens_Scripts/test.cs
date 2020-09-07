using UnityEngine;
using UnityEngine.UI;

public class test : MonoBehaviour
{

    public GameObject smartHandle;
    public GameObject drillGuide;
    public GameObject arrow;

    Vector3 dist;

    private void Update()
    {
        
        if(smartHandle.activeSelf && drillGuide.activeSelf)
        {
            dist = drillGuide.transform.position - smartHandle.transform.position;
            arrow.transform.position = (smartHandle.transform.position + drillGuide.transform.position) * 0.5f; 
            arrow.transform.rotation = Quaternion.LookRotation(dist, arrow.transform.up);
            arrow.transform.localScale = new Vector3(0.5f, 0.5f, Mathf.Clamp(dist.magnitude, 0, 5));
        }

    }

}
