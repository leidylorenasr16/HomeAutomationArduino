#define LED6 15 //COCINA - Horno
void setup() {
  // put your setup code here, to run once:
  pinMode(LED6, OUTPUT);
}

void loop() {
  
  digitalWrite(LED6, HIGH);
  delay(2000);
  digitalWrite(LED6, LOW);
  delay(2000);

}
