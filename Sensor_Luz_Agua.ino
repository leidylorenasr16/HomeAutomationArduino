// C++ code
//
int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorValue);
  // map the sensor reading to a range for the
  // speaker
int threshold = 100;
/*if (sensorValue < threshold) {
    analogWrite(9, 0);  // LED apagado
} else {
    analogWrite(9, map(sensorValue, 0, 1023, 0, 255));  // Brillo variable
}
*/
if (sensorValue < threshold) {
    analogWrite(9, map(sensorValue, 0, 1023, 0, 255));  // Brillo variable
} else {
    analogWrite(9, 0);  // LED apagado
}
  delay(100); // Wait for 100 millisecond(s)
}