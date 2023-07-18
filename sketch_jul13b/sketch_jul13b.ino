
#include <SoftwareSerial.h>
#include <Servo.h>

// Pinos de comunicação com o módulo Bluetooth HC-06
SoftwareSerial bluetooth(2, 3);

// Definição dos servos
Servo servo_frente_direita;
Servo levanta_frente_direita;
Servo servo_tras_direita;
Servo levanta_tras_direita;
Servo servo_tras_esquerda;
Servo levanta_tras_esquerda;
Servo servo_frente_esquerda;
Servo levanta_frente_esquerda;

char controle = 'D';
void andarfrente();
void darPata();
void dancar();
void girardireita();
void giraresquerda();
void voltaratras();
void atacar();

void setup() {
  Serial.begin(9600); // Comunicação serial com o computador
  bluetooth.begin(9600); // Comunicação serial com o módulo Bluetooth

  // Ativação dos servos motores
  servo_frente_direita.attach(8);
  levanta_frente_direita.attach(9);
  servo_tras_direita.attach(12);
  levanta_tras_direita.attach(13);

  servo_tras_esquerda.attach(4);
  levanta_tras_esquerda.attach(5);
  servo_frente_esquerda.attach(6);
  levanta_frente_esquerda.attach(7);

  // Movimentação para posição inicial de cada servo
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(55);
  levanta_tras_direita.write(20);

  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(5);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1000);
}

 // -----------------------INICIO LOOP--------------------------

void loop() {

// Verifique se há dados disponíveis para leitura do módulo Bluetooth
  while (bluetooth.available()) {
    controle = bluetooth.read(); // Leia o comando enviado pelo celular
  }
 

     if(controle == 'N'){ // andar para frente
       andarfrente();
    }

    else if(controle == '3'){  //dar a pata
       darPata();
    }

    else if(controle == '2'){  //dançar
       dancar();
    }

    else if(controle == '1'){  //bate atacar
      atacar ();
    }   

    else if(controle == 'E'){  //girar direita (right)
       girardireita();
    }

    else if(controle == 'W'){  //girar esquerda (left)
       giraresquerda ();
    }

    else if(controle == 'S'){  //tetes voutar para trás
      voltaratras ();
    }

}

// -----------------------FIM LOOP------------------------------



// -----------------------INICIO DAS FUNÇÕES------------------------------

void voltaratras() {
  // Movimento das patas (passo)

  // Levantar servos para dar os passos
  levanta_frente_direita.write(0);
  levanta_tras_esquerda.write(0);
  delay(200);
  servo_frente_direita.write(30);
  servo_tras_esquerda.write(90);
  delay(200);
  levanta_frente_direita.write(60);
  levanta_tras_esquerda.write(40);
  delay(200);
  servo_frente_direita.write(130);
  servo_tras_esquerda.write(20);
  delay(150);

  // Levantar servos para dar os passos
  levanta_frente_esquerda.write(0);
  levanta_tras_direita.write(0);
  delay(200);
  servo_frente_esquerda.write(120);
  servo_tras_direita.write(145);
  delay(200);
  levanta_frente_esquerda.write(80);
  levanta_tras_direita.write(60);
  delay(200);
  servo_frente_esquerda.write(20);
  servo_tras_direita.write(45);
  delay(150);
 
}

  void darPata(){

    // Organização das outras patas
    levanta_tras_direita.write(80);
    servo_frente_direita.write(130);
    levanta_frente_direita.write(70);
    servo_tras_esquerda.write(50);
    levanta_tras_esquerda.write(70);
    delay(400);

    // Levantando para dar a pata
    levanta_frente_esquerda.write(0);
    delay(1500);

    for (int e = 0; e < 3; e++) {
    // Movimento horizontal da aranha, pata 6/7
    delay(500);
    servo_frente_esquerda.write(120);
    delay(600);
    servo_frente_esquerda.write(30);
    }

  // -------VOLTA AS POSIÇÕES INICIAIS--------
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(55);
  levanta_tras_direita.write(20);

  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(5);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);


  }

  
  void dancar(){

     for (int c = 0; c < 3; c++) {
     // Código dançar

     delay(300);

     levanta_frente_direita.write(0);
     levanta_tras_direita.write(0);
     levanta_frente_esquerda.write(80);
     levanta_tras_esquerda.write(90);

     delay(600);

     levanta_frente_direita.write(80);
     levanta_tras_direita.write(100);
     levanta_frente_esquerda.write(0);
     levanta_tras_esquerda.write(0);

     delay(300);
    }

    // -------VOLTA AS POSIÇÕES INICIAIS--------
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(55);
  levanta_tras_direita.write(20);

  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(5);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);
   
  }

  void atacar(){

    
    // Organização das outras patas
    servo_tras_esquerda.write(0);
    servo_tras_direita.write(155);
    levanta_tras_direita.write(0);
    levanta_tras_esquerda.write(0);
    levanta_frente_esquerda.write(80);
    levanta_frente_direita.write(80);
    servo_frente_direita.write(120);
    servo_frente_esquerda.write(30);

    delay(400);

    for (int c = 0; c < 4; c++) {
     // Código atacar 

    levanta_frente_esquerda.write(0);
    levanta_frente_direita.write(0);
      delay(700);
    levanta_frente_esquerda.write(80);
    levanta_frente_direita.write(80);
      delay(400);
    }

    // -------VOLTA AS POSIÇÕES INICIAIS--------

  levanta_tras_direita.write(40);
  levanta_tras_esquerda.write(40);
  delay(1000);

  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(5);

  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(5);

  servo_tras_esquerda.write(150);
  
  delay(1000);

   servo_tras_esquerda.write(100);
   servo_tras_direita.write(55);
   
  }

  void andarfrente(){

  // Movimento das patas (passo)

      // Levantar servos para dar os passos
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

      // Levantar servos para dar os passos
      levanta_frente_esquerda.write(0);
      levanta_tras_direita.write(0);
      delay(200);
      servo_frente_esquerda.write(30);
      servo_tras_direita.write(145);
      delay(200);
      levanta_frente_esquerda.write(80);
      levanta_tras_direita.write(60); 
      delay(200);
      servo_frente_esquerda.write(120);
      servo_tras_direita.write(45);
      delay(150);
  }



void giraresquerda() {

  // Movimento das patas (passo)

  // Levantar servos para dar os passos
  levanta_frente_direita.write(0);
  levanta_tras_esquerda.write(0);
  delay(200);
  servo_frente_direita.write(30);
  servo_tras_esquerda.write(50);
  delay(200);
  levanta_frente_direita.write(60);
  levanta_tras_esquerda.write(40);
  delay(200);
  servo_frente_direita.write(130);
  servo_tras_esquerda.write(140);
  delay(150);

  // Levantar servos para dar os passos
  levanta_frente_esquerda.write(0);
  levanta_tras_direita.write(0);
  delay(200);
  servo_frente_esquerda.write(120);
  servo_tras_direita.write(115);
  delay(200);
  levanta_frente_esquerda.write(80);
  levanta_tras_direita.write(60);
  delay(200);
  servo_frente_esquerda.write(30);
  servo_tras_direita.write(5);
  delay(150);

  
}


  void girardireita(){



    // Movimento das patas (passo)

  // Levantar servos para dar os passos
  levanta_frente_esquerda.write(0);
  levanta_tras_direita.write(0);
  delay(200);
  servo_frente_esquerda.write(30);
  servo_tras_direita.write(5);
  delay(200);
  levanta_frente_esquerda.write(80);
  levanta_tras_direita.write(40);
  delay(200);
  servo_frente_esquerda.write(130);
  servo_tras_direita.write(115);
  delay(150);

  // Levantar servos para dar os passos
  levanta_frente_direita.write(0);
  levanta_tras_esquerda.write(0);
  delay(200);
  servo_frente_direita.write(120);
  servo_tras_esquerda.write(150);
  delay(200);
  levanta_frente_direita.write(40);
  levanta_tras_esquerda.write(60);
  delay(200);
  servo_frente_direita.write(30);
  servo_tras_esquerda.write(70);
  delay(150);

  }