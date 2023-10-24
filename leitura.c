#include <stdio.h>
#include <string.h>
#include "leitura.h"

void leComando(char comando[][30], int linha){
    fgets(comando[linha], sizeof(comando[linha]), stdin);
}
