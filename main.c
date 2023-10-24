#include <stdio.h>
#include <string.h>
#include "leitura.h"
#include "controle.h"

int main(void){
    char comando[100][30]; //Espaço necessário para o comando mais longo
    int x, i;
    scanf("%d\n", &x); //Para saber quantas linhas serão usadas
    
    for(i=0; i<x; i++){
        leComando(comando, i); //Lendo as isntrucoes
    }

    controle(comando); //Aqui onde o trabalho acontece

    return 0;
}
