#include <stdio.h>
#include "tad.h"

#define max 20

struct fila
{
    int no[max];
    int ini, fim;
};

Fila cria_fila()
{
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));

    if (f != NULL)
    {
        f->ini = 0;
        f->fim = 0;
    }

    return f;
}

int fila_vazia(Fila f)
{
    if (f->ini == f->fim)
        return 1;
    else
        return 0;
}

int fila_cheia(Fila f)
{
    if (f->ini == (f->fim+1)%max)
        return 1;
    else
        return 0;
}

int insere_fila(Fila f, int elem)
{
    if (fila_cheia(f) == 1)
    {
        return 0;
    }

    f->no[f->fim] = elem;
    f->fim = (f->fim+1)%max;
    return 1;
}

int remove_fila(Fila f, int *elem)
{
    if (fila_vazia(f) == 1)
    {
        return 0;
    }

    *elem = f->no[f->ini];
    f->ini = (f->ini+1)%max;
    return 1;
}

void imprime(Fila f)
{
    if (fila_vazia(f) == 1)
        printf("A fila esta vazia!\n");
    else
    {
        printf("Fila : {");
        int i = (f->ini)%max;
        int j = (f->fim)%max;
        for (i; i < j; i++)
        {
            printf((i != j - 1) ? "%d, " : "%d}", f->no[i]);
        }
    }
}