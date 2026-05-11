#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

Fila* criarFila() {

    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->primeiro = NULL;
    f->ultimo = NULL;

    return f;
}

int filaVazia(Fila *f) {
    return f->primeiro == NULL;
}

void enqueueOrdenado(Fila *f, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    if (filaVazia(f)) {
        f->primeiro = novo;
        f->ultimo = novo;
        return;
    }
    if (valor < f->primeiro->valor) {
        novo->proximo = f->primeiro;
        f->primeiro = novo;
        return;
    }

    No *atual = f->primeiro;
    while (atual->proximo != NULL &&
        atual->proximo->valor < valor) {
        atual = atual->proximo;
    }
    novo->proximo = atual->proximo;
    atual->proximo = novo;
    if (novo->proximo == NULL) {
        f->ultimo = novo;
    }
}

void imprimirFila(Fila *f) {
    No *aux = f->primeiro;
    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n");
}

Fila* copiarFila(Fila *f) {
    Fila *copia = criarFila();
    No *aux = f->primeiro;
    while (aux != NULL) {
        enqueueOrdenado(copia, aux->valor);
        aux = aux->proximo;
    }
    return copia;
}

Fila* concatenarFilas(Fila *f1, Fila *f2) {
    Fila *nova = criarFila();
    No *aux = f1->primeiro;
    while (aux != NULL) {
        enqueueOrdenado(nova, aux->valor);
        aux = aux->proximo;
    }
    aux = f2->primeiro;
    while (aux != NULL) {
        enqueueOrdenado(nova, aux->valor);
        aux = aux->proximo;
    }
    return nova;
}

void inverterFila(Fila *f) {
    No *anterior = NULL;
    No *atual = f->primeiro;
    No *proximo = NULL;
    f->ultimo = f->primeiro;
    while (atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    f->primeiro = anterior;
}