#include <stdio.h>
#include "fila.h"
#include "cliente.h"

int main(){

Fila fila;
int op;
int id;
int tempo;

inicializar(&fila);

do{
    printf("\n---- MENU ----");
    printf("\n[1] - Inserir cliente");
    printf("\n[2] - Atender cliente");
    printf("\n[3] - Exibir file");
    printf("\n[4] - Calcular tempo de espera");
    printf("\n[5] - Sair");
    scanf("%d ", &op);

    switch (op){
        case 1:
            printf("\nQual o ID do usuário: ");
            scanf("%d ", &id);
            printf("\nQual o tempo: ");
            scanf("%d ", &tempo);
            inserirCliente(&fila, id, tempo);
        break;
        case 2:
            atenderCliente(&fila);
        break;
        case 3:
            exibirFila(&fila);
        break;
        case 4: 
            printf("\nTempo de espera: %d min", calcularTempoEspera(&fila));
        break;
    }
    } while(op!=5);
}