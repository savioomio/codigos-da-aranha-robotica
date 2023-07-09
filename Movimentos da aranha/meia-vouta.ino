#include <Servo.h>

//definição dos servos
Servo servo_horizontal_frente_direita;
Servo servo_vertical_frente_direita;
Servo servo_horizontal_tras_direita;
Servo servo_vertical_tras_direita;
Servo servo_horizontal_tras_esquerda;
Servo servo_vertical_tras_esquerda;
Servo servo_horizontal_frente_esquerda;
Servo servo_vertical_frente_esquerda;

void setup() {
  //ativação dos servos motores
  servo_horizontal_frente_direita.attach(8);
  servo_vertical_frente_direita.attach(9);
  servo_horizontal_tras_direita.attach(2);
  servo_vertical_tras_direita.attach(3);
  servo_horizontal_tras_esquerda.attach(4);
  servo_vertical_tras_esquerda.attach(5);
  servo_horizontal_frente_esquerda.attach(6);
  servo_vertical_frente_esquerda.attach(7);

  //movimentação para posição inicial de cada servo

  //posições iniciais dos servos 8/9/4/5
  servo_horizontal_frente_direita.write(80);
  servo_vertical_frente_direita.write(40);

  //posições iniciais dos servos 6/7/2/3
  servo_horizontal_tras_direita.write(110);
  servo_vertical_tras_direita.write(60);
  servo_horizontal_tras_esquerda.write(90);
  servo_vertical_tras_esquerda.write(60);
  servo_horizontal_frente_esquerda.write(80);
  servo_vertical_frente_esquerda.write(40);
}

void loop() {

  // par 8 e 9; par 4 e 5
  //servo 8: servo_horizontal_frente_direita
  //servo 4: servo_horizontal_tras_esquerda
  //servo 9: servo_vertical_frente_direita
  //servo 5: servo_vertical_tras_esquerda

  delay(500);
  for (int i = 0; i = 1; i++) {  //levantar servos para girar
    servo_vertical_frente_direita.write(0);
    servo_vertical_tras_esquerda.write(0);
    delay(400);
    servo_horizontal_frente_direita.write(130);
    servo_horizontal_tras_esquerda.write(50);
    delay(400);
    servo_vertical_frente_direita.write(40);
    servo_vertical_tras_esquerda.write(60);
    delay(400);
    servo_horizontal_frente_direita.write(30);
    servo_horizontal_tras_esquerda.write(150);
    delay(50);

    //abaixar servos para posicao inicial
    servo_vertical_frente_direita.write(0);
    servo_vertical_tras_esquerda.write(0);
    delay(400);
    servo_horizontal_frente_direita.write(80);
    servo_horizontal_tras_esquerda.write(90);
    delay(400);
    servo_vertical_frente_direita.write(40);
    servo_vertical_tras_esquerda.write(60);
    delay(400);
    servo_horizontal_frente_direita.write(80);
    servo_horizontal_tras_esquerda.write(90);
    delay(50);

    break;
  }
}
