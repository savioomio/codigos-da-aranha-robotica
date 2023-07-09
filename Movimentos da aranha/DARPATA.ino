#include <LiquidCrystal.h>

// Definição do tamanho do LCD
#define LCD_COLUMNS 16
#define LCD_ROWS 2

// Objeto do tipo LiquidCrystal_I2C para controlar o LCD
LiquidCrystal lcd(LCD_COLUMNS, LCD_ROWS);

double ConverterMgPorLitroParaPorcentagem(double mgPorLitro) {
    // A fórmula para converter mg/L em % é:
    // % = (mg/L * 100) / 100000
    return (mgPorLitro * 100) / 100000;
}

void setup() {
    // Inicialização do LCD
    lcd.begin(LCD_COLUMNS, LCD_ROWS);

    // Exibição inicial
    lcd.print("Sensor de Gases");
    lcd.setCursor(0, 1);
    lcd.print("Aguarde...");

    // Inicialização de outros componentes do Arduino, se necessário
}

void loop() {
    // Leitura do valor em mg/L do sensor
    double mgPorLitro = lerValorDoSensor();

    // Conversão para porcentagem
    double porcentagem = ConverterMgPorLitroParaPorcentagem(mgPorLitro);

    // Limpar o LCD
    lcd.clear();

    // Exibir o valor no LCD
    lcd.print("Valor: ");
    lcd.print(porcentagem, 2);  // Exibe o valor com 2 casas decimais
    lcd.print("%");

    // Aguardar um intervalo de tempo antes da próxima leitura
    delay(1000);
}

double lerValorDoSensor() {
    // Código para ler o valor do sensor e retornar o valor em mg/L
    // Substitua esta função pelo código específico do seu sensor
    // ou utilize bibliotecas específicas do sensor que você está usando
}