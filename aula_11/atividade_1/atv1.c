#include <stdio.h>
#include "fila.h"
#include "elemento.h"

// Atividade 1- Refatore o código em anexo aplicando uma organização adequada de software em linguagem C,
// separando a definição das estruturas de dados e dos protótipos de funções em um arquivo de cabeçalho

/*ponteiro auxiliar*/

Fila *cria_fila()
{
    /*alocação do ponteiro li para controlar a lista*/
    Fila *fi = (Fila *)malloc(sizeof(Fila));
    if (fi != NULL)
    {
        /*a fila inicia-se vazia, portanto inicio e fim são iguais a NULL*/
        fi->fim = NULL;
        fi->inicio = NULL;
    }
    return fi;
}

int main()
{
    Fila *fi = cria_fila();

    insere_elemento(fi);
    insere_elemento(fi);
    insere_elemento(fi);
    remove_elemento_fila(fi);
    consulta_fila(fi);
    return 0;
}