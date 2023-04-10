#include <Servo.h>

Servo servo_frente_direita;
Servo levanta_frente_direita;
Servo servo_tras_direita;
Servo levanta_tras_direita;
Servo servo_tras_esquerda;
Servo levanta_tras_esquerda;
Servo servo_frente_esquerda;
Servo levanta_frente_esquerda;

int a; //angulo

void setup() {
  servo_frente_direita.attach(8);
  levanta_frente_direita.attach(9);
  servo_tras_direita.attach(2);
  levanta_tras_direita.attach(3);
  servo_tras_esquerda.attach(4);
  levanta_tras_esquerda.attach(5);
  servo_frente_esquerda.attach(6);
  levanta_frente_esquerda.attach(7);


servo_frente_direita.write(80);
levanta_frente_direita.write(40);

servo_tras_direita.write(110);
levanta_tras_direita.write(40); 

servo_tras_esquerda.write(90);
levanta_tras_esquerda.write(40);

servo_frente_esquerda.write(80);
levanta_frente_esquerda.write(40);

}

void loop() {
    delay(300);
  
  levanta_frente_direita.write(0); 
  levanta_tras_direita.write(0);
  levanta_frente_esquerda.write(40);
  levanta_tras_esquerda.write(40);
  delay(400);
  levanta_frente_direita.write(40);
  levanta_tras_direita.write(40);
  levanta_frente_esquerda.write(0);
  levanta_tras_esquerda.write(0);
  delay(200);
  

}