#include <stdio.h>
#include "opart.h"

void fmov(char comando[][30], char linha, int r[32]){
    char straux1[30], straux2[30];
    int x, y, num;

    sscanf(comando[linha], "%s R%d %s", straux1, &x, straux2);

    if(straux2[0] == 'R'){
        sscanf(comando[linha], "%s R%d R%d", straux1, &x, &y);
        r[x] = r[y];
    } else {
        sscanf(comando[linha], "%s R%d %d", straux1, &x, &num);
        r[x] = num;
    }
    printf("%d\n", r[x]);
}

void fadd(char comando[][30], char linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z);
    r[x] = r[y] + r[z];
    printf("%d\n", r[x]);
}

void fsub(char comando[][30], char linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z);
    r[x] = r[y] - r[z];
    printf("%d\n", r[x]);
}

void fmul(char comando[][30], char linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z);
    r[x] = r[y] * r[z];
    printf("%d\n", r[x]);
}

void fdiv(char comando[][30], char linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z);
    r[x] = r[y] / r[z];
    printf("%d\n", r[x]);
}

void fmodz(char comando[][30], char linha, int r[32]){
    char straux[30];
    int x, y, z;

    sscanf(comando[linha], "%s R%d R%d R%d", straux, &x, &y, &z);
    r[x] = r[y] % r[z];

    if(r[x] < 0){
        r[x] += r[z];
    }
    printf("%d\n", r[x]);
}