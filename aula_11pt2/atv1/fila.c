#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

Fila* criarFila(){

    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->primeiro = NULL;
    f->ultimo = NULL;
    return f;
}

int filaVazia(Fila *f) {
    return f->primeiro == NULL;
}

void enqueue(Fila *f, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    if (filaVazia(f)){
        f->primeiro = novo;
    } else {
        f->ultimo->proximo = novo;
    }
    f->ultimo = novo;
}

void dequeue(Fila *f) {
    if (filaVazia(f)){
        printf("Fila vazia!");
        return;
    }
    No *temp = f->primeiro;
    f->primeiro = temp->proximo;
    free(temp);
    if (f->primeiro == NULL) {
        f->ultimo = NULL;
    }
}

void exibirFila (Fila *f) {
    No *atual = f->primeiro;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }
}

int contarElementos (Fila *f) {
    No *atual = f->primeiro;
    int cont = 0;
    while (atual != NULL) {
        cont++;
        atual = atual->proximo;
    }
    return cont;
}

int consultarPrimeiro(Fila *f) {
    if(filaVazia(f)){
        printf("Fila Vazia");
        return -1;
    }
    return f->primeiro->valor;
}