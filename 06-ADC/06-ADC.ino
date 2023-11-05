/*
  Exemplo de leitura analógica (ADC) para a Franzininho C0

  04/11/23 Daniel Quadros
*/

#define POT_PIN A0

// Iniciação
void setup() {
  // Conecta a UART aos pinos ligados à USB
  Serial.setRx(PA_10_R);
  Serial.setTx(PA_9_R);
  // Inicia a serial
  Serial.begin(115200);
}

// Loop principal
void loop() {
  int adc = analogRead(POT_PIN);
  Serial.println(adc);
  delay(1000);
}
