#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

No *inicio = NULL;

void inserirNoFinal(int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (inicio == NULL) {
        inicio = novo;
        return;
    }

    No *atual = inicio;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void exibirLista() {
    No *atual = inicio;
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

int contarElementos() {
    int cont = 0;
    No *atual = inicio;
    while (atual != NULL) {
        cont++;
        atual = atual->prox;
    }
    return cont;
}

int main() {
    int valor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &valor);
        inserirNoFinal(valor);
    }

    exibirLista();
    printf("Quantidade de elementos: %d\n", contarElementos());

    return 0;
}