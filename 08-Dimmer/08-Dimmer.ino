/*
  Exemplo de PWM para a Franzininho C0
  Faz leitura da posição de um potenciômetro usando o ADC
  e usa o valor lido para controlar o brilho de um LED

  05/11/23 Daniel Quadros
*/

#define POT_PIN A0
#define LED_PIN 13

// Iniciação
void setup() {
  // Inicia o pino de controle do LED
  pinMode (LED_PIN, OUTPUT);
}

// Loop principal
void loop() {
  int adc = analogRead(POT_PIN);
  analogWrite(LED_PIN, adc >> 2);
  delay(100);
}
