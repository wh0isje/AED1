// declaração das bibliotecas
#include <stdio.h>

int main()
{
    //declaração de variaveis
    int i, j, matriz[6][6];
    int aSoma=0, bSoma=0, cSoma=0;

    //gerar a matriz com valores 0
    for(i=0;i<6;i++)
    {
        for (j=0; j < 6; j++)
        {
            matriz[i][j] = 0;
        }

    }

    //imprimi a matriz A
    printf("Matriz A: \n");
    for(i=0;i<6;i++)
    {
        for (j=i; j < 6; j++)
        {
            printf("%d", matriz[i][j]);

            aSoma = aSoma + matriz[i][j];
        }

        printf("\n");
    }

    printf("\nA soma da Matriz A eh: %d\n\n", aSoma);

    //imprimi a matriz B
    printf("Matriz B: \n");
    for(i=0;i<6;i++)
    {
        for (j=6-i-1; j < 6; j++)
        {
            printf("%d", matriz[i][j]);

            bSoma = bSoma + matriz[i][j];
        }

        printf("\n");
    }

    printf("\nA soma da Matriz B eh: %d\n\n", bSoma);

        //imprimi a matriz C
    printf("Matriz C: \n");
    for(i=0;i<6;i++)
    {
        for (j=i+3; j < 6; j++)
        {
            printf("%d", matriz[i][j]);

            cSoma = cSoma + matriz[i][j];
        }

        printf("\n");
    }

    printf("\nA soma da Matriz C eh: %d\n\n", cSoma);

    return 0;
}
