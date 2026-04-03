#include <stdio.h>

/*Uma estação meteorológica registra temperaturas de 7 dias em 3 turnos (manhã, tarde e noite).
Esses dados devem ser armazenados em uma matriz 7 × 3 de números reais.

Desenvolva um programa em C que:
Leia as temperaturas
Calcule a média de temperatura de cada dia
Calcule a média de temperatura de cada turno
Identifique o dia mais quente da semana (maior média diária)
Exiba todas as médias calculadas*/

float registro_metereologico[7][3];
float media_temperatura_diaria[7];
float media_turno[3];

int main () {

    for (int i = 0; i < 7; i++){ // esse for percorre toda a matriz preenchendo cada valor
        for (int j = 0; j < 3; j++){
            printf("Insira um valor para a posicao: [%d][%d]", i, j);
            scanf(" %f", &registro_metereologico[i][j]);
        }
    }
    for (int i = 0; i < 7; i++){ //esse for percorre dia por dia 
        float soma_dia = 0; // varivel para usar em cada dia (reseta no giro do for de cima)

        for (int j = 0; j < 3; j++){ //enquanto esse percorre os 3 três turnos do dia
            soma_dia += registro_metereologico[i][j]; // soma os valores dos turnos daquele dia
        }
        media_temperatura_diaria[i] = soma_dia / 3; //registra media no vetor
    }

    for (int j = 0; j < 3; j++){ // esses 2 fors fazem a mesma coisa que o de cima, só que pra outa coisa
        float soma_turno = 0;

        for (int i = 0; i < 7; i++){
            soma_turno += registro_metereologico[i][j];
        }
        media_turno[j] = soma_turno / 7;
    }

    float dia_mais_quente = media_temperatura_diaria[0]; //defini o primeiro valor como mais alto para para começar a comparar o restantes
    
    for(int i = 1; i < 7; i++){ // esse for percorre o vetor de média de temperatura diária 
        if (media_temperatura_diaria[i] > dia_mais_quente){ //compara todos os valore para encontrar o maior
            dia_mais_quente = media_temperatura_diaria[i]; 
        }
    }
    printf("Medias de temperatura diaria: \n"); //imprimindo todos os fvalores usando o for para "percorrer' os vetores 
    for (int i = 0; i < 7; i++){ 
            printf("%f\n", media_temperatura_diaria[i]);
    }
    printf("Medias de temperatura por turno: \n");
    for (int i = 0; i < 3; i++){
            printf("%f\n", media_turno[i]);
    }
    printf("\nMedia do dia mais quente: %f", dia_mais_quente);
}

//guilherme teixeira soares souza - 5º período 
