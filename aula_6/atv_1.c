/* Atividade 1 – Leitura e Impressão de Matriz
Desenvolva um programa em que leia uma e, em seguida, imprima todos os seus elementos na tela, 
organizados em formato de matriz. */

int matriz_identidade[3][3] = {
    {1,2,3},
    {1,6,9},
    {2,5,6}
};

int main () {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz_identidade[i][j]);
        }
        printf("\n");
    }
}




