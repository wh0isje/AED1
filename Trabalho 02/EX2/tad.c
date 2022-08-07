#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tad.h"

struct no
{
    int info;
    struct no *prox;
};

Pilha cria_pilha()
{
    return NULL;
}

int pilha_vazia(Pilha p)
{
    if (p == NULL)
        return 1;
    else
        return 0;
}

int empilha(Pilha *p, int elem)
{
    Pilha N = (Pilha)malloc(sizeof(struct no));
    if (N == NULL)
        return 0;

    N->info = elem;
    N->prox = *p;
    *p = N;
    return 1;
}

int desempilha(Pilha *p, int *elem)
{
    if (pilha_vazia(*p) == 1)
        return 0;

    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);
    return 1;
}

int le_topo(Pilha *p, int *elem)
{
    if (pilha_vazia(*p) == 1)
        return 0;

    Pilha aux = *p;
    *elem = aux->info;
    return 1;
}

void imprime(Pilha p)
{
    if(pilha_vazia(p))
    {
        printf("\nPilha vazia!\n");
    }

    printf("Pilha : {");
    while(p != NULL)
    {
        printf((p->prox != NULL) ? "%d, " : "%d}", p->info);
        p = p->prox;
    }
}

int elimina(Pilha p, int elem)
{
    Pilha aux;
    int item;

    aux = cria_pilha();

    if (pilha_vazia(p))
        return 0;

    else
    {
        do
        {
            desempilha(p, &item);
            empilha(&aux, item);
        }while(item != elem || pilha_vazia(p));

        if (pilha_vazia(p))
        {
            while (!pilha_vazia(aux))
            {
                desempilha(&aux,&item);
                empilha(p,item);
            }
            return 0;
        }
        else
        {
            desempilha(&aux, &item);

            while(!pilha_vazia(aux))
            {
                desempilha(&aux,&item);
                empilha(p, item);
            }
            return 1;
        }
    }
}

int eh_palindromo(char *vet)
{
    int len, mid, elem;
    int i;

    Pilha p;
    p = cria_pilha();
    len = strlen(vet);
    mid = len / 2;

    for(i=0;i<mid; i++)
    {
        empilha(&p, vet[i]);
    }
    if(len%2 == 0)
        i = i;
    else
        i++;

    while(vet[i]!='\0')
    {
        desempilha(&p, &elem);
        if(elem != vet[i])
        {
            return 0;
        }
        i++;
    }

    return 1;
}

void pares_impares(Pilha p)
{
    Pilha par = cria_pilha();
    Pilha impar = cria_pilha();

    while(p!=NULL)
    {
        if (p->info % 2 == 0)
            empilha(&par, p->info);
        else
            empilha(&impar, p->info);

        p=p->prox;
    }

    printf("Pares:\n");
    imprime(par);

    printf("\nImpares:\n");
    imprime(impar);
}