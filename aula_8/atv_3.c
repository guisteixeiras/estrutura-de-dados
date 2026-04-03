#include <stdio.h>

/*Crie um programa em C que leia uma matriz quadrada N × N de números inteiros, onde N é informado pelo usuário (máx. 10).
O programa deve:

Calcular a soma da diagonal principal
Calcular a soma da diagonal secundária
Contar quantos elementos estão acima da média da matriz
Verificar se a matriz é simétrica
Exibir os resultados obtidos*/

int matriz[10][10];

int main () {

int n;
int totalElementos = 0; 
int total = 0;
int somaDiagonalPrincipal = 0;
int somaDiagonalSecundaria = 0;
int elementosAcimaDaMedia = 0;

printf("\nQual o valor de N (max 10): ");
scanf("%d", &n);

    for (int i = 0; i < n; i++){ // preencher matriz
        for (int j = 0; j < n; j++){
            printf("\nValor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            total += matriz[i][j];

            if (i == j){ // somando diagonal principal
                somaDiagonalPrincipal += matriz[i][j];
            } else if (i + j == n - 1){ // somando diagon secundaria
                somaDiagonalSecundaria += matriz[i][j];
            }
        }
    }
    //calculando media
    totalElementos = (n * n); 
    int mediaDaMatriz = total / totalElementos;

    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){
            if(matriz[i][j] > mediaDaMatriz){ //verificando quais passam da media
                elementosAcimaDaMedia++;
            }
        }
    }

    int simetrica = 1; //começa afirmando que é simétrica

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] == matriz[j][i]){ //compara para ver se é simetrica 
                simetrica = 0;
            }
        }
    }
    //resulttados 
    printf("\nSoma da diagonal principal: %d", somaDiagonalPrincipal);
    printf("\nSoma da diagonal secundaria: %d", somaDiagonalSecundaria);
    printf("\nMedia da matriz: %d", mediaDaMatriz);
    printf("\nItens acima da media: %d", elementosAcimaDaMedia);
    
    if(simetrica == 1){
        printf("\nSimetrica: Sim");
    } else {
        printf("\nSimetrica: Nao");
    }

    return 0;
}