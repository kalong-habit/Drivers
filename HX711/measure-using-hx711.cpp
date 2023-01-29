#include "HX711.h"

const int LOADCELL_DOUT_PIN = a; //fill a with port that you will use
const int LOADCELL_SCK_PIN = b; //fill b with port that you will use

HX711 scale;
float calibrationFactor = x //fill with calibration factor value that you get from calibration factor finder, i got -111.9800995024;

void setup() {
  Serial.begin(cccc); //fill with baud rate that you use
  Serial.println();
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  scale.set_scale(calibrationFactor);
  scale.tare(); // tare the scale to 0
}

void loop() {
  float weight = scale.get_units();
  Serial.print("Weight: ");
  Serial.print(weight);
  Serial.println (" grams"); //you can change units depends with your requirement
  delay(xxx); //fill with delay value that you need
}
