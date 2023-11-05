# Servo

Este exemplo mostra o controle da posição de um servomotor (no caso um modelo 9G SG90). A posição é definida por um potenciômetro, lido usando ADC.

## Hardware

O potenciômetro deve ser conectado à Franzininho da seguinte forma:

* Terminal da esquerda do potenciômetro ao pino 3,3V
* Terminal central do potenciômetro ao pino A0
* Terminal da direita do potenciômetro ao pino GND

Nos testes foi usado um potenciômetro linear de 10K. Sugere-se o uso de potenciômetros entre 1K e 100K.

O potenciômetro funciona como um *divisor resistivo*, com a tensão no terminal central variando entre 0 e 3,3V conforme o eixo é girado.

O servomotor deve ser conectado à Franzininho da seguinte forma (confira as cores dos fios na documentação do seu motor):

* Alimentação (vermelho) ao pino 5V
* Terra (marrom) ao pino GND
* Controle (laranja) ao pino A1

A posição do servomotor é controlada por um sinal PWM. O período do sinal é 20ms (frequência de 50Hz), a largura do pulso (entre 0,5 e 2,5 ms) define a posição do eixo do motor. 

## Software

O exemplo usa a configuração padrão do ADC no runtime Arduino. Para controle do servmotor é usada a biblioteca padrão Servo. 

A função `analogRead()` retorna um valor entre 0 e 1023, correspondendo às tensões entre 0 e 3,3V.

Um objeto do tipo Servo é criado e associado ao pino de controle do servomotor. O método write posiciona o servo, ela recebe um valor entre 0 e 180 graus.

Para converter o valor retornado pelo ADC no valor para o write é usada a função [map](https://www.arduino.cc/reference/en/language/functions/math/map/)

## Experiências sugeridas

As larguras de pulso para controle do servomotor variam para cada servo. Você pode ajustar isso na chamada a `attach`.
