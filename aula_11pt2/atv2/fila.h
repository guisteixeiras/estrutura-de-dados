#ifndef FILA_H
#define FILA_H

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct Fila {
    No *primeiro;
    No *ultimo;
} Fila;

Fila* criarFila();

int filaVazia(Fila *f);
void enqueue(Fila *f, int valor);
void enqueueOrdenado(Fila *f, int valor);
void imprimirFila(Fila *f);
void inverterFila(Fila *f);
Fila* copiarFila(Fila *f);
Fila* concatenarFilas(Fila *f1, Fila *f2);

#endif