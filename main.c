#include <stdio.h>
#include "leitura.h"

int main(void){
    char comando[100][115]; //Espaço necessário para o comando mais longo
    int x, i;
    scanf("%d\n", &x); //Para saber quantas linhas serão usadas
    
    for(i=0; i<x; i++){
        leComando(comando, i);
    }

    return 0;
}
