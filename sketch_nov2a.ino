#define RXD2 16 //Servos
#define TXD2 17 //Servos
#define LED1 26 //HABITACION - Lampara 1
#define LED2 27 //HABITACION - Lampara 2
#define LED3 12 //HABITACION - Luz
#define LED4 13 //COCINA - Dishwasher
#define LED5 14 //COCINA - Estufa
#define LED6 15 //COCINA - Horno
#define LED7 18 //PATIO - Aspersor
#define LED8 19 //GARAGE - Luz
#define LED9 21 //SALA - Luz
#define LED10 22 //COCINA - Luz


void setup(){
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
}

void loop(){
  Serial.print("Hola");
    while(Serial.available()==0){
    }
      int a = Serial.parseInt();
    switch(a){
    //HABITACION
      case 1: //Abrir puerta
        Serial2.println("1");
        Serial.println("Abriendo - Puerta habitacion");
        break;
      case 2: //Cerrar puerta
        Serial2.println("2");
        Serial.println("Cerrando - Puerta habitacion");
        break;
      case 3: //Lampara 1 encender
        digitalWrite(LED1, HIGH);
        break;
      case 4: //Lampara 1 apagar
        digitalWrite(LED1, LOW);
        break;
      case 5: //Lampara 2 encender
        digitalWrite(LED2, HIGH);
        break;
      case 6: //Lampara 2 apagar
        digitalWrite(LED2, LOW);
        break;
      case 7: //Luz encender
        digitalWrite(LED3, HIGH);
        break;
      case 8: //Luz apagar
        digitalWrite(LED3, LOW);
        break;
      case 9: //TV ON
        Serial2.println("9");
        Serial.println("Pantalla ON");
        break;
      case 10: //TV OFF
        Serial2.println("10");
        Serial.println("Pantalla OFF");
        break;
    //COCINA
      case 11: //Luz dishwasher on
        digitalWrite(LED4, HIGH);
        break;
      case 12: //Luz dishwasher off
        digitalWrite(LED4, LOW);
        break;
      case 13: //Estufa on
        digitalWrite(LED5, HIGH);
        break;
      case 14: //Estufa off
        digitalWrite(LED5, LOW);
        break;
      case 15: //Horno on
        digitalWrite(LED6, HIGH);
        break;
      case 16: //Horno off
        digitalWrite(LED6, LOW);
        break;
    //PATIO
      case 17: //Sprinkler on
        digitalWrite(LED7, HIGH);
        break;
      case 18: //Sprinkler off
        digitalWrite(LED7, LOW);
        break;
    //GARAGE
      case 19: //Puerta garage abierta
        Serial2.println("19");
        Serial.println("Abriendo - Puerta garage");
        break;
      case 20: //Puerta garage cerrada 
        Serial2.println("20");
        Serial.println("Cerrando - Puerta garage");
        break;
      case 21: //Puerta garage - sala abierta
        Serial2.println("21");
        Serial.println("Abriendo - Puerta garage - sala");
        break;
      case 22: //Puerta garage - sala cerrada
        Serial2.println("22");
        Serial.println("Cerrando - Puerta garage - sala");
        break;
      case 23: //Luz garage on
        digitalWrite(LED8, HIGH);
        break;
      case 24: //Luz garage off
        digitalWrite(LED8, LOW);
        break;
    //SALA
      case 25: //Puerta Principal abierta
        Serial2.println("25");
        Serial.println("Abriendo - Puerta principal");
        break;
      case 26: //Puerta Principal cerrada
        Serial2.println("26");
        Serial.println("Cerrando - Puerta principal");
        break;
      case 27: //Puerta Patio abierta
        Serial2.println("27");
        Serial.println("Abriendo - Puerta patio");
        break;
      case 28: //Puerta Patio cerrada
        Serial2.println("26");
        Serial.println("Cerrando - Puerta patio");
        break;
      case 29: //Luz sala on
        digitalWrite(LED9, HIGH);
        break;
      case 30: //Luz sala off
        digitalWrite(LED9, LOW);
        break;
    //Patio ropas
      case 31: //Washer on
        Serial2.println("31");
        Serial.println("Lavadora on");
        break;
      case 32: //Cocina on
        digitalWrite(LED10, HIGH);
        break;
      case 33: //Cocina off
        digitalWrite(LED10, LOW);
        break;
      default:
        Serial.println(a);
    }

}