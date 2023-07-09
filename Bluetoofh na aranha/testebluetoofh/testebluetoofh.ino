#include <SoftwareSerial.h>
#include <Servo.h>

// Pinos de comunicação com o módulo Bluetooth HC-06
SoftwareSerial bluetooth(10, 11);

// Definição dos servos
Servo servo_frente_direita;
Servo levanta_frente_direita;
Servo servo_tras_direita;
Servo levanta_tras_direita;
Servo servo_tras_esquerda;
Servo levanta_tras_esquerda;
Servo servo_frente_esquerda;
Servo levanta_frente_esquerda;

void setup() {
  Serial.begin(9600); // Comunicação serial com o computador
  bluetooth.begin(9600); // Comunicação serial com o módulo Bluetooth

  // Ativação dos servos motores
  servo_frente_direita.attach(8);
  levanta_frente_direita.attach(9);
  servo_tras_direita.attach(2);
  levanta_tras_direita.attach(3);
  servo_tras_esquerda.attach(4);
  levanta_tras_esquerda.attach(5);
  servo_frente_esquerda.attach(6);
  levanta_frente_esquerda.attach(7);

  // Movimentação para posição inicial de cada servo
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);
}

void loop() {
  // Verifique se há dados disponíveis para leitura do módulo Bluetooth
  if (bluetooth.available()) {
    char command = bluetooth.read(); // Leia o comando enviado pelo celular

    // Chame as funções relevantes da sua aranha com base no comando recebido
    switch (command) {
      case 'F':
        andar();
        break;
      case 'D':
        dancar();
        break;
      case 'P':
        darPata();
        break;
      // Adicione mais casos para outros comandos, se necessário
    }
  }

  // Outras verificações e lógica da sua aranha podem ser adicionadas aqui
}

// Funções para controlar os movimentos da sua aranha
void andar() {
  for (int a = 0; a < 5; a++) {
    // Código andar

    for (int b = 0; b < 5; b++) {
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
      servo_tras_direita.write(180);
      delay(200);
      levanta_frente_esquerda.write(40);
      levanta_tras_direita.write(60);
      delay(200);
      servo_frente_esquerda.write(120);
      servo_tras_direita.write(110);
      delay(150);
    }

    // Voltar para posição inicial de cada servo
    servo_frente_direita.write(80);
    levanta_frente_direita.write(20);

    servo_tras_direita.write(110);
    levanta_tras_direita.write(20);

    servo_frente_esquerda.write(80);
    levanta_frente_esquerda.write(35);

    servo_tras_esquerda.write(90);
    levanta_tras_esquerda.write(20);
    delay(1500);
  }
}

void dancar() {
  for (int c = 0; c < 5; c++) {
    // Código dançar

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

  // Voltar para posição inicial de cada servo
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);
}

void darPata() {
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

  for (int e = 0; e < 5; e++) {
    // Movimento horizontal da aranha, pata 6/7
    delay(500);
    servo_frente_esquerda.write(100);
    delay(600);
    servo_frente_esquerda.write(50);
  }

  // Voltar para posição inicial de cada servo
  servo_frente_direita.write(80);
  levanta_frente_direita.write(20);

  servo_tras_direita.write(110);
  levanta_tras_direita.write(20);

  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(35);

  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(20);
  delay(1500);
}
