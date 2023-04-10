#include <IRremote.h>
#include <Servo.h>

// Criando objetos para cada servo
Servo servo_frente_direita;
Servo levanta_frente_direita;
Servo servo_tras_direita;
Servo levanta_tras_direita;
Servo servo_tras_esquerda;
Servo levanta_tras_esquerda;
Servo servo_frente_esquerda;
Servo levanta_frente_esquerda;

int RECV_PIN = 11; // Definindo o pino do receptor infravermelho
IRrecv irrecv(RECV_PIN); // Criando objeto para receber sinais do IR
decode_results results; // Criando objeto para armazenar resultados decodificados

void setup() {
  // Associando cada servo a um pino específico
  servo_frente_direita.attach(8);
  levanta_frente_direita.attach(9);
  servo_tras_direita.attach(2);
  levanta_tras_direita.attach(3);
  servo_tras_esquerda.attach(4);
  levanta_tras_esquerda.attach(5);
  servo_frente_esquerda.attach(6);
  levanta_frente_esquerda.attach(7);

  // Configurando a posição inicial de cada servo
  servo_frente_direita.write(80);
  levanta_frente_direita.write(40);
  servo_tras_direita.write(110);
  levanta_tras_direita.write(40); 
  servo_tras_esquerda.write(90);
  levanta_tras_esquerda.write(40);
  servo_frente_esquerda.write(80);
  levanta_frente_esquerda.write(40);

  irrecv.enableIRIn(); // Habilitando o receptor infravermelho para receber sinais
}

void loop() {
  // Verificando se foi recebido um sinal do controle remoto
  if (irrecv.decode(&results)) {
    // Executando uma ação de acordo com o sinal recebido
    switch (results.value) {
      case 0xFF906F: // Botão A
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
        break;
      case 0xFF506F: // Código do botão A
        // Executar movimento 1 da aranha (por exemplo, andar para frente)
        break;
      case 0xFFB847: // Código do botão B
        // Executar movimento 2 da aranha (por exemplo, andar para trás)
        break;
      case 0xFF9867: // Código do botão C
        // Executar movimento 3 da aranha (por exemplo, dar meia volta)
        break;
      case 0xFFE21D: // Código do botão E
        // Executar movimento 5 da aranha (por exemplo, abaixar)
        break;
      case 0xFF22DD: // Código do botão F
        // Executar movimento 6 da aranha (por exemplo, sube)
        break;
      default:
        break;
    }
    irrecv.resume();
  }
}

