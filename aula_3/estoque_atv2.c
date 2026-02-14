/* Atividade 2 – Controle de Estoque com Arrays Paralelos
Implemente um sistema simples de controle de estoque utilizando arrays paralelos. Utilize três
vetores: codigo (inteiro), nome (string) e quantidade (inteiro). O sistema deve permitir cadastrar
produtos, atualizar a quantidade de um produto pelo código e remover um produto, mantendo os
vetores sincronizados. O programa deve impedir códigos duplicados e quantidades negativas. Ao
final, exiba a lista de produtos cadastrados. */ 

// comentei para me ajudar no entendimento e estudo

#include <stdio.h>
#include <string.h>

#define MAX 100 //define um valor max

int main () {

    int codigo[MAX]; //vetor de codigo dos produtos
    char nomes[MAX][50]; //vetor de nome dos produtos
    int quantidade[MAX]; //vetor de quantidade dos produtos
    int op; //opção para usar no menu
    int total = 0; // serve como um "índice" para os vetores

    do {

    printf("\n===== MENU =====\n"); //menu para interação do user
    printf("[1] - Cadastrar Produto\n");
    printf("[2] - Atualizar Quantidade\n");
    printf("[3] - Remover Produto\n");
    printf("[4] - Exibir Produtos Cadastrados\n");
    printf("[5] - Sair");
    scanf("%d", &op);

    switch (op) { //switch case

        case 1: {
        //variaveis temporarias para fazer a validação antes de jogar pra dentro dos vetores
        int novo_codigo; 
        int nova_quantidade; 
        char novo_nome[50]; 
        int encontrou = 0; //usei para bloquear o cadastro 

            printf("Código do produto: \n");
            scanf("%d", &novo_codigo);

            if (total >= MAX){ //validando se o vetor tem espaço
                printf("Impossível cadastrar, vetor cheio.\n");
                break;
            } 
            // verifica se o novo_codigo bate com algum codigo que já foi cadastrado
            for (int i = 0; i < total; i++){ //percorre o vetor
                if (codigo[i] == novo_codigo) { // verifica se há código igual
                    encontrou = 1; //atribui true se tiver algum repetido
                    break;
                }
            }

            if (encontrou){ //se for true para "encontrou", bloqueia o cadastro 
                printf("Código já cadastrado.\n");
                break; //ebncerra
            }

                printf("Nome do produto: \n"); //solicita nome
                scanf(" %49s", novo_nome);
                printf("Quantidade de produto: \n"); //solicita quantidade 
                scanf(" %d", &nova_quantidade);

            if (nova_quantidade < 0){ //validando se a quantidade é negativa
                printf("A quantidade não pode ser negativa.\n");
                break;
            }

            codigo[total] = novo_codigo; //atribui para o vetor o novo código
            strcpy(nomes[total], novo_nome); //usei strcpy para passar o valor da variavel para o vetor
            quantidade[total] = nova_quantidade; //atribui para o vetor a nova quantidade

            total++; //incrementa o índice e deixa pronto para outro produto

            printf("Produto cadastrado com sucesso.\n");

            break;
        
        }
            
        case 2: {
            //variaveis temporarias 
            int codigo_busca;
            int nova_quantidade;
            int encontrou = -1; // recebe on indice para usarmos como referência

            printf("Digite o código do produto: ");
            scanf("%d", &codigo_busca);

            for (int i = 0; i < total; i++) { //procura o índice do código que precisamos alterar dentro do vetor
                if (codigo[i] == codigo_busca) { 
                    encontrou = i; // guarda o índice
                    break;
                }
            }

            if (encontrou == -1) { //validando se o produto está no vetor
                printf("Produto não encontrado.\n");
                break;
            }

            printf("Nova quantidade: "); //solicita nova quantidade
            scanf("%d", &nova_quantidade);

            if (nova_quantidade < 0) { //validade se a quantidade nçao é negativa
                printf("Quantidade não pode ser negativa.\n");
                break;
            }

            quantidade[encontrou] = nova_quantidade; //passa o novo valor para dentro do vetor de quantidade, usando o índice encontrou

            printf("Quantidade atualizada com sucesso!\n");

            break;
        }

        case 3: {
            //variaveis temporarias
            int codigo_remover;
            int indice = -1;

            printf("Digite o código do produto que desehja remover: ");
            scanf("%d", &codigo_remover);

            for (int i = 0; i < total; i++) { //encontra o índice do produto que desejamos excluir 
                if (codigo[i] == codigo_remover) {
                    indice = i; //atribui a posição do vetor que esta o produto
                    break;
                }
            }

            if (indice == -1) { //valida se o produto foi encontrado
                printf("Produto não encontrado.\n");
                break;
            }

            //deslocamento dos vetores
            for (int i = indice; i < total - 1; i++) { //comeca no indice (ali ficou um "buraco")
                codigo[i] = codigo[i + 1]; // codigo antigo recebe o codigo da frente
                strcpy(nomes[i], nomes[i + 1]); // nome antigo recebe o codigo da frente
                quantidade[i] = quantidade[i + 1]; // quantidade antigo recebe o codigo da frente
            } //quando rodar as outras vezes, os valores vão se deslocando até percorrer todo o vetor

            total--; //retira um do total

            printf("Produto removido com sucesso!\n");

            break;
        }

        case 4: {

            if (total == 0) {
                printf("Nenhum produto cadastrado.\n");
                break;
            }

            printf("\n===== LISTA DE PRODUTOS =====\n");

            for (int i = 0; i < total; i++) { //varre o vetor todo, cada loop ele imprime uma posição
                printf("Código: %d\n", codigo[i]);
                printf("Nome: %s\n", nomes[i]);
                printf("Quantidade: %d\n", quantidade[i]);
                printf("------------------------\n");
            }

            break;
        }

        case 5:
            printf("Você escolheu sair, encerrando programa...\n");
            break;
        
         default:
            printf("Opcao invalida.\n");
        }

    } while (op != 5);

}

//guilherme teixeira soares souza