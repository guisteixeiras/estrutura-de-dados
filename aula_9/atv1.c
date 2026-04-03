#include <stdio.h>

/*1- Crie um programa em C que solicite ao usuário a quantidade de alunos de uma turma.
Utilizando alocação dinâmica (malloc), aloque um vetor para armazenar as notas dos alunos (valores reais).

O programa deve:
Ler as notas
Calcular e exibir a média da turma
Exibir a maior e a menor nota
Liberar corretamente a memória alocada*/

int main() {

    int tam;
    float *notas;

    printf("Qual a quantidade de alunos na turma? \n");
    scanf("%d", &tam);

    notas = malloc(tam * sizeof(float));

    for(int i = 0; i < tam; i++){
        printf("Qual a nota do aluno [%d]?", i);
        scanf("%f", &notas[i]);
    }
    
    float somaNota = 0;   
    float media = 0;

    for(int i = 0; i < tam; i++){
        somaNota += notas[i];
    }

    media = somaNota / tam;

    float menorNota = notas[0];
    float maiorNota = notas[0];

    for(int i = 1; i < tam; i++){
        if(notas[i] < menorNota){
            menorNota = notas[i];
        }
    }
    for(int i = 1; i < tam; i++){
        if(notas[i] > maiorNota){
            maiorNota = notas[i];
        }
    }

    printf("\nMedia das notas: %.2f", media);
    printf("\nMenor nota: %.2f", menorNota);
    printf("\nMaior nota: %.2f", maiorNota);

    free(notas);
    notas = NULL;
}