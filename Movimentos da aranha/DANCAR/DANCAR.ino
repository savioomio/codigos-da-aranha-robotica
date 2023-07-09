#include <Servo.h>

//definição dos servos
Servo servo_frente_direita;
Servo levanta_frente_direita;
Servo servo_tras_direita;
Servo levanta_tras_direita;
Servo servo_tras_esquerda;
Servo levanta_tras_esquerda;
Servo servo_frente_esquerda;
Servo levanta_frente_esquerda;

void setup() { 
  //ativação dos servos motores 
  servo_frente_direita.attach(8);
  levanta_frente_direita.attach(9);
  servo_tras_direita.attach(2);
  levanta_tras_direita.attach(3);
  servo_tras_esquerda.attach(4);
  levanta_tras_esquerda.attach(5);
  servo_frente_esquerda.attach(6);
  levanta_frente_esquerda.attach(7);

  
  //movimentação para posição inicial de cada servo

  //posições iniciais dos servos 8/9/2/3
  servo_frente_direita.write(80);
  levanta_frente_direita.write(0);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(0);

  //posições iniciais dos servos 6/7/4/5
  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(0);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(0);
  delay(1500);

}

void loop(){

  delay(300);
  
  levanta_frente_direita.write(0); 
  levanta_tras_direita.write(0);

  levanta_frente_esquerda.write(70);
  levanta_tras_esquerda.write(90);

  delay(600);

  levanta_frente_direita.write(80);
  levanta_tras_direita.write(100);

  levanta_frente_esquerda.write(0);
  levanta_tras_esquerda.write(0);

  delay(300);
  
}  
