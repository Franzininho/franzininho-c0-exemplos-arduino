# ADC

Este exemplo mostra a leitura da tensão em um pino da Franzininho usando o ADC (Conversor Analógico Digital).

## Hardware

Um potenciômetro deve ser conectado à Franzininho:

* Terminal da esquerda do potenciômetro ao pino 3,3V
* Terminal central do potenciômetro ao pino A0
* Terminal da direita do potenciômetro ao pino GND

Nos testes foi usado um potenciômetro linear de 10K. Sugere-se o uso de potenciômetros entre 1K e 100K.

O potenciômetro funciona como um *divisor resistivo*, com a tensão no terminal central variando entre 0 e 3,3V conforme o eixo é girado.

## Software

O exemplo usa a configuração padrão do ADC no runtime Arduino. A função analogRead() retorna um valor entre 0 e 1023, correspondendo às tensões entre 0 e 3,3V. O valor é enviado ao micro através da serial conectado à USB.

## Experiências sugeridas

Veja a correspondência entre os valores lidos e o ângulo do eixo do potenciômetro. Repita trocando por um potenciômetro logaritmico.

