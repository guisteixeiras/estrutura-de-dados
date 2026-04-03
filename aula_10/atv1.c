#include <stdio.h>
#include <stdlib.h>

/*Atividade 1 – Lista Simples (Lista de Compras)  Desenvolva um programa em linguagem C que implemente 
uma lista simples para gerenciar uma lista de compras.
Cada item da lista deve conter: Nome do produto Quantidade Preço unitário 
O programa deve permitir:
Inserir um novo produto na lista
Remover um produto pelo nome
Atualizar a quantidade de um produto existente
Calcular e exibir o valor total da compra
Listar todos os produtos cadastrados*/

typedef struct {
    char nome[30];
    int quantidade;
    float preco_unitario;
} Produto;

int main () {

int op;

    /*O programa deve ter operações para:

Inserir um novo produto
Remover um produto pelo nome
Atualizar a quantidade de um produto existente
Calcular o valor total da compra
Listar todos os produtos cadastrados*/

    printf("\n=============== MENU ===============");
    printf("\n------------------------------------");
    printf("\n[1] - INSERIR NOVO PRODUTO");
    printf("\n[2] - ATUALIZAR QUANTIDADE");
    printf("\n[3] - CALCULAR VALOR TOTAL");
    printf("\n[4] - LISTAR PRODUTOS CADASTRADOS");
    printf("\n[5] - REMOVER PRODUTO PELO NOME");
    printf("\n DIGITE A OPÇÃO CORRESPONDENTE: ");
    scanf("%d", &op);
    printf("\n------------------------------------");

    switch (op) {

        case 1: 
        
        case 2:

        case 3:

        case 4:
    }

}