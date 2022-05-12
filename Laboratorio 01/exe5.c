// declaração de bibliotecas
#include <stdio.h>

int main()
{
    int num;
    int i, j, c=0;

    printf("<<Triangulo de Floyd>>\n");


    // leitura do numero de linhas
    printf("Digite um numero: ");
    scanf("%d", &num);

    // loop para gerar as colunas e linhas formando um triangulo
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            c++;
            printf("%d ", c);

        }

        printf("\n");
    }

    return 0;
}