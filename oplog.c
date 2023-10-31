#include <stdio.h>
#include "oplog.h"

int fbeq(char comando[][30], int linha, int r[32]){
    char straux[30];
    int endereco, x, y;

    sscanf(comando[linha], "%s R%d R%d %d", straux, &x, &y, &endereco);

    if(r[x] == r[y]){ //Realiza a comparacao e caso seja verdadeira retorna o endereco
        return endereco - 1;
    } else {
        return linha;
    }
}

int fblt(char comando[][30], int linha, int r[32]){
    char straux[30];
    int endereco, x, y;

    sscanf(comando[linha], "%s R%d R%d %d", straux, &x, &y, &endereco);

    if(r[x] < r[y]){
        return endereco - 1; //Realiza a comparacao e caso seja verdadeira retorna o endereco
    } else {
        return linha;
    }
}

int fjmp(char comando[][30], int linha){
    char straux[30];
    int endereco;

    sscanf(comando[linha], "%s %d", straux, &endereco);

    return endereco - 1; //Retorna o endereco
}