# Blinky

Este é o tradicional exemplo "pisca LED".

## Hardware

Não é necessário nenhum hardware adicional, vamos piscar um dos LED que já está na Franzininho C0.

## Software

O código é o exemplo padrão "Blink" do Arduino. A única alteração é a definição do pino ao qual o LED está ligado:

```
#define LED_BUILTIN 13
```

O código é bem simples:

* Na iniciação configuramos o pino para saída
* No laço principal acendemos o LED, aguardamos um tempo, apagamos o LED e aguardamos mais um tempo.

## Experiências sugeridas

* Trocar o LED usado (a Franzininho C0 tem dois LEDs).
* Mudar os tempos que o LED permanece aceso e apagado.
* Piscar os dois LEDs **com tempos diferentes**. Talvez não seja tão fácil como você imagina, isto mostra as limitações deste tipo de programação, baseada em esperas feitas com delay().

