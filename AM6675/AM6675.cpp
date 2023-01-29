#include <MAX6675.h>

int CS_PIN = x;
int SCK_PIN = y;
int SO_PIN = z;

MAX6675 thermocouple(SCK_PIN, CS_PIN, SO_PIN);

void setup() {
  Serial.begin(xxxx); // initialize serial communication
}

void loop() {
  double celsius = thermocouple.readCelsius();
  Serial.print("Temperature: ");
  Serial.print(celsius);
  Serial.println(" *C");
  
  // control the heater and fan here
  if(celsius < zz) {
    digitalWrite(HEATER_PIN, HIGH); // turn on the heater
    digitalWrite(FAN_PIN, LOW); // turn off the fan
  } else if(celsius > yy) {
    digitalWrite(HEATER_PIN, LOW); // turn off the heater
    digitalWrite(FAN_PIN, HIGH); // turn on the fan
  } else {
    digitalWrite(HEATER_PIN, LOW); // turn off the heater
    digitalWrite(FAN_PIN, LOW); // turn off the fan
  }
  delay(1000); // wait for 1 second before reading temperature again
}
