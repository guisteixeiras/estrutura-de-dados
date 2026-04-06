#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50

/* 
Atividade 1 – Lista Simples (Lista de Compras)

Desenvolva um programa em linguagem C que implemente 
uma lista simples para gerenciar uma lista de compras.

Cada item da lista deve conter:
- Nome do produto
- Quantidade
- Preço unitário

O programa deve permitir:
- Inserir um novo produto na lista
- Remover um produto pelo nome
- Atualizar a quantidade de um produto existente
- Calcular e exibir o valor total da compra
- Listar todos os produtos cadastrados
*/

typedef struct Produto {
    char nome[TAM_NOME];
    int quantidade;
    float preco;
    struct Produto *prox;
} Produto;

void inserirProduto(Produto **lista) {
    Produto *novo = (Produto *) malloc(sizeof(Produto));

    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }

    printf("\nNome do produto: ");
    scanf(" %[^\n]", novo->nome);

    printf("Quantidade: ");
    scanf("%d", &novo->quantidade);

    printf("Preco unitario: ");
    scanf("%f", &novo->preco);

    novo->prox = NULL;

    if (*lista == NULL) {
        *lista = novo;
    } else {
        Produto *aux = *lista;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }

    printf("Produto inserido com sucesso.\n");
}

void listarProdutos(Produto *lista) {
    if (lista == NULL) {
        printf("\nLista vazia.\n");
        return;
    }

    Produto *aux = lista;

    printf("\n--- LISTA DE PRODUTOS ---\n");
    while (aux != NULL) {
        printf("Nome: %s\n", aux->nome);
        printf("Quantidade: %d\n", aux->quantidade);
        printf("Preco unitario: R$ %.2f\n", aux->preco);
        printf("Subtotal: R$ %.2f\n", aux->quantidade * aux->preco);
        printf("-------------------------\n");

        aux = aux->prox;
    }
}

void removerProduto(Produto **lista) {
    if (*lista == NULL) {
        printf("\nLista vazia. Nada para remover.\n");
        return;
    }

    char nomeBusca[TAM_NOME];
    printf("\nDigite o nome do produto que deseja remover: ");
    scanf(" %[^\n]", nomeBusca);

    Produto *atual = *lista;
    Produto *anterior = NULL;

    while (atual != NULL && strcmp(atual->nome, nomeBusca) != 0) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Produto nao encontrado.\n");
        return;
    }

    if (anterior == NULL) {
        *lista = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Produto removido com sucesso.\n");
}

void atualizarQuantidade(Produto *lista) {
    if (lista == NULL) {
        printf("\nLista vazia.\n");
        return;
    }

    char nomeBusca[TAM_NOME];
    int novaQuantidade;

    printf("\nDigite o nome do produto que deseja atualizar: ");
    scanf(" %[^\n]", nomeBusca);

    Produto *aux = lista;

    while (aux != NULL) {
        if (strcmp(aux->nome, nomeBusca) == 0) {
            printf("Digite a nova quantidade: ");
            scanf("%d", &novaQuantidade);

            aux->quantidade = novaQuantidade;
            printf("Quantidade atualizada com sucesso.\n");
            return;
        }
        aux = aux->prox;
    }

    printf("Produto nao encontrado.\n");
}

void calcularTotal(Produto *lista) {
    if (lista == NULL) {
        printf("\nLista vazia.\n");
        return;
    }

    float total = 0.0;
    Produto *aux = lista;

    while (aux != NULL) {
        total += aux->quantidade * aux->preco;
        aux = aux->prox;
    }

    printf("\nValor total da compra: R$ %.2f\n", total);
}

void liberarLista(Produto **lista) {
    Produto *aux;

    while (*lista != NULL) {
        aux = *lista;
        *lista = (*lista)->prox;
        free(aux);
    }
}

int main() {
    Produto *lista = NULL;
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Inserir produto\n");
        printf("2 - Remover produto\n");
        printf("3 - Atualizar quantidade\n");
        printf("4 - Calcular valor total\n");
        printf("5 - Listar produtos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirProduto(&lista);
                break;
            case 2:
                removerProduto(&lista);
                break;
            case 3:
                atualizarQuantidade(lista);
                break;
            case 4:
                calcularTotal(lista);
                break;
            case 5:
                listarProdutos(lista);
                break;
            case 0:
                liberarLista(&lista);
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}