// declaração das bibliotecas
#include <stdio.h>

typedef struct
{
    char rua[20];
    char num[5];
    char comp[20];
    char bairro[15];
    char cep[10];
    char cidade[10];
    char estado[10];
    char pais[10];
}Endereco;

typedef struct
{
    int dia;
    int mes;
    int ano;
}Data;

struct agenda
{
    char nome[50];
    char email[20];
    Endereco endereco;
    int telefone[12];
    Data nascimento;
    char obs[100];

};


int main()
{
    int op;

    struct agenda agenda[100];

    printf("\t=====Agenda=====\n\n");
    printf("1 - Buscar por nome\n");
    printf("2 - Buscar por mes de aniversario\n");
    printf("3 - Buscar aniversariantes por mes e dia\n");
    printf("4 - Inserir pessoas\n");
    printf("5 - Excluir pessoas\n");
    printf("6 - Imprimir agenda\n");
    printf("7 - Sair\n\n");

    printf("Entre com a operacao: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        /* code */
        break;

    default:
        break;
    }


}
