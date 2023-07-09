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
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  //posições iniciais dos servos 6/7/4/5
  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(40);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(40);

  delay(1000);

  //organização das outras patas
  levanta_tras_direita.write(80);
  servo_frente_direita.write(130);
  levanta_frente_direita.write(70);
  servo_tras_esquerda.write(50);
  levanta_tras_esquerda.write(70);
  delay(400);

  //levantando pra dar a pata
  levanta_frente_esquerda.write(0);
  delay(1500);

}

void loop() {

  //movimento horizontal da aranha, pata 6/7
  delay(500);
  servo_frente_esquerda.write(100);
  delay(600);
  servo_frente_esquerda.write(50);
 
}