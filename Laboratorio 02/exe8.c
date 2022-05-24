#include <stdio.h>

struct ponto{
    int x;
    int y;
};

typedef struct ponto Ponto;

int calc_area(Ponto p1, Ponto p2);

int main()
{
    int area;
    Ponto p1, p2;

    //lê os valores das coordenadas
    printf("Entre com a coordenada x do ponto 1: ");
    scanf("%d", &p1.x);
    printf("Entre com a coordenada y do ponto 1: ");
    scanf("%d", &p1.y);
    printf("Entre com a coordenada x do ponto 2: ");
    scanf("%d", &p2.x);
    printf("Entre com a coordenada y do ponto 2: ");
    scanf("%d", &p2.y);

    area = calc_area(p1, p2);

    printf("\nA area do retangulo definido por (%d, %d) e (%d, %d) eh %d", p1.x, p1.y, p2.x, p2.y, area);

    return 0;
}

int calc_area(Ponto p1, Ponto p2)
{
    int area;
    area = (( p2.x - p1.x ) * ( p2.y  - p1.y ));
}