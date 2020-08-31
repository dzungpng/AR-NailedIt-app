using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleManager : MonoBehaviour
{
    ParticleSystem strobe;
    public ParticleSystem targetSystem;
    public GameObject drill;
    public GameObject coneTarget;

    float initMultiplier;
    // Start is called before the first frame update
    void Start()
    {
        initMultiplier = targetSystem.sizeOverLifetime.sizeMultiplier;
        strobe = GetComponent<ParticleSystem>();
    }

    // Update is called once per frame
    void Update()
    {
        float d = Vector3.Distance(drill.transform.position, coneTarget.transform.position);

        if(d > 2)
        {
            var m = strobe.sizeOverLifetime;
            m.sizeMultiplier = (Vector3.Distance(drill.transform.position, coneTarget.transform.position)%10) / 10;

            m = targetSystem.sizeOverLifetime;
            if(m.sizeMultiplier == 0)
            {
                m.sizeMultiplier = initMultiplier;
            }
        }
        else
        {
            var m = strobe.sizeOverLifetime;
            m.sizeMultiplier = 0;

            m = targetSystem.sizeOverLifetime;
            m.sizeMultiplier = 0;

        }
    }
}
