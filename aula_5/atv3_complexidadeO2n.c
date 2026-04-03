#include <stdio.h>


int fibonacci(int num) { //função

    if (num == 0) {
        return 0; // caso base
    } else if (num == 1) { // caso base
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2); //recirsividade
    }
}

    int main () {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O número não pode ser negativo!");
    } else {
        printf("Resultado: %d", fibonacci(num));
    } 

    return 0;

}