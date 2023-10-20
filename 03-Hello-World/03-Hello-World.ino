/*
  Exemplo "Hello World" a Franzininho C0
  Envia mensagem pela serial (UART1, ligada à USB)

  15/10/23 Daniel Quadros
*/

// Iniciação
void setup() {
  // Conecta a UART aos pinos ligados à USB
  Serial.setRx(PA_10_R);
  Serial.setTx(PA_9_R);
  // Inicia a serial
  Serial.begin(115200);
  // Dá um tempo para a IDE do Arduino ativar o Monitor Serial
  delay(3000);
  // Envia a mensagem
  Serial.println("Alo, Franzininho C0!");
}

// Laco principal (vazio)
void loop() {
}
