/* Atividade 3 – Soma da Diagonal Principal
Crie um programa em que leia uma e calcule a.
*/
int soma_diagonal_principal = 0;
int matriz[3][3] = {
    {1,2,3},
    {1,6,9},
    {2,5,6}
};

int main () {
    for (int i = 0; i < 3; i++){
        soma_diagonal_principal = matriz[i];
        for (int j = 0; j < 3; j++){
        }

        printf("%d", soma_diagonal_principal);
    }
}