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
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);

for (int i=0; i<5; i++){
  
//código andar

for (int i=0; i<5; i++){
  // par 8 e 9; par 4 e 5
//servo 8: servo_frente_direita
//servo 4: servo_tras_esquerda

//servo 9: levanta_frente_direita
//servo 5: levanta_tras_esquerda

  //levantar servos para dar os passos
  levanta_frente_direita.write(0);
  levanta_tras_esquerda.write(0);
  delay(200);
  servo_frente_direita.write(130);
  servo_tras_esquerda.write(20);
  delay(200);
  levanta_frente_direita.write(60);
  levanta_tras_esquerda.write(40);
  delay(200);
  servo_frente_direita.write(30);
  servo_tras_esquerda.write(90);
  delay(150);

 // par 6 e 7; par 2 e 3
//servo 6: servo_frente_esquerda
//servo 2: servo_tras_direita

//servo 7: levanta_frente_esquerda
//servo 3: levanta_tras_direita

  //levantar servos para dar os passos
  levanta_frente_esquerda.write(0);
  levanta_tras_direita.write(0);
  delay(200);
  servo_frente_esquerda.write(30);
  servo_tras_direita.write(180);
  delay(200);
  levanta_frente_esquerda.write(40);
  levanta_tras_direita.write(60);
  delay(200);
  servo_frente_esquerda.write(120);
  servo_tras_direita.write(110);
  delay(150);
}

  //voltar para posição inicial de cada servo

  //posições iniciais dos servos 8/9/2/3
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  //posições iniciais dos servos 6/7/4/5
  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);


for (int i=0; i<5; i++){
//código dançar

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

  //voltar para posição inicial de cada servo

  //posições iniciais dos servos 8/9/2/3
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  //posições iniciais dos servos 6/7/4/5
  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);

  //código andar

for (int i=0; i<5; i++){
  // par 8 e 9; par 4 e 5
//servo 8: servo_frente_direita
//servo 4: servo_tras_esquerda

//servo 9: levanta_frente_direita
//servo 5: levanta_tras_esquerda

  //levantar servos para dar os passos
  levanta_frente_direita.write(0);
  levanta_tras_esquerda.write(0);
  delay(200);
  servo_frente_direita.write(130);
  servo_tras_esquerda.write(20);
  delay(200);
  levanta_frente_direita.write(60);
  levanta_tras_esquerda.write(40);
  delay(200);
  servo_frente_direita.write(30);
  servo_tras_esquerda.write(90);
  delay(150);

 // par 6 e 7; par 2 e 3
//servo 6: servo_frente_esquerda
//servo 2: servo_tras_direita

//servo 7: levanta_frente_esquerda
//servo 3: levanta_tras_direita

  //levantar servos para dar os passos
  levanta_frente_esquerda.write(0);
  levanta_tras_direita.write(0);
  delay(200);
  servo_frente_esquerda.write(30);
  servo_tras_direita.write(180);
  delay(200);
  levanta_frente_esquerda.write(40);
  levanta_tras_direita.write(60);
  delay(200);
  servo_frente_esquerda.write(120);
  servo_tras_direita.write(110);
  delay(150);
}

  //voltar para posição inicial de cada servo

  //posições iniciais dos servos 8/9/2/3
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  //posições iniciais dos servos 6/7/4/5
  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);


//movimento dar a pata

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

  for (int i=0; i<5; i++){
  //movimento horizontal da aranha, pata 6/7
  delay(500);
  servo_frente_esquerda.write(100);
  delay(600);
  servo_frente_esquerda.write(50);
  }

    //voltar para posição inicial de cada servo

  //posições iniciais dos servos 8/9/2/3
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  //posições iniciais dos servos 6/7/4/5
  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);
}
}
void loop(){

}
