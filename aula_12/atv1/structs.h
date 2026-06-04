#ifndef STRUCTS_H
#define STRUCTS_H

struct Elemento
{
    int num;
    struct Elemento *prox;
};
typedef struct Elemento Elemento;

struct Pilha
{
    struct Elemento *topo;
};
typedef struct Pilha Pilha;

Pilha *cria_pilha();

void insere_elemento(Pilha *pi);
void consulta_pilha(Pilha *pi);
void remove_elemento_pilha(Pilha *pi);
void esvazia_pilha(Pilha *pi);

#endif