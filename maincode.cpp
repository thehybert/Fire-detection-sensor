const int sensorPin = A0;  // Analog pin for reading data from the sensor
const int ledPin = 13;    // Digital pin for controlling the LED

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);  // Display the analog value in the Serial Monitor

  if (sensorValue > 100) {
    digitalWrite(ledPin, HIGH);  // Turn off the LED if the gas value is above 100
  } else {
    digitalWrite(ledPin, LOW);   // Keep the LED on otherwise
  }

  delay(1000);  // Delay one second before reading the next value
}
