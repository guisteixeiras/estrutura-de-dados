/*Atividade 3 – Compactação e Ordenação de Vetor Desenvolva um programa em C que manipule um array de inteiros.
Leia N valores inteiros e armazene em um vetor. Remova todos os valores repetidos, mantendo apenas a primeira ocorrência. 
Após a remoção, compacte o vetor ajustando corretamente o tamanho. Mostre o vetor antes da remoção, após a compactação.*/

// comentei para me ajudar no entendimento e estudo

#include <stdio.h>

#define MAX 100 //define um valor max

int main() {

    int vetor[MAX]; //vetor que dos numeros
    int total = 0; //controla a quantidade de posicao preebnchida no vetor
    int N; //quantidade de números que o usuasrio deseja inserir

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &N); //recebe a quantidade de valores

    if (N > MAX) { //validação para nao estourar o vetor
        printf("Quantidade excede o limite permitido.\n");
        return 1; //encerra o programa
    }

    for (int i = 0; i < N; i++) { //loop para ler os N valores
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]); //armazena diretamente no vetor
        total++; //incrementa o total a cada número inserido
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < total; i++) {
        printf("%d ", vetor[i]); //imprime todos os elementos 
    }

    for (int i = 0; i < total; i++) { //percorre o veotr
        for (int j = i + 1; j < total; j++) { //compara o elemento atual com os próximos
            if (vetor[i] == vetor[j]) {  //se encontrar valor repetido
                for (int k = j; k < total - 1; k++) { //deslocamento para tras para removber
                    vetor[k] = vetor[k + 1]; //cada posição recebe o valor da frente
                }

                total--; //reduz o tamanho do vetor
                j--; //decrementa j para verificar novamente a nova posição j
            }
        }
    }

    printf("\nVetor apos remover repetidos:\n");
    for (int i = 0; i < total; i++) {
        printf("%d ", vetor[i]); //imprime o vetor já compactado
    }

    return 0; //encerra o programa
}

//guilhernme teixeira soares souza
