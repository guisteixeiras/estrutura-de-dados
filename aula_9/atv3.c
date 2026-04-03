#include <stdio.h>
#include <stdlib.h>

/*3-Matriz Dinâmica com Ponteiro de Ponteiro
Crie um programa em C que leia dois inteiros L e C, representando o número de linhas e colunas.
Utilizando ponteiro de ponteiro (int **), aloque dinamicamente uma matriz L × C.

O programa deve:
Ler os valores da matriz
Calcular a soma de cada linha
Identificar o maior elemento da matriz
Liberar toda a memória alocada corretamente
*/

//** cria um vetor de ponteiros e cada posição desse vetor aponta para uma linha da matriz

int main () {

    int tamL, tamC;

    printf("Valor de L: ");
    scanf("%d", &tamL);

    printf("Valor de C: ");
    scanf("%d", &tamC);

    int **matriz = (int **)malloc(tamL * sizeof(int *)); //vetor de ponteiros (linhas)
    
    for (int i = 0; i < tamL; i++){
        matriz[i] = malloc(tamC * sizeof(int));

        
    }

    for(int i = 0; i < tamL; i++){
        for(int j = 0; j < tamC; j++){
            printf("Digite o valor da posição [%d][%d] ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < tamL; i++){
        int soma = 0;

        for(int j = 0; j < tamC; j++){
            soma += matriz[i][j];
        }
    printf("Soma da linha %d = %d\n", i, soma);
    }

}
