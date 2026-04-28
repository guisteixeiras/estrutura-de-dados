#include <stdio.h>
#include <stdlib.h>

/*1) Crie um programa que:

Peça ao usuário um número inicial N de elementos
Aloque um vetor dinamicamente com malloc
Depois peça um novo tamanho M
Redimensione o vetor usando realloc
Permita que o usuário insira os novos valores
Exiba todos os elementos ao final
Libere a memória com free
*/

int main (){

    int n, m, *vetor;

    printf("\nInsira o valor N: ");
    scanf("%d", &n);

    vetor = malloc(n * sizeof(int));

    if (vetor == NULL){
        printf("\nFalha ao alocar memória.");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("\nInsira um valor na posição [%d]", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nInsira o valor de M: ");
    scanf("%d", &m);

    vetor = realloc(vetor, m * sizeof(int));

    if (vetor == NULL){
        printf("Erro na realocação de memória.\n");
        return 1;
    }

    for(int i = n; i < m; i++){
        printf("\nInsira novos valores para alocação na posição [%d]", i);
        scanf("%d", &vetor[i]);
    } 

    for(int i = 0; i < m; i++){
        printf("\n[%d]", vetor[i]);
    }

    free (vetor);
    vetor = NULL;

    return 0;
}