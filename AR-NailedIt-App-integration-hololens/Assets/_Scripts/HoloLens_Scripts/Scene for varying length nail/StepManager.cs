using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StepManager : MonoBehaviour
{

    public GameObject IncissionAnimObject;
    // Start is called before the first frame update
    void Start()
    {
        IncissionAnimObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            //Enable incission circle animation object
            IncissionAnimObject.SetActive(true);
            IncissionAnimObject.GetComponent<IncissionAnim>().gameObject.transform.position = 
                IncissionAnimObject.GetComponent<IncissionAnim>().startPos.transform.position;
        }
    }
}
