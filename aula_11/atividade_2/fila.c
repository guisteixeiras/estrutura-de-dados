#include "cliente.h"
#include "fila.h"
#include "cliente.h"

void inicializar(Fila *f) {
    f->tamanho = 0;
    f->inicio = 0;
    f->fim = 0;
}

int filaVazia(Fila *f) {
    return f->tamanho == 0;
}

int filaCheia(Fila *f){
    return f->tamanho == MAX;
}

void inserirCliente(Fila *f, int id, int tempo) {
    if(filaCheia(f)){ //se o retonor foi 1 é TRUE e tá cheia 
        printf("Fila cheia.");
        return;
    }

    f->clientes[f->fim].id = id;
    f->clientes[f->fim].tempo_atendimento = tempo;
    f->fim = (f->fim + 1) % MAX;
    f->tamanho+= 1;
}

void atenderCliente(Fila *f) {
    if(filaVazia(f)){
        printf("Fila vazia!");
        return;
    }



}

