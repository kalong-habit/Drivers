const int buzzerPin = x; // Connect the buzzer to digital pin x that you choose

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set the pin as an output
  Serial.begin(yyyy); //initialize the serial communication or baud rate that you choose
}

void loop() {
  Serial.println("Buzzer on");
  digitalWrite(buzzerPin, HIGH); // Turn the buzzer on
  delay(qqqq); // filled qqqq with value that you need 
  Serial.println("Buzzer off");
  digitalWrite(buzzerPin, LOW); // Turn the buzzer off
  delay(wwww); // filled wwww with value that you need
}
