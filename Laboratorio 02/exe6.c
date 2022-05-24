#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int n, i, par=0, impar=0;

    printf("Quantos inteiros serao lidos: ");
    scanf("%d",&n);

    printf("\n");

    // alocando a memória com malloc
    vet = (int *) malloc(n*sizeof(int));

    //lê os valores do vetor
    for (i = 0; i < n; i++)
    {
        printf("%d inteiro: ",i+1);
        scanf("%d", &vet[i]);
    }

    printf("\n");

    //mostra na tela o vetor
    for (i = 0; i < n; i++)
    {
        if(vet[i]%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("Sao pares: %d dos %d inteiros lidos.\n", par, n);

    printf("Sao impares: %d dos %d inteiros lidos.\n", impar, n);

    //liberando a memória
    free(vet);

    return 0;
}
