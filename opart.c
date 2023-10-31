#include <stdio.h>
#include "opart.h"

void fmov(char comando[][30], int linha, int r[32]){
    char straux1[30], straux2[30];
    int x, y, num;

    sscanf(comando[linha], "%s R%d %s", straux1, &x, straux2); //Separando as strings

    if(straux2[0] == 'R'){ //Verificando o terceiro termo
        sscanf(comando[linha], "%s R%d R%d", straux1, &x, &y); //Caso o terceiro termo seja registrador
        r[x] = r[y];
    } else {
        sscanf(comando[linha], "%s R%d %d", straux1, &x, &num); //Caso o terceiro termo seja um inteiro
        r[x] = num;
    }
}

void fadd(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] + r[z];
}

void fsub(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] - r[z];
}

void fmul(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] * r[z];
}

void fdiv(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] / r[z];
}

void fmodz(char comando[][30], int linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z); //Separando as strings
    r[x] = r[y] % r[z];

    if(r[x] < 0){
        r[x] += r[z];
    }
}