#include <stdio.h>
#include "leitura.h"

void leComando(char comando[][115], int linha){
    fgets(comando[linha], sizeof(comando[linha]), stdin);
    printf("%s\n", comando[linha]);
}
