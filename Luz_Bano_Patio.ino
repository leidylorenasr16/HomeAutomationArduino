#define PIR 13       // Pin GPIO 13 para el PIR
#define LED 12       // Pin GPIO 12 para el LED
int ESTADO = 0;

void setup() {
  pinMode(PIR, INPUT);      // Configura el pin para el PIR como entrada
  pinMode(LED, OUTPUT);     // Configura el pin para el LED como salida
  delay(5000);              // Pausa para estabilizar el sensor
}

void loop() {
  ESTADO = digitalRead(PIR);  // Lee el estado del sensor PIR
  if (ESTADO == HIGH) {       // Si detecta movimiento
    digitalWrite(LED, HIGH);  // Enciende el LED
    delay(5000);              // Pausa de 5 segundos
  } else {
    digitalWrite(LED, LOW);   // Apaga el LED si no hay movimiento
  }
}