# I2C LCD

Exemplo de uso de I2C para conexão a um display LCD alfanumérico com interface I2C usando o PCF8574.

## Hardware

Para este exemplo é necessário conectar um display LCD alfanumérico com interface LCD usando o PCF8574:

* GND - GND
* Vcc - 5V
* SDA - PC14
* SCL - PB7

e colocar resistores de 10k (pull-ups) entre os sinais SDA e SCL e o pino 3V3 da Franzininho C0.

## Software

Este exemplo requer a biblioteca LiquidCrystal_PCF8574 de Matthias Hertel (disponível no Library Manager da IDE).

## Experiências sugeridas

* Altere o código para apresentar um relógio
* Implemente um temporizador: ao apertar o botão do usuário comece uma contagem descrescente e acenda um dos LEDs quando a contagem chegar a zero. 
