#include "cliente.h"

#ifndef FILA_H
#define FILA_H
#define MAX 100

typedef struct Fila {
    Cliente clientes[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

#endif

