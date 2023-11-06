# E/S Digital

Este exemplo mostra como é feita a entrada e saída digital, acendendo um LED quando um botão é pressionado.

## Hardware

Não é necessário hardware adicional, e usado um dos LEDs e o botão do usuário da placa.

## Software

Para usar um pino para entrada ou saída digital no Arduino, o primeiro passo é configurar o pino para entrada ou saída usando a função `pinMode`. A opção `INPUT_PULLUP` configura o pino para entrada e habilita o resistor de *pull-up*, um resistor interno que garante que o pino será lido em nível alto quando estiver desconectado.

Para controlar um pino de saída é usado o `digitalWrite()`; para ler o nível em um pino de entrada é usado `digitalRead()`.

## Experiências Sugeridas

* Inverta a lógica: deixe o botão aceso quando o botão estiver solto
* O programa atualiza continuamente o pino de saída, modifique para só mudar o pino de saída quando o nível no pino de entrada mudar.

