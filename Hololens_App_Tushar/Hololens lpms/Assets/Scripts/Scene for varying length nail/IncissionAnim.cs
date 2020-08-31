using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncissionAnim : MonoBehaviour
{
    public GameObject startPos;
    public GameObject targetPos;
    public float speed = 2.0f;
    Renderer rend;
    float dist, fixedDist;
    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<Renderer>();
    }
    

    // Update is called once per frame
    void Update()
    {

        dist = Vector3.Distance(gameObject.transform.position, targetPos.transform.position);
        fixedDist = Vector3.Distance(startPos.transform.position, targetPos.transform.position);

        rend.material.color = new Color(rend.material.color.r, rend.material.color.g, rend.material.color.b, Mathf.Lerp(0, 1, (dist / fixedDist))); 

        if(fixedDist < 2.5f)
        {
            transform.position = targetPos.transform.position;
            transform.rotation = targetPos.transform.rotation;
            return ;
        }

        transform.position = Vector3.MoveTowards(gameObject.transform.position, targetPos.transform.position, Time.deltaTime  * speed );
        gameObject.transform.rotation = Quaternion.RotateTowards(gameObject.transform.rotation, targetPos.transform.rotation, Time.deltaTime * speed);
        if(dist < 0.5f)
        {
            gameObject.transform.position = startPos.transform.position;
            gameObject.transform.rotation = startPos.transform.rotation;
        }
    }
}
