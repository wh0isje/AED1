#include <stdio.h>
#include <stdlib.h>

struct ponto
{
   int x;
   int y;

};

int main()
{
    typedef struct ponto Ponto;
    Ponto *p;
    int num, i;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &num);

    //alocando a memória com malloc
    p = malloc(num*sizeof(Ponto));

    //lê os valores das coordenadas
    for (i = 0; i < num; i++)
    {
        printf("Entre com a coordenada x do ponto %d: ", i+1);
        scanf("%d", &p[i].x);
        printf("Entre com a coordenada y do ponto %d: ", i+1);
        scanf("%d", &p[i].y);
    }

    printf("Pontos digitados: ");

    //mostra na tela as coordenadas digitadas
    for (i = 0; i < num; i++)
    {
        printf("(%d,%d); ",p[i].x, p[i].y);

    }

    //liberando a memória
    free(p);

    return 0;
}
