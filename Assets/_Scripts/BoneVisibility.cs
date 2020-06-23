using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BoneVisibility : MonoBehaviour
{
    GameObject bone;
    public Toggle displayToggle;

    void Start()
    {
        bone = BoneModelDropdown.selectedBoneModel;
        displayToggle.onValueChanged.AddListener((value) => displayObject(value));
    }

    //Output the new state of the Toggle into Text
    public void displayObject(bool isOn)
    {
        bone = BoneModelDropdown.selectedBoneModel;
        bone.SetActive(isOn);
    }
}
