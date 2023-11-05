# Hello World

Este exemplo envia a mensagem "Alo, Franzininho C0!" para o micro através da serial conectada à USB.

## Configuração na IDE Arduino

No menu Tools, verifique que "U(S)ART Support" está configurado para "Enabled (generic Serial).

No Serial Monitor, a velocidade deve estar configurada para 115200 baud.

## Hardware

Não é necessário hardware adicional.

## Software

O exemplo usa o objeto Serial padrão do runtime Arduino. O único cuidado especial é configurar os pinos usados para a serial, como descrito na documentação da Franzininho C0.

## Experiências Sugeridas

Veja na documentação do Arduino os métodos disponíveis para o objeto Serial, particularmente as opções para envio (print e println).

Altere o programa para enviar continuamente uma contagem de 0 a 1000.
