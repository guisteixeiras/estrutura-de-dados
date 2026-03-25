#include <stdio.h>
#include <stdlib.h>

/*2-  Vetor Inicializado com calloc
Desenvolva um programa em C que solicite ao usuário um valor inteiro N.
Utilizando calloc, aloque um vetor de N inteiros, garantindo que todos os elementos sejam inicializados com zero.

O programa deve:
Exibir o vetor logo após a alocação
Solicitar novos valores para o vetor
Exibir o vetor atualizado
Liberar a memória corretamente*/

int main() {

    int tam;

    printf("Qual o tamanho inteiro do vetor: ");
    scanf("%d", tam);

    int *numeros = (int *)calloc(tam, sizeof(int));

    for (int i = 0; i < tam; i++){
        printf("%d", numeros[i]);
    }

    free(numeros);
    numeros = NULL;
}