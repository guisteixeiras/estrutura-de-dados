#ifndef PILHA_H
#define PILHA_H



typedef struct No {
    char tarefa[100];
    struct No *proximo;
} No;

typedef struct Pilha {
    struct No *topo;
} Pilha;

#endif




