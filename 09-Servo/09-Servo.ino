/*
  Exemplo de controle de servomotor para a Franzininho C0
  Faz leitura da posição de um potenciômetro usando o ADC
  e usa o valor lido para controlar um servomotor

  05/11/23 Daniel Quadros
*/

#include <Servo.h>

#define POT_PIN A0
#define SERVO_PIN A1

Servo servo;

// Iniciação
void setup() {
  // Inicia o controle do Servo
  servo.attach(SERVO_PIN);
}

// Loop principal
void loop() {
  int adc = analogRead(POT_PIN);
  int pos = map(adc, 0, 1023, 0, 180);
  servo.write(pos);
  delay(20);
}
