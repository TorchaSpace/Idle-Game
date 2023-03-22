using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteAlways]
public class LightManager : MonoBehaviour
{
    [SerializeField] private Light DirectionalLight;
    [SerializeField] private DayControl dayControl;
    [SerializeField, Range(0, 60)] private float TimeOfDay;

    public GameObject indoorLightning;
    public GameObject outdoorLightning;

    private void Update()
    {
        if(dayControl == null)
        {
            return;
        }

        if (Application.isPlaying)
        {
            TimeOfDay += Time.deltaTime / 5;
            TimeOfDay %= 60;
            UpdateLightning(TimeOfDay / 60f);
        }
        else
        {
            UpdateLightning(TimeOfDay / 60f);
        }

        if(TimeOfDay > 14f)
        {
            indoorLightning.SetActive(false);
            outdoorLightning.SetActive(false);
        }
        if(TimeOfDay > 38f)
        {
            indoorLightning.SetActive(true);
            outdoorLightning.SetActive(true);
        }
    }

    private void UpdateLightning(float timePercent)
    {
        RenderSettings.ambientLight = dayControl.AmbientColor.Evaluate(timePercent);
        RenderSettings.fogColor = dayControl.FogColor.Evaluate(timePercent);

        if(DirectionalLight != null)
        {
            DirectionalLight.color = dayControl.DirectionalColor.Evaluate(timePercent);
            DirectionalLight.transform.localRotation = Quaternion.Euler(new Vector3((timePercent * 360) - 90f, 170, 0));
        }
    }

    private void OnValidate()
    {
        if(DirectionalLight != null)
        {
            return;
        }

        if(RenderSettings.sun != null)
        {
            DirectionalLight = RenderSettings.sun;
        }
        else
        {
            Light[] lights = GameObject.FindObjectsOfType<Light>();
            foreach(Light light in lights)
            {
                if(light.type == LightType.Directional)
                {
                    DirectionalLight = light;
                    return;
                }
            }
        }
    }
}
