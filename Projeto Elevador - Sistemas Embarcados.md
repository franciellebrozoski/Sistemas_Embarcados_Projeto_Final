# Projeto Elevador - Sistemas Embarcados

###### Francielle de Lima Brozoski



##    Requisitos Funcionais:

- 03 elevadores, sendo 2 sociais e 1 serviço.
- 15 andares.
- Comandos de abertura e fechamento de portas.
- Seleção de elevador a ser chamado.
- Comando para inicialização no piso 0.
- Comandos para subida e descida do elevador.
- Comando para parada do elevador.
- Consulta ao estado (andar) do elevador.
- Ligar e desligar luz de botões de chamada elevador.
- Elevador somente se movimenta com porta fechada.
- Elevador reduz velocidade ao se aproximar de andar desejado.
- Portas se abrem apenas quando elevador está completamente parado no andar solicitado.
- Elevador tem tolerância de erro de andar (degrau) de 10%.




## Requisitos Não Funcionais

- Programa escrito em linguagem C.
- IDE IAR8 utilizando RTOS RTX5.
- Utilização do kit de desenvolvimento EK-TM4C1294XL.
- Programação concorrente de pelo menos 03 tarefas.
- Comunicação UART, implementada por interrupção.
- Simulação de elevador pelo simulador SimSE2.
- Comunicação entre simulador e kit será por interface serial.

