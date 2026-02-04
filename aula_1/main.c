#include <stdio.h>
#include "professor.h"
#include "produto.h"
#include "livro.h"
#include "cliente.h"
#include "funcionario.h"
#include "carro.h"
#include "conta.h"
#include "endereco.h"
#include "filme.h"
#include "aluno.h"

void RegistrarProfessor(){
        
    Professor Professor1;

    printf("ID do professor: ");
    scanf("%d", &Professor1.id);
    getchar();

    printf("Nome do professor: ");
    fgets(Professor1.nome, 50, stdin);

    printf("Salário do professor: ");
    scanf("%f", &Professor1.salario);

    printf("ID: %d\n", Professor1.id);
    printf("Nome: %s", Professor1.nome);
    printf("Salário: %.2f\n", Professor1.salario);
}

void RegistrarProduto (){
     
    Produto Produto1;

    printf("Código do Porduto: ");
    scanf("%d", &Produto1.codigo);
    getchar();

    printf("Nome do produto ");
    fgets(Produto1.nome, 30, stdin);

    printf("Valor do produto: ");
    scanf("%f", &Produto1.preco);

    printf("Código: %d\n",Produto1.codigo);
    printf("Nome: %s", Produto1.nome);
    printf("Valor: %.2f\n", Produto1.preco);
}

void RegistrarLivro(){

    Livro Livro1;

    printf("ISBN: ");
    scanf("%d", &Livro1.isbn);
    getchar();

    printf("Nome do livro ");
    fgets(Livro1.nome, 30, stdin);

    printf("Autor do Livro: ");
     fgets(Livro1.autor, 30, stdin);

    printf("ISBN: %d\n",Livro1.isbn);
    printf("Nome: %s", Livro1.nome);
    printf("Autor: %s\n", Livro1.autor);
}

void RegistrarCliente(){

    Cliente Cliente1;
    
    printf("ID do cliente: ");
    scanf("%d", &Cliente1.id);
    getchar();

    printf("Nome: ");
    fgets(Cliente1.nome, 30, stdin);

    printf("Telefone: ");
    scanf("%d", &Cliente1.telefone);

    printf("ID: %d\n", Cliente1.id);
    printf("Nome: %s", Cliente1.nome);
    printf("Telefone: %d\n", Cliente1.telefone);
}

void RegistrarFuncionario(){

    Funcionario Funcionario1;
    
    printf("Matrícula: ");
    scanf("%d", &Funcionario1.matricula);
    getchar();

    printf("Nome: ");
    fgets(Funcionario1.nome, 30, stdin);

    printf("Salário: ");
    scanf("%f", &Funcionario1.salario);

    printf("Matrícula: %d\n", Funcionario1.matricula);
    printf("Nome: %s", Funcionario1.nome);
    printf("Salário: %.2f\n", Funcionario1.salario);
}

void RegistrarCarro(){

    Carro Carro1;

    printf("Placa:\n: ");
    fgets(Carro1.placa, 20, stdin);

    printf("Modelo: ");
    fgets(Carro1.modelo, 30, stdin);

    printf("Ano: ");
    scanf("%d",&Carro1.ano);

    printf("Placa: %s\n", Carro1.placa);
    printf("Modelo: %s", Carro1.modelo);
    printf("Ano: %d\n", Carro1.ano);

}

void RegistrarConta(){

    Conta Conta1;

    printf("Número da conta: ");
    scanf("%d", &Conta1.numero);
    getchar();

    printf("Nome do Titular: ");
    fgets(Conta1.titular, 30, stdin);

    printf("Saldo da conta: ");
    scanf("%f", &Conta1.saldo);

    printf("Número de conta: %d\n", Conta1.numero);
    printf("Titular: %s", Conta1.titular);
    printf("Saldo: %.2f\n", Conta1.saldo);

}

void RegistrarEndereco(){

    Endereco Endereco1;

    printf("Nome da rua: "); 
    fgets(Endereco1.rua, 30, stdin); 
  
    printf("Número: "); 
    scanf("%d", &Endereco1.numero);
    getchar();
  
    printf("Cidade: "); 
    fgets(Endereco1.cidade, 20, stdin);

    printf("Nome da rua: %s\n", Endereco1.rua);
    printf("Número: %d", Endereco1.numero);
    printf("Cidade: %s\n", Endereco1.cidade);

}

void RegistrarFilme(){ 

    Filme Filme1;

    printf("Título: ");
    fgets(Filme1.titulo, 30, stdin);

    printf("Gênero: ");
    fgets(Filme1.genero, 10, stdin);

    printf("Duração: ");
    scanf("%d", &Filme1.duracao);
    getchar();

    printf("Título: %s\n",Filme1.titulo);
    printf("Gênero: %s", Filme1.genero);
    printf("Duração: %d\n", Filme1.duracao);

}

void RegistrarAluno(){

    Aluno Aluno1;
    
    printf("ID do aluno: ");
    scanf("%d", &Aluno1.id);
    getchar();

    printf("Nome do Aluno: ");
    fgets(Aluno1.nome, 50, stdin);

    printf("Nota 1: ");
    scanf("%f", &Aluno1.nota1);

    printf("Nota 2: ");
    scanf("%f", &Aluno1.nota2);

    float media;

    media = (Aluno1.nota1+Aluno1.nota2)/2;

    printf("ID do aluno: %d\n", Aluno1.id);
    printf("Nome: %s\n", Aluno1.nome);
    printf("Nota 1: %.2f\n", Aluno1.nota1);
    printf("Nota 2: %.2f", Aluno1.nota2);
    printf("Média das notas: %.2f\n", media);
}

int main() {

    int op;

    do {
        printf("\n==== Cadastro ====\n");
        printf("[1] PROFESSOR\n");
        printf("[2] PRODUTO\n");
        printf("[3] LIVRO\n");
        printf("[4] CLIENTE\n");
        printf("[5] FUNCIONÁRIO\n");
        printf("[6] CARRO\n");
        printf("[7] CONTA BANCÁRIA\n");
        printf("[8] ENDEREÇO\n");
        printf("[9] FILME\n");
        printf("[10] ALUNO\n");
        printf("[0] SAIR\n");

        printf("O que deseja cadastrar? ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                RegistrarProfessor();
                break;
            case 2:
                RegistrarProduto();
                break;
            case 3:
                RegistrarLivro();
                break;
            case 4:
                RegistrarCliente();
                break;
            case 5:
                RegistrarFuncionario();
                break;
            case 6:
                RegistrarCarro();
                break;
            case 7:
                RegistrarConta();
                break;
            case 8:
                RegistrarEndereco();
                break;
            case 9:
                RegistrarFilme();
                break;
            case 10:
                RegistrarAluno();
                break;
            case 0:
                printf("Finalizado");
                break;
            default:
                printf("Opção inválida");
        }

    } while (op != 0);

    return 0;
}


