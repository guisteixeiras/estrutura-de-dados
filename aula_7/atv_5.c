/*Atividade 5 – Maior Elemento da Matriz
Implemente um programa em que leia uma e determine o, 
indicando sua posição (linha e coluna).*/

int matriz[3][3] = {
    {1,2,3},
    {1,6,9},
    {2,5,6}
};

int main () {

int maior = matriz[0][0];
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    printf("Maior numero da matriz:  %d", maior);
}