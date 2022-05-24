#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int n, i;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    // alocando a memória com malloc
    vet = (int *) malloc(n*sizeof(int));

    //lê os valores do vetor
    for (i = 0; i < n; i++)
    {
        printf("Informe o valor de vet%d: ",i+1);
        scanf("%d", &vet[i]);
    }

    //mostra na tela o vetor
    printf("\nValores cadastrados no Vetor:\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Valor: %d\n",i+1, vet[i]);
    }

    //liberando a memória
    free(vet);

    return 0;
}
