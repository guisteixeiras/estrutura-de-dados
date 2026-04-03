/*Atividade 2 – Soma dos Elementos da Matriz
Implemente um programa em que leia uma e calcule a .*/
int soma;
int matriz[3][3] = {
    {1,2,3},
    {1,6,9},
    {2,5,6}
};

int main () {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    printf("%d", soma);
}