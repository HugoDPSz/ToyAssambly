#include <stdio.h>
#include "saida.h"

void fprint(char comando[][30], int linha, int r[32]){
    int x;
    char straux[30];

    sscanf(comando[linha], "%s R%d", straux, &x);

    printf("%d\n", r[x]); //Imprime o registrador pedido
}