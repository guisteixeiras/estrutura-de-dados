#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criarPilha () {

    Pilha *p = (Pilha*) malloc(sizeof(Pilha)); 
    p->topo = NULL;
    return p;
}

int pilhaVazia (Pilha *p) {
    return p->topo == NULL;
}




