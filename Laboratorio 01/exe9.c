// declaração das bibliotecas
#include <stdio.h>

int main()
{
    //declaração das variaveis
    char str[50];
    int i;

    printf("<<Vetor de char>>\n");
    
    //leitura do nome
    printf("Digite um nome: ");
    scanf("%s", str);

    //faz a conversão de minuscula para maiuscula
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] -= 32;
    }
    
    //mostra o resultado
    printf("O nome digitado eh: %s", str);

    return 0; //fim do programa
}