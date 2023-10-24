#include <stdio.h>
#include <string.h>
#include "controle.h"
#include "opart.h"

void controle(char comando[][30]){
    int i, j=0, r[32];
    char straux[30];

    for(i=0; i<32; i++){ //Inicilizando todos os registradores com zero
        r[i] = 0;
    }

    printf("\n");
    for(i=0; i<100000; i++){
        sscanf(comando[j], "%s", straux); //Obtendo a parte necessaria para identificar o que foi pedido

        //Comparacoes para saber qual funcao chamar
        if(strcasecmp(straux, "MOV") == 0){
            printf("Voce selecionou MOV\n");
            fmov(comando, j, r);
        } else if(strcasecmp(straux, "ADD") == 0){
            printf("Voce selecionou ADD\n");
            fadd(comando, j, r);
        } else if(strcasecmp(straux, "SUB") == 0){
            printf("Voce selecionou SUB\n");
            fsub(comando, j, r);
        } else if(strcasecmp(straux, "MUL") == 0){
            printf("Voce selecionou MUL\n");
            fmul(comando, j, r);
        } else if(strcasecmp(straux, "DIV") == 0){
            printf("Voce selecionou DIV\n");
            fdiv(comando, j, r);
        } else if(strcasecmp(straux, "MOD") == 0){
            printf("Voce selecionou MOD\n");
            fmodz(comando, j, r);
        } else if(strcasecmp(straux, "BEQ") == 0){
            printf("Voce selecionou BEQ");
        } else if(strcasecmp(straux, "BLT") == 0){
            printf("Voce selecionou BLT");
        } else if(strcasecmp(straux, "JMP") == 0){
            printf("Voce selecionou JMP");
        } else if(strcasecmp(straux, "LOAD") == 0){
            printf("Voce selecionou LOAD");
        } else if(strcasecmp(straux, "STORE") == 0){
            printf("Voce selecionou STORE");
        } else if(strcasecmp(straux, "PRINT") == 0){
            printf("Voce selecionou PRINT");
        } else if(strcasecmp(straux, "EXIT") == 0){
            printf("Voce selecionou EXIT\n");
            break;
        }
        j++;
    }
}