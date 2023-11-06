/*
  Exemplo de Pisca Led para a Franzininho C0
  Usa interrupção do time (baseado no exemplo Timerbase_callback)

  04/11/23 Daniel Quadros
*/

#define LED_BUILTIN 13    // LED à esquerda do botão do usuário

HardwareTimer *MyTim;


// Iniciação
void setup() {
  // Inicia o LED
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  // Inicia a interrupção de timer
  MyTim = new HardwareTimer(TIM1);
  MyTim->setOverflow(500000, MICROSEC_FORMAT); // 500 ms
  MyTim->attachInterrupt(Tim_callback);
  MyTim->resume();
}

// Loop principal
void loop() {
  delay(100);   // nada a fazer
}

// Rotina chamada periodicamente, pisca o LED
void Tim_callback(void) {
  static bool ledAceso = false;

  ledAceso = !ledAceso; 	// inverte estado do LED
  digitalWrite(LED_BUILTIN, ledAceso? HIGH : LOW);  // atualiza o LED
}