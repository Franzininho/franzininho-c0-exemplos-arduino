/*
  Exemplo "I2C LCD" na Franzininho C0
  Mostra um contador em um display LCD alfanumerico 16x2
  com interface I2C usando o PCF8574

  Requer a biblioteca LiquidCrystal_PCF8574 de Matthias Hertel
  (disponível no Library Manager da IDE)

  Conexão do display:
  GND - GND
  VCC - 5V
  SDA - PC14
  SCL - PB7

  Colocar resistores de 10k (pull-ups) entre os sinais SDA e SCL
  e o pino 3V3 da Franzininho C0.

  20/10/23 Daniel Quadros
*/

#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

LiquidCrystal_PCF8574 lcd(0x3F);

// Iniciacao
void setup() {
  // Configura os pinos para I2C
  Wire.setSCL(PB7);
  Wire.setSDA(PC14);

  // Inicia o display
  lcd.begin(16, 2);
  lcd.setBacklight(255);
  lcd.print("Franzininho C0");
}

// Loop principal
void loop() {
  static char cont[5] = "0000";  // contador

  // Mostra valor atual e espera 1 segundo
  lcd.setCursor(0, 1);
  lcd.print(cont);
  delay(1000);

  // Incrementa o contador
  for (int i = 3; i >- 0; i--) {
    if (cont[i] < '9') {
      // incrementa o dígito e pronto
      cont[i]++;
      break;
    }
    cont[i] = '0'; // volta a zero e incrementa o anterior
  }
}
