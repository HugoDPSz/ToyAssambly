#include <stdio.h>
#include <string.h>
#include "controle.h"
#include "opart.h"
#include "oplog.h"
#include "opmem.h"
#include "saida.h"

void controle(char comando[][30]){
    int i, j=0, r[32], memory[1000];
    char straux[30];

    for(i=0; i<32; i++){ //Inicilizando todos os registradores com zero
        r[i] = 0;
    }

    for(i=0; i<1000; i++){ //Inicializando a memoria com zero
        memory[i] = 0;
    }

    for(i=0; i<100000; i++){
        sscanf(comando[j], "%s", straux); //Obtendo a parte necessaria para identificar o que foi pedido

        //Comparacoes para saber qual funcao chamar
        if(strcasecmp(straux, "MOV") == 0){
            fmov(comando, j, r);
        } else if(strcasecmp(straux, "ADD") == 0){ //Chamando funcao para ADD
            fadd(comando, j, r);
        } else if(strcasecmp(straux, "SUB") == 0){ //Chamando funcao para SUB
            fsub(comando, j, r);
        } else if(strcasecmp(straux, "MUL") == 0){ //Chamando funcao para MUL
            fmul(comando, j, r);
        } else if(strcasecmp(straux, "DIV") == 0){ //Chamando funcao para DIV
            fdiv(comando, j, r);
        } else if(strcasecmp(straux, "MOD") == 0){ //Chamando funcao para MOD
            fmodz(comando, j, r);
        } else if(strcasecmp(straux, "BEQ") == 0){ //Chamando funcao para BEQ
            j = fbeq(comando, j, r);
        } else if(strcasecmp(straux, "BLT") == 0){ //Chamando funcao para BLT
            j = fblt(comando, j, r);
        } else if(strcasecmp(straux, "JMP") == 0){ //Chamando funcao para JMP
            j = fjmp(comando, j);
        } else if(strcasecmp(straux, "LOAD") == 0){ //Chamando funcao para lOAD
            fload(comando, j, r, memory);
        } else if(strcasecmp(straux, "STORE") == 0){ //Chamando funcao para STORE
            fstore(comando, j, r, memory);
        } else if(strcasecmp(straux, "PRINT") == 0){ //Chamando funcao para PRINT
            fprint(comando, j, r);
        } else if(strcasecmp(straux, "EXIT") == 0){ //Finalizando a execucao
            break;
        }
        j++;
    }
}