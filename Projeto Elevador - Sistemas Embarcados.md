# Projeto Elevador - Sistemas Embarcados

###### Francielle de Lima Brozoski



##    Requisitos Funcionais:


- Usuário quando fora do elevador, deverá solicitar elevador através de botão, disponível ao lado da porta do elevador em todos os andares.
- O elevador correspondente ao botão deverá atender a solicitação. 
- O elevador deverá se locomover até o andar solicitado.
- O elevador deverá se locomover somente quando todas as portas, de todos os andares, estiverem fechadas.
- O elevador deverá estar alinhado com o andar antes da abertura de portas.
- Ao chegar no andar solicitado, o elevador deverá abrir completamente as portas.
- O  usuário quando dentro do elevador, deverá selecionar o andar desejado em seu painel interno, através de pressionamento de botão.
- O elevador deverá fechar completamente as portas ao ser solicitado andar de destino através do painel interno.
- O elevador deverá iniciar subida/descida de maneira suave e acelerar até sua velocidade máxima gradativamente.



## Requisitos Não Funcionais


- O software deverá ser escrito em linguagem C.
- O kit de desenvolvimento EK-TM4C1294X deverá ser utilizado.
- A IDE IAR8 será utilizada.
- O sistema operacional embarcado RTOS RTX5 deverá ser utilizado.
- O software deverá ser implementado por programação concorrente com pelo menos 3 tasks.
- A comunicação a ser implementada será a comunicação UART, por interrupção.
- O ambiente de simulação do elevador será o SIMSE2.


