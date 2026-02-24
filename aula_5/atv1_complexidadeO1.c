//guilherme teixeira soares souza - 5º período

#include <stdio.h>  

int main () {

int valor;
int indice;

    int tamVetor; //solicita o tamanho do vetor
    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &tamVetor);

    if (tamVetor <= 0) { //faz a validação se o tamanho é positivo
        printf("Tamanho invalido!");
        return 1; //retorna 1 indicando "erro" e encerra 
    } 

    int numeros[tamVetor]; // cria o vetor se o if de cima n for true

        for (int i = 0; i < tamVetor; i++){ //percorre o vetor preechendo cada um dos índices
            printf("Informe o Valor da posicao [%d]: ", i);
            scanf(" %d", &valor);
            numeros[i] = (valor);
        }

        printf("Informe o indice ");
        scanf(" %d", &indice);

            if (indice >= 0 && indice < tamVetor){ //faz a validacao do indice para saber se está dentro do tamanho do vetor
                printf("O valor na posicao %d e %d", indice, numeros[indice]); //faz a busca O1 e acessa direto o valor do índice indicado
            } else {
                printf("Indice invalido! Digite um valor entre 0 e %d", tamVetor);
}

return 0; // retorna que o programa rodou ok

}