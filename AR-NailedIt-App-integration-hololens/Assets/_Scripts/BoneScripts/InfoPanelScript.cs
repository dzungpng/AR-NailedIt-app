using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoPanelScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
        // this.gameObject.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnEnable()
    {
        transform.SetAsLastSibling();
    }

    void OnDisable()
    {
        transform.SetAsFirstSibling();
    }
}