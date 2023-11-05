# Blinky Int

Neste exemplo usamos uma **interrupção de timer** para piscar o LED;

## Hardware

Não é necessário nenhum hardware adicional, vamos piscar um dos LED que já está na Franzininho C0.

## Software

Este exemplo usa o objeto HardwareTimer. Este é um objeto específico do runtime Arduino para STM32. O pacote STM32duino inclui exemplos de uso deste objeto.

Na iniciação do timer configuramos o tempo entre cada interrupção e definimos a rotina que será chamada periodicamente.

## Experiências Sugeridas

* Trocar o LED usado (a Franzininho C0 tem dois LEDs).
* Mudar os tempos que o LED permanece aceso e apagado.
* Piscar os dois LEDs **com tempos diferentes**.

