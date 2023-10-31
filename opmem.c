#include <stdio.h>
#include "opmem.h"

void fload(char comando[][30], int linha, int r[32], int memory[1000]){
    char straux[30];
    int x, y;

    sscanf(comando[linha], "%s R%d R%d", straux, &x, &y);
    r[x] = memory[r[y]];
}

void fstore(char comando[][30], int linha, int r[32], int memory[1000]){
    char straux[30];
    int x, y;

    sscanf(comando[linha], "%s R%d R%d", straux, &x, &y);
    memory[r[y]] = r[x];
}