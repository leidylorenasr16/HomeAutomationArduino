#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

Servo motor1; //Habitacion
Servo motor2; //Garage
Servo motor3; //Garage - Sala
Servo motor4; //Principal
Servo motor5; //Sala - patio
int lavadora = 0;
Servo motor6; //Lavadora
LiquidCrystal_I2C lcd(0x27, 16, 2);  //

void setup() {

  //INICIO HABITACION
  Serial.begin(9600);
  //Puerta habitación
  motor1.attach(3);
  //Puerta garage
  motor2.attach(4);
  //Puera garage sala
  motor3.attach(5);
  //Puerta principal
  motor4.attach(6);
  //Puerta patio
  motor5.attach(7);
  //Lavadora
  //motor.attach(8);
  //Televisor
  // Inicializar el LCD
  lcd.init();
  //Encender la luz de fondo.
  lcd.backlight();
  lcd.clear();


  //FIN HABITACION
}

void loop() {
  Serial.print("Hola");
  AbrirPuertaG();
  CerrarPuertaG();
  while (Serial.available() == 0) {
  }
  int a = Serial.parseInt();
  switch (a) {
    case 1: //Puerta habitacion
      AbrirPuertaH();
      Serial.println("Abriendo habitacion");
      break;
    case 2: //Puerta habitacion
      CerrarPuertaH();
      Serial.println("Cerrando habitacion");
      break;
    case 9: //Televisor ON
      lcd.clear();
      lcd.setCursor(0, 0);
      // print message
      lcd.print("Casa domotica :)");
      // clears the display to print new message
      break;
    case 10: //Televisor OFF
      lcd.clear();
      break;
    case 19: //Puerta garage
      AbrirPuertaG();
      Serial.println("Abriendo garage");
      break;
    case 20: //Puerta garage
      CerrarPuertaG();
      Serial.println("Cerrando garage");
      break;
    case 21: //Puerta garage - sala
      AbrirPuertaGS();
      Serial.println("Abriendo garage - sala");
      break;
    case 22: //Puerta garage - sala
      CerrarPuertaGS();
      Serial.println("Cerrando garage - sala");
      break;
    case 25:
      AbrirPuertaP();
      Serial.println("Abriendo puerta principal");
      break;
    case 26:
      CerrarPuertaP();
      Serial.println("Cerrando puerta principal");
      break;
    case 27:
      AbrirPuertaSP();
      Serial.println("Abriendo puerta patio");
      break;
    case 28:
      CerrarPuertaSP();
      Serial.println("Cerrando puerta patio");
      break;
    case 31:
      lavadora = 1;
      EncenderLavadora();
      Serial.println("Encendiendo lavadora");
    default:
      Serial.println(a);
  }


  //INICIO HABITACION
  //Puerta habitación

  // CerrarPuerta();
  //FIN HABITACION
}



//Otras funciones
//Abrir puerta
void AbrirPuertaH() { //Habitacion
  motor1.write(9);
  delay(500);
  motor1.write(20);
  delay(500);
  motor1.write(30);
  delay(500);
  motor1.write(40);
  delay(500);
  motor1.write(50);
  delay(500);
  motor1.write(60);
  delay(500);
  motor1.write(70);
  delay(500);
  motor1.write(80);
  delay(500);
  motor1.write(90);
  delay(500);
  motor1.write(100);
  delay(500);
  motor1.write(110);
  delay(500);
  motor1.write(120);
  delay(500);
  motor1.write(130);
  delay(500);
}
//Cerrar Puerta
void CerrarPuertaH() {
  motor1.write(130);
  delay(500);
  motor1.write(120);
  delay(500);
  motor1.write(110);
  delay(500);
  motor1.write(100);
  delay(500);
  motor1.write(90);
  delay(500);
  motor1.write(80);
  delay(500);
  motor1.write(70);
  delay(500);
  motor1.write(60);
  delay(500);
  motor1.write(50);
  delay(500);
  motor1.write(40);
  delay(500);
  motor1.write(30);
  delay(500);
  motor1.write(20);
  delay(500);
  motor1.write(10);
  delay(500);
}


void AbrirPuertaG() { //Garage
  motor2.write(9);
  delay(500);
  motor2.write(20);
  delay(500);
  motor2.write(30);
  delay(500);
  motor2.write(40);
  delay(500);
  motor2.write(50);
  delay(500);
  motor2.write(60);
  delay(500);
  motor2.write(70);
  delay(500);
  motor2.write(80);
  delay(500);
  motor2.write(90);
  delay(500);
  motor2.write(100);
  delay(500);
  motor2.write(110);
  delay(500);
  motor2.write(120);
  delay(500);
  motor2.write(130);
  delay(500);
}
//Cerrar Puerta
void CerrarPuertaG() {
  motor2.write(130);
  delay(500);
  motor2.write(120);
  delay(500);
  motor2.write(110);
  delay(500);
  motor2.write(100);
  delay(500);
  motor2.write(90);
  delay(500);
  motor2.write(80);
  delay(500);
  motor2.write(70);
  delay(500);
  motor2.write(60);
  delay(500);
  motor2.write(50);
  delay(500);
  motor2.write(40);
  delay(500);
  motor2.write(30);
  delay(500);
  motor2.write(20);
  delay(500);
  motor2.write(10);
  delay(500);
}


void AbrirPuertaGS() { //Garage - Sala
  motor3.write(9);
  delay(500);
  motor3.write(20);
  delay(500);
  motor3.write(30);
  delay(500);
  motor3.write(40);
  delay(500);
  motor3.write(50);
  delay(500);
  motor3.write(60);
  delay(500);
  motor3.write(70);
  delay(500);
  motor3.write(80);
  delay(500);
  motor3.write(90);
  delay(500);
  motor3.write(100);
  delay(500);
  motor3.write(110);
  delay(500);
  motor3.write(120);
  delay(500);
  motor3.write(130);
  delay(500);
}
//Cerrar Puerta
void CerrarPuertaGS() {
  motor3.write(130);
  delay(500);
  motor3.write(120);
  delay(500);
  motor3.write(110);
  delay(500);
  motor3.write(100);
  delay(500);
  motor3.write(90);
  delay(500);
  motor3.write(80);
  delay(500);
  motor3.write(70);
  delay(500);
  motor3.write(60);
  delay(500);
  motor3.write(50);
  delay(500);
  motor3.write(40);
  delay(500);
  motor3.write(30);
  delay(500);
  motor3.write(20);
  delay(500);
  motor3.write(10);
  delay(500);
}


void AbrirPuertaP() { //Principal
  motor4.write(9);
  delay(500);
  motor4.write(20);
  delay(500);
  motor4.write(30);
  delay(500);
  motor4.write(40);
  delay(500);
  motor4.write(50);
  delay(500);
  motor4.write(60);
  delay(500);
  motor4.write(70);
  delay(500);
  motor4.write(80);
  delay(500);
  motor4.write(90);
  delay(500);
  motor4.write(100);
  delay(500);
  motor4.write(110);
  delay(500);
  motor4.write(120);
  delay(500);
  motor4.write(130);
  delay(500);
}
//Cerrar Puerta
void CerrarPuertaP() {
  motor4.write(130);
  delay(500);
  motor4.write(120);
  delay(500);
  motor4.write(110);
  delay(500);
  motor4.write(100);
  delay(500);
  motor4.write(90);
  delay(500);
  motor4.write(80);
  delay(500);
  motor4.write(70);
  delay(500);
  motor4.write(60);
  delay(500);
  motor4.write(50);
  delay(500);
  motor4.write(40);
  delay(500);
  motor4.write(30);
  delay(500);
  motor4.write(20);
  delay(500);
  motor4.write(10);
  delay(500);
}


void AbrirPuertaSP() { //Patio
  motor5.write(9);
  delay(500);
  motor5.write(20);
  delay(500);
  motor5.write(30);
  delay(500);
  motor5.write(40);
  delay(500);
  motor5.write(50);
  delay(500);
  motor5.write(60);
  delay(500);
  motor5.write(70);
  delay(500);
  motor5.write(80);
  delay(500);
  motor5.write(90);
  delay(500);
  motor5.write(100);
  delay(500);
  motor5.write(110);
  delay(500);
  motor5.write(120);
  delay(500);
  motor5.write(130);
  delay(500);
}
//Cerrar Puerta
void CerrarPuertaSP() {
  motor5.write(130);
  delay(500);
  motor5.write(120);
  delay(500);
  motor5.write(110);
  delay(500);
  motor5.write(100);
  delay(500);
  motor5.write(90);
  delay(500);
  motor5.write(80);
  delay(500);
  motor5.write(70);
  delay(500);
  motor5.write(60);
  delay(500);
  motor5.write(50);
  delay(500);
  motor5.write(40);
  delay(500);
  motor5.write(30);
  delay(500);
  motor5.write(20);
  delay(500);
  motor5.write(10);
  delay(500);
}

void EncenderLavadora(){
  for (int i=0; i<20; i++){
    for (int angle = 10; angle <= 130; angle++) {
      motor6.write(angle);   
      delay(15);                 
    }
    for (int angle = 130; angle >= 10; angle--) {
      motor6.write(angle);   
      delay(15);                
    }
  }
}