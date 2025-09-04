#define PIR 3      // señal de PIR a pin 3
#define LED 4     //  led a pin 4
int ESTADO = 0;     // almacena estado de señalint ESTADO = 0;    



void setup(){

  pinMode(PIR, INPUT);    // pin 3 como entrada
  pinMode(LED, OUTPUT);  // pin 4 como salida
  delay(2000);     // demora para estabilizar el sensor

}



void loop(){

  ESTADO = digitalRead(PIR);  // lectura de estado de señal
  if (ESTADO == HIGH){    // si la señal esta en alto indicando movimiento
    digitalWrite(LED, HIGH);  // enciende led
    delay(200);    // demora de 2 segundos
  } else {
    digitalWrite(LED, LOW); // apaga led
  }

} 