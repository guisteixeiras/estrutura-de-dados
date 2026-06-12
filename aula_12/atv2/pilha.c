#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"

void empilhar(No **topo, char *tarefa){

    No *Novo = malloc(sizeof(No));

    strcpy(Novo->tarefa, tarefa);
    Novo->proximo = *topo;
    *topo = Novo;
}

void desempilhar(No **topo){

    if (*topo == NULL){
        printf("Fila vazia.");
    } else {
        No *temp = *topo;
        printf("%s", temp->tarefa);
        *topo = temp->proximo;
        free(temp);
    }
}





