/*
  Exemplo de Entrada e Saída Digital para a Franzininho C0
  LED aceso quando o botão é apertado

  15/10/23 Daniel Quadros
*/

#define LED   13
#define BOTAO 8


// Iniciação
void setup() {
  // Configura os pinos
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
}

// Laco principal
void loop() {
  if (digitalRead(BOTAO) == LOW) {
    // botão apertado -> acende o LED
    digitalWrite(LED, HIGH);
  } else {
    // botão solto -> apaga o LED
    digitalWrite(LED, LOW);
  }
}
