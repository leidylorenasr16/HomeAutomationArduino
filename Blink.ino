
int sensorValue = 0;

void setup() {
  pinMode(14, INPUT);
  Serial.begin(115200);
  pinMode(12, OUTPUT);

  //Puerta habitación

}

//Digital input: 34 - 39 (Sensores)
void loop() {
  sensorValue = analogRead(14);
  Serial.println(sensorValue);
  int threshold = 800;
  if (sensorValue < threshold) {
    analogWrite(12, map(1000, 0, 1023, 0, 255));  // Brillo variable
  } else {
    analogWrite(12, 0);  // LED apagado
  }
  delay(100);  // Wait for 100 millisecond(s)

}