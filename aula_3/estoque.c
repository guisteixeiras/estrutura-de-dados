/* Atividade 2 – Controle de Estoque com Arrays Paralelos
Implemente um sistema simples de controle de estoque utilizando arrays paralelos. Utilize três
vetores: codigo (inteiro), nome (string) e quantidade (inteiro). O sistema deve permitir cadastrar
produtos, atualizar a quantidade de um produto pelo código e remover um produto, mantendo os
vetores sincronizados. O programa deve impedir códigos duplicados e quantidades negativas. Ao
final, exiba a lista de produtos cadastrados. */ 


#include <stdio.h>

#define MAX 100

int main () {

    int codigo[MAX];
    int nomes[MAX][50];
    int quantidade[MAX];
    int op;
    int total = 0;

    do {

    printf("\n===== MENU =====\n");
    printf("[1] - Cadastrar Produto\n");
    printf("[2] - Atualizar Quantidade\n");
    printf("[3] - Remover Produto\n");
    printf("[4] - Exibir Produtos Cadastrados\n");
    printf("[0] - Sair");

    switch (op) {

        case 1:
            if (total < MAX){
                printf("Pode cadastrar");
            } else {
                printf("Impossível cadastrar, vetor cheio.");
            }
        case 2:

        case 3:

        case 4:

        case 5:
            printf("Você escolheu sair, encerrando programa...");
            break;
    }

    } while (op != 0);







}