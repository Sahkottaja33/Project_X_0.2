#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

#define SENSOR_TRESHOLD 2600 // esim, voi olla muutakin
#define SENSOR_PIN 11

void sensorInit();
bool sensor_ballDetected();
int sensor_getRawValue();

#endif

