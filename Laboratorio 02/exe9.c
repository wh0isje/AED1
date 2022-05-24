#include <stdio.h>

struct ponto{
    int x;
    int y;
};

typedef struct ponto Ponto;

void mult(Ponto *p, int cons);

int main()
{
    int cons, new;
    Ponto p;

    //lê os valores das coordenadas
    printf("Digite o ponto: ");
    scanf("%d,%d", &p.x, &p.y);

    printf("Digite a constante: ");
    scanf("%d", &cons);

    mult(&p,cons);

    return 0;
}

void mult(Ponto *p, int cons)
{
    p = (Ponto *) malloc(cons * sizeof(Ponto));

    (*p).x = p->x*cons;
    (*p).y = p->y*cons;

    printf("Novo Ponto: (%d,%d)\n",p->x, p->y);

    free(p);
}
