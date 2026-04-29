#include <stdio.h>
#include <stdlib.h>

/*4- Função com Ponteiro para Ponteiro
Implemente um programa em C que contenha uma função responsável por alocar dinamicamente um vetor de inteiros.
A função deve:

Receber um ponteiro para ponteiro;
Receber o tamanho do vetor;
Realizar a alocação usando calloc;
Chamar a função de alocação;
Preencher o vetor;
Exibir os valores;
realloc o tamanho do vetor o preencha novamente;
Liberar a memória corretamente

A função realloc em C, presente na <stdlib.h>, redimensiona blocos de memória alocados dinamicamente (malloc/calloc). Ela altera o tamanho de um ponteiro existente para um novo, copiando o conteúdo original, e retorna um novo ponteiro (ou NULL se falhar). Se a realocação falhar, a memória original não é liberada.

void *realloc(void *ptr, size_t new_size);*/


void alocarVetor(int **vet, int tamanho) { //função para alocar o vetor
    *vet = (int *)calloc(tamanho, sizeof(int));
}

void preencherVetor(int *vet, int tamanho) { // função para preencher o vetor
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao [%d]: ", i);
        scanf("%d", &vet[i]);
    }
}


void exibirVetor(int *vet, int tamanho) { // função para exibr o vetor
    printf("\nValores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }
}

int main() {
    int *vetor = NULL; //ponteiro que vai apontar para o vetor
    int tamanho;
    int novoTamanho;


    printf("Digite o tamanho inicial do vetor: ");
    scanf("%d", &tamanho);

    // Chama a função de alocação
    alocarVetor(&vetor, tamanho);

    // Preenche o vetor
    printf("\nPreenchendo o vetor inicial:\n");
    preencherVetor(vetor, tamanho);

    // Exibe os valores
    exibirVetor(vetor, tamanho);

    // Lê o novo tamanho para fazer o realloc
    printf("\nDigite o novo tamanho do vetor: ");
    scanf("%d", &novoTamanho);

    // Realoca o vetor
    int *temp = (int *)realloc(vetor, novoTamanho * sizeof(int));

    // Verifica se a realocação deu certo
    if (temp == NULL) {
        printf("Erro ao realocar memoria.\n");
        free(vetor); // libera o vetor antigo antes de encerrar
        return 1;
    }

    vetor = temp;

    // Se o novo tamanho for maior, as novas posições precisam ser preenchidas
    printf("\nPreenchendo novamente o vetor apos realloc:\n");
    preencherVetor(vetor, novoTamanho);

    // Exibe o vetor após o realloc
    exibirVetor(vetor, novoTamanho);
    
    free(vetor);

    return 0;
}