using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class raycastTest : MonoBehaviour
{
    LineRenderer lr;
    public GameObject laserMarker;
    // Start is called before the first frame update
    void Start()
    {
        lr = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        lr.SetPosition(0, gameObject.transform.position);
        RaycastHit hit;

        if (Physics.Raycast(transform.position, transform.forward, out hit))
        {
            if(hit.collider)
            {
                laserMarker.SetActive(true);
                lr.SetPosition(1, hit.point);
                laserMarker.transform.position = hit.point + hit.normal * 0.001f;
                laserMarker.transform.rotation = Quaternion.LookRotation(hit.normal);
            }
        }else
        {
            lr.SetPosition(1, transform.position + transform.forward * 1);
            laserMarker.SetActive(false);
        }
    }
}
