# Dimmer

Este exemplo mostra o controle da intensidade de um LED usando PWM. A intensidade é definida pela posição de um potenciômetro, lido usando ADC.

## Hardware

Um potenciômetro deve ser conectado à Franzininho:

* Terminal da esquerda do potenciômetro ao pino 3,3V
* Terminal central do potenciômetro ao pino A0
* Terminal da direita do potenciômetro ao pino GND

Nos testes foi usado um potenciômetro linear de 10K. Sugere-se o uso de potenciômetros entre 1K e 100K.

O potenciômetro funciona como um *divisor resistivo*, com a tensão no terminal central variando entre 0 e 3,3V conforme o eixo é girado.

## Software

O exemplo usa a configuração padrão do ADC e do PWM no runtime Arduino. 

A função `analogRead()` retorna um valor entre 0 e 1023, correspondendo às tensões entre 0 e 3,3V.

A função `analogWrite()` simula a saída de um valor analógico através de PWM (nos pinos que estejam ligados à saída de um timer). O duty cycle é definido por um valor de 0 a 255. Obs: O pacote STM32duino permite também o uso do DAC para uma saída analógica nos pinos com este recurso, veja a [documentação oficial](https://github.com/stm32duino/Arduino_Core_STM32/wiki/API#analog).

## Experiências sugeridas

Ao invés de usar o potenciômetro para determinar a intensidade, experimente escrever código para mudá-la gradualmente. 

