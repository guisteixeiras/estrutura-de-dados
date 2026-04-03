#include <stdio.h>

/* Uma empresa possui N quantidade de produtos por cada setor, armazene a quantidade de estoque e produto de cada setor.
Exemplo Almoxarifado possui 50 limpol's, 20 Kiboa, 10 Bom ar. já no setor de informatica há em estoque 50 memorias ram ddr5, 25 processadores core ultra 5.

Essas informações devem ser armazenadas em uma matriz.

Crie um programa em que: 
Leia a matriz de estoque 
Calcule o total (soma das linhas) 
Calcule o considerando todos os setores (soma das colunas)
Identifique o produto e a quantidade de cada setor 
Exiba a matriz e os resultados calculados.
*/

int estoque[2][5]; //matriz 
char nome_do_setor[2][30] = {"Almoxarifado", "Informática"}; //vetor com nome dos setores
char nome_dos_produtos[5][30] = {"Limpol", "Kiboa", "Bom Ar", "Memória RAM DDR5", "Core Ultra 5" }; //vetor com nome dos produtos

int main () {

    for (int i = 0; i < 2; i++) { // acessa o vetor para exibir o nome da categoria
        printf("Setor %s\n", nome_do_setor[i]);

        for (int j = 0; j < 5; j++){ // acessa o vetor para exibir o nome do produto e perguntar a quantidade para o usuário
            printf("Digite a quantidade do produto %s: ", nome_dos_produtos[j]);
            scanf("%d", &estoque[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++){ // percorre as linhas (setor)
        int somaSetor = 0; //a cada giro, zera essa variavel pra somar o total do prox setor

        for (int j = 0; j < 5; j++){ // percorre as colunas (produtos )
            somaSetor += estoque[i][j];
        }
    printf("Total do setor %s: %d\n", nome_do_setor[i], somaSetor);
    }

    for(int j = 0; j < 5; j++){ // percorre as colunas (produtos )
        int somaProduto = 0; //a cada giro, zera essa variavel pra somar o total de cada produto

        for (int i = 0; i < 2; i++){ // percorre as linhas (setor)
            somaProduto += estoque[i][j];
        }
    printf("Total do produto %s: %d\n", nome_dos_produtos[j], somaProduto);
    }

}

// guilherme teixeira soares souza = 5º período