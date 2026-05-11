#include <stdio.h>
#include "fila.h"

int main() {

    Fila *f1 = criarFila();

    enqueueOrdenado(f1, 5);
    enqueueOrdenado(f1, 2);
    enqueueOrdenado(f1, 8);
    enqueueOrdenado(f1, 1);

    printf("Fila com prioridade:\n");
    imprimirFila(f1);

    inverterFila(f1);

    printf("Fila invertida:\n");
    imprimirFila(f1);

    Fila *copia = copiarFila(f1);

    printf("Copia da fila:\n");
    imprimirFila(copia);

    Fila *f2 = criarFila();

    enqueue(f2, 10);
    enqueue(f2, 20);

    printf("Segunda fila:\n");
    imprimirFila(f2);

    Fila *concat = concatenarFilas(f1, f2);

    printf("Concatenacao:\n");
    imprimirFila(concat);

    return 0;
}