#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Quantos numeros? ");
    scanf("%d", &N);

    int *vetor = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int soma = 0;
    for (int i = 0; i < N; i++) {
        soma += vetor[i];
    }

    float media = (float) soma / N;

    printf("\nSoma: %d\n", soma);
    printf("Media: %.2f\n", media);

    free(vetor);
    return 0;
}