#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main () {

int op;
char tarefa[100];

    No *topo = NULL;

    do {
        
    printf("[1] - Adicionar tarefa \n[2] - Remover tarefa \n [3] Sair");
    scanf("%d", &op);

        switch(op){
            case 1:
                printf("Digite a tarefa: ");
                scanf(" %s", tarefa);
                empilhar(&topo, tarefa);
            break;
            case 2:
                desempilhar(&topo);
            break;
            case 3:
                break;
        }
    } while(op != 3);
    
}