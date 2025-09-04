#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include<Servo.h> 
Servo motor;


#define LED2 2 // Lampara 1
#define LED3 3 // Lampara 2
#define LED4 4 // Luz principal habitacion

//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x27,16,2);  //

void setup() {

  //INICIO HABITACION

    //Televisor
      // Inicializar el LCD 
        lcd.init();
  
      //Encender la luz de fondo. 
        lcd.backlight();
  
      // Escribimos el Mensaje en el LCD en una posición  central. (Televisor)
        lcd.setCursor(5, 0);
        lcd.print("Se encuentra viendo el canal 23");
        lcd.setCursor(5, 1);
        lcd.print("Disfrute de nuestra programacion");

    //Luces habitación
      pinMode(LED2, OUTPUT);
      pinMode(LED3, OUTPUT);
      pinMode(LED4, OUTPUT);

    //Puerta habitación
      motor.attach(/*Pin disp0onible*/5);
  //FIN HABITACION

}

void loop() {

  //INICIO HABITACION
    //Televisor
      //desplazamos una posición a la izquierda
        lcd.scrollDisplayLeft(); 
        delay(500);
 /*   //Luces habitación
      digitalWrite(LED2, HIGH); 
      digitalWrite(LED3, HIGH); 
      digitalWrite(LED4, HIGH); 
    //Puerta habitación
      AbrirPuerta();
      CerrarPuerta();*/
      
  //FIN HABITACION
}


/*
//Otras funciones
  //Abrir puerta
    void AbrirPuerta(){
      motor.write(9);
      delay(500);
      motor.write(20);
      delay(500);
      motor.write(30);
      delay(500);
      motor.write(40);
      delay(500);
      motor.write(50);
      delay(500);
      motor.write(60);
      delay(500);
      motor.write(70);
      delay(500);
      motor.write(80);
      delay(500);
      motor.write(90);
      delay(500);
      motor.write(100);
      delay(500);
      motor.write(110);
      delay(500);
      motor.write(120);
      delay(500);
      motor.write(130);
      delay(500);
    }
  //Cerrar Puerta
    void CerrarPuerta(){
      motor.write(130);
      delay(500);
      motor.write(120);
      delay(500);
      motor.write(110);
      delay(500);
      motor.write(100);
      delay(500);
      motor.write(90);
      delay(500);
      motor.write(80);
      delay(500);
      motor.write(70);
      delay(500);
      motor.write(60);
      delay(500);
      motor.write(50);
      delay(500);
      motor.write(40);
      delay(500);
      motor.write(30);
      delay(500);
      motor.write(20);
      delay(500);
      motor.write(10);
      delay(500);
  }
*/

