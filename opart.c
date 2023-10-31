#include <stdio.h>
#include "opart.h"

void fmov(char comando[][30], int linha, int r[32]){
    char straux1[30], straux2[30];
    int x, y, num;

    sscanf(comando[linha], "%s R%d %s", straux1, &x, straux2); //Separando as strings

    if(straux2[0] == 'R'){ //Verificando o terceiro termo
        sscanf(comando[linha], "%s R%d R%d", straux1, &x, &y); //Caso o terceiro termo seja registrador
        r[x] = r[y]; //Rx assume valor de Ry
    } else {
        sscanf(comando[linha], "%s R%d %d", straux1, &x, &num); //Caso o terceiro termo seja um inteiro
        r[x] = num; //Rx assume valor de inteiro
    }
}

void fadd(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] + r[z]; //Rx recebe a soma
}

void fsub(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] - r[z]; //Rx recebe a subtracao
}

void fmul(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] * r[z]; //Rx recebe o produto
}

void fdiv(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] / r[z]; //Rx recebe a divisao
}

void fmodz(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] % r[z]; //Rx recebe o resto

    if(r[x] < 0){
        r[x] += r[z]; //Correcao de resto
    }
}