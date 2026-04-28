#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

No *inicio = NULL;

void inserirNoInicio(int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = inicio;
    inicio = novo;
}

void removerPrimeiro() {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    No *temp = inicio;
    inicio = inicio->prox;
    printf("Elemento %d removido.\n", temp->valor);
    free(temp);
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
        inserirNoInicio(valor);
    }

    exibirLista();
    removerPrimeiro();
    exibirLista();

    return 0;
}