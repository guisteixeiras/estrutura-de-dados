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

#endif