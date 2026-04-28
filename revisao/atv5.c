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

void buscarElemento(int valor) {
    No *atual = inicio;
    while (atual != NULL) {
        if (atual->valor == valor) {
            printf("Elemento %d encontrado na lista!\n", valor);
            return;
        }
        atual = atual->prox;
    }
    printf("Elemento %d NAO esta na lista.\n", valor);
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

int main() {
    int valor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &valor);
        inserirNoFinal(valor);
    }

    exibirLista();

    printf("\nDigite um numero para buscar: ");
    scanf("%d", &valor);
    buscarElemento(valor);

    return 0;
}