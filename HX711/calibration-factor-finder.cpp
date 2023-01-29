#include <HX711.h> // library for HX711 driver

HX711 scale; // load cell amplifier scaling
float knownWeight = xxx; // filled xxx value with measured tare in gram

void setup() {
  Serial.begin(yyyy); // filled yyyy with baud rate value that you need
  scale.begin(z1, z2); // filled z1 and z2 with port that you will ll use. It will initialize the HX711 with the clock and data pins
  scale.tare(); // tare the load cell to 0
}

void loop() {
  float rawData = scale.read(); // get the raw data from the load cell
  float calibrationFactor = knownWeight / rawData; // determine the calibration factor
  Serial.print("Calibration Factor: ");
  Serial.println(calibrationFactor);
  delay(aaaa); //filled aaaa with delay value that you need
}
