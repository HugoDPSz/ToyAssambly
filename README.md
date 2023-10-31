# ToyAssambly
Este projeto foi desenvolvido por Hugo de Paula Souza como parte da disciplina de Programação de computadores 1 licenciada pelo professor Daniel Saad em 2023/2
## Como usar
Para usar este projeto, siga estas etapas:
1. Copie o repositório do GitHub
2. Use o comando "make"
3. Execute com "./main"
## O que o projeto faz
O projeto simula um interpretador de Assembly simples, uma linguagem de baixo nível que está em um nível de abstração bem próximo a da arquitetura da máquina programada\
Este projeto em sua primeira linha recebe um número inteiro que vai determinar a quantidade de comandos que o programa irá ler\
Cada linha após a primeira receberá exatamanete um comando\
Como um Assembly, o projeto apresenta 32 registradores que vão de R0 a R31 e armezenam valores de inteiros
Além dos registradores, o programa tem uma mémoria com 1000 espaços que recebem inteiros
## Funcionalidades
Este projeto possui as seguintes funcionalidades:
* MOV RX INTEIRO: atribui a RX o valor do INTEIRO
* MOV RX RY: atribui a RX o valor de RY.
* ADD RX RY RZ: soma os valores de RY e RZ e armazena o resultado em RX.
* SUB RX RY RZ: subtrai RZ de RY e armazena o resultado em RX.
* MUL RX RY RZ: multiplica RY por RZ e armazena o resultado em RX.
* DIV RX RY RZ: divide RY por RZ e armazena o resultado em RX. A divisão é inteira, isto é, a parte fracionária é desprezada.
* MOD RX RY RZ: toma o resultado de RY mod RZ e armazena o resultado em RX. O resultado RX da operação de mod é sempre 0 ≤ RX < RZ.
* BEQ RX RY ENDERECO: o fluxo do programa é direcionado para a instrução que ocupa a linha de número ENDERECO caso RX seja igual a RY.
* BLT RX RY ENDERECO: o fluxo do programa é direcionado para a instrução que ocupa a linha de número ENDERECO caso RX seja menor que RY.
* JMP ENDERECO: o fluxo do programa é direcionado para a instrução que ocupa a linha de número ENDERECO.
* LOAD RX RY: carrega o conteúdo de memoria[RY] para o registrador RX.
* STORE RX RY: carrega o conteúdo de RX para memoria[RY].
* PRINT RX: imprime uma linha na tela com o o valor de RX.
* EXIT: encerra o programa.
