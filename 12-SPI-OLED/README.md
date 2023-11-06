# I2C OLED

Exemplo de uso de SPI para conexão a um display OLED gráfico com controlador SSD1306.

## Hardware

Para este exemplo é necessário conectar um display OLED gráfico 128x64 com controlador SSD1306 e interface SPI. Este tipo de display é encontrado em versão com conector de 6 ou 7 pinos.

| Display | Franzininho C0          |
| :------ | :---------------------- |
| GND     | GND                     |
| VDD     | 3V3                     |
| SCK     | A1                      |
| SDA     | A2                      |
| RES     | A0                      |
| DC      | A3                      |
| CS      | A4 (versão com 7 pinos) |

## Software

Este exemplo interage diretamente com o controlador SSD1306. Uma explicação pode ser vista neste [artigo](https://dqsoft.blogspot.com/2015/10/display-oled-com-interface-i2c-parte-1.html) (de onde foi adaptado o código, subsituindo a comunicação I2C por SPI).

## Experiências sugeridas

* Altere o desenho dos caracteres
* Acrescente as letras
* Escreva uma rotina para desenhar retas horizontais e verticais* 
