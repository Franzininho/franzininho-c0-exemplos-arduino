# I2C OLED

Exemplo de uso de I2C para conexão a um display OLED gráfico com controlador SSD1306.

## Hardware

Para este exemplo é necessário conectar um display OLED gráfico 128x64 com controlador SSD1306 e interface I2C:

* GND - GND
* Vcc - 5V
* SDA - PC14
* SCL - PB7

e colocar resistores de 10k (pull-ups) entre os sinais SDA e SCL e o pino 3V3 da Franzininho C0.

## Software

Este exemplo interage diretamente com o controlador SSD1306. Uma explicação pode ser vista neste [artigo](https://dqsoft.blogspot.com/2015/10/display-oled-com-interface-i2c-parte-1.html) (de onde foi adaptado o código).

## Experiências sugeridas

* Altere o desenho dos caracteres
* Acrescente as letras
* Escreva uma rotina para desenhar retas horizontais e verticais* 
