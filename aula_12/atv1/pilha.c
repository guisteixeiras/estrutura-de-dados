#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

Elemento *aux;

Pilha *cria_pilha()
{
    Pilha *pi = (Pilha *)malloc(sizeof(Pilha));
    if (pi != NULL)
    {
        pi->topo = NULL;
    }
    return pi;
}

void insere_elemento(Pilha *pi)
{
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    printf("\nDigite o numero a ser inserido na pilha: ");
    scanf("%d", &novo->num);
    novo->prox = pi->topo;
    pi->topo = novo;
    printf("\nNumero inserido na pilha!");
}

void consulta_pilha(Pilha *pi)
{
    if (pi->topo == NULL)
    {
        printf("\nPilha Vazia!!");
    }
    else
    {
        aux = pi->topo;
        do
        {
            printf("\n %d ", aux->num);
            aux = aux->prox;
        } while (aux != NULL);
    }
}

void remove_elemento_pilha(Pilha *pi)
{
    if (pi->topo == NULL)
    {
        printf("\nPilha Vazia!!");
    }
    else
    {
        aux = pi->topo;
        printf("\n%d removido!", pi->topo->num);
        pi->topo = pi->topo->prox;
        free(aux);
    }
}

void esvazia_pilha(Pilha *pi)
{
    if (pi->topo == NULL)
    {
        printf("\nPilha Vazia!!");
    }
    else
    {
        aux = pi->topo;
        do
        {
            pi->topo = pi->topo->prox;
            free(aux);
            aux = pi->topo;
        } while (aux != NULL);
        printf("\nPilha Esvaziada!!");
    }
}