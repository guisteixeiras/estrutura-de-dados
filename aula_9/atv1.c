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
    float *notas; //ponteiro que vai apontar para o vetor
    printf("Qual a quantidade de alunos na turma? \n");
    scanf("%d", &tam);

    notas = malloc(tam * sizeof(float)); //aloca memoria pro vetor

    for(int i = 0; i < tam; i++){ //preenche o vetor
        printf("Qual a nota do aluno [%d]?", i);
        scanf("%f", &notas[i]);
    }
    
    float somaNota = 0;   
    float media = 0;

    for(int i = 0; i < tam; i++){
        somaNota += notas[i]; //soma todas as notas
    }

    media = somaNota / tam; //calcula media das notas
    //assume que a menor e a maior sao as primeiras, dai comparar com o resto
    float menorNota = notas[0]; 
    float maiorNota = notas[0];

    for(int i = 1; i < tam; i++){
        if(notas[i] < menorNota){ //compara para achar a menor
            menorNota = notas[i];
        }
    }
    for(int i = 1; i < tam; i++){
        if(notas[i] > maiorNota){ //compara para achar a maior
            maiorNota = notas[i];
        }
    }

    printf("\nMedia das notas: %.2f", media);
    printf("\nMenor nota: %.2f", menorNota);
    printf("\nMaior nota: %.2f", maiorNota);

    free(notas); //libera a memoria alocada
    notas = NULL; 
}