#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(3); //Porta digital D3 giro
  servo2.attach(4); //Porta digital D4 distancia
  servo3.attach(5); //Porta digital D5 altura
  servo4.attach(6); //Porta digital D6 garra
}

void loop() {
  int ctr1 = analogRead(0); //Porta analogica A0
  int ctr2 = analogRead(1); //Porta analogica A1
  int ctr3 = analogRead(2); //Porta analogica A2
  int ctr4 = analogRead(3); //Porta analogica A3

  ctr1 = map(ctr1, 0, 1023, 0, 180); //Mapeia a posição do potenciômetro N0
  servo1.write(ctr1); //Envia ao servo motor a posição N3

  ctr2 = map(ctr2, 0, 1023, 0, 80); //Mapeia a posição do potenciômetro N1
  servo2.write(ctr2); //Envia ao servo motor a posição N4

  ctr3 = map(ctr3, 0, 1023, 20, 80); //Mapeia a posição do potenciômetro N2
  servo3.write(ctr3); //Envia ao servo motor a posição N5

  ctr4 = map(ctr4, 0, 1023, 0, 90); //Mapeia a posição do potenciômetro N3
  servo4.write(ctr4); //Envia ao servo motor a posição N6

  delay(15);
}
