using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ModelVisibility : MonoBehaviour
{
    public GameObject obj;
    public Toggle displayToggle;

    void Start()
    {
        displayToggle.onValueChanged.AddListener((value) => displayObject(value));
    }

    //Output the new state of the Toggle into Text
    public void displayObject(bool isOn)
    {
        obj.SetActive(isOn);
    }
}
