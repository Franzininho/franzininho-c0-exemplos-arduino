/*
  Exemplo de Debounce de botão para a Franzininho C0
  Usa interrupção do time (baseado no exemplo Timerbase_callback)
  Envia mensagem pela serial quando botão é apertado ou solto

  15/10/23 Daniel Quadros
*/

#define BOTAO 8

HardwareTimer *MyTim;

bool apertouBotao = false;
bool soltouBotao = false;
bool botaoApertadoDb = false;

#define DEBOUNCE_STABLE_PERIOD 10 // 100ms

// Iniciacao
void setup() {
  // Conecta a UART aos pinos ligados à USB
  Serial.setRx(PA_10_R);
  Serial.setTx(PA_9_R);
  // Inicia a serial
  Serial.begin(115200);
  // Dá um tempo para a IDE do Arduino ativar o Monitor Serial
  delay(3000);

  // Inicia o botao
  pinMode(BOTAO, INPUT_PULLUP);

  // Inicia a interrupção de timer
  MyTim = new HardwareTimer(TIM1);
  MyTim->setOverflow(10000, MICROSEC_FORMAT); // 10 ms
  MyTim->attachInterrupt(Tim_callback);
  MyTim->resume();

  // Envia mensagem de identificação
  Serial.println("Debounce de Botao\n");
}

// Rotina chamada periodicamente, atualiza situação do botão
void Tim_callback(void) {
  static bool botaoApertado = false;
  static uint8_t debounceCounter = 0;

  bool apertado = digitalRead(BOTAO) == LOW;
  if (botaoApertado != apertado) {
    // botão mudou, aguarda estabilizar
    botaoApertado = apertado;
    debounceCounter = 0;
    return;
  }

  if (debounceCounter < DEBOUNCE_STABLE_PERIOD) {
    // Validando mudança
    if (++debounceCounter == DEBOUNCE_STABLE_PERIOD) {
      // estabilizou
      if (botaoApertadoDb != botaoApertado) {
        botaoApertadoDb = botaoApertado;
        if (botaoApertado) {
          apertouBotao = true;
        } else {
          soltouBotao = true;
        }
      }
    }
  }

}

// Laco Principal - avisa quando aperta ou solta o botão
void loop() {
  if (apertouBotao) {
    apertouBotao = false;
    Serial.println("Apertou o botao");
  }
  if (soltouBotao) {
    soltouBotao = false;
    Serial.println("Soltou o botao");
  }
}
