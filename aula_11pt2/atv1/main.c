#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main () {

    int op;
    int valor; 

    Fila *f = criarFila();

    do{

    printf("\n----- MENU -----");
    printf("\n[1] - INSERIR ELEMENTO");
    printf("\n[2] - REMOVER ELEMENTO");
    printf("\n[3] - EXIBIR FILA");
    printf("\n[4] - CONTAR ELEMENTOS");
    printf("\n[5] - CONSULTAR PRIMEIRO");
    printf("\n[6] - SAIR");
    scanf("%d", &op);

    switch (op){
        case 1:
        printf("Qual o valor: ");
            scanf("%d", &valor);
        enqueue(f, valor);
        break;
        
        case 2:
        dequeue(f);
        break;
        
        case 3:
        exibirFila(f);
        break;
        
        case 4:
        printf("%d", contarElementos(f));
        break;
        
        case 5:
        printf("Primeiro: %d", consultarPrimeiro(f));
        break;
        
        case 6:
        printf("Programa encerrado.\n");
        break;
    }
}while(op!=6);
}