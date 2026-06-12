#ifndef PILHA_H
#define PILHA_H

    typedef struct No {
        char tarefa[100];
        struct No *proximo;

    } No;

void empilhar(No **topo, char *tarefa);
void desempilhar(No **topo);

#endif




