using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ArmVisibility : MonoBehaviour
{
    GameObject arm;
    public Toggle displayToggle;

    void Start()
    {
        arm = ArmModelDropdown.selectedArmModel;
        displayToggle.onValueChanged.AddListener((value) => displayObject(value));
    }

    //Output the new state of the Toggle into Text
    public void displayObject(bool isOn)
    {
        arm = ArmModelDropdown.selectedArmModel;
        arm.SetActive(isOn);
    }
}
