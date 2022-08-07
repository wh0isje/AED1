#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no{
    int info;
    struct no *prox;
};

Fila cria_fila(){
    return NULL;
}

int fila_vazia(Fila f){
    if(f == NULL)
        return 1;
    else
        return 0;
}

int insere_fim(Fila *f, int elem)
{
    Fila N = (Fila)malloc(sizeof(struct no));
    if(N == NULL){ return 0;}
    N->info = elem;
    if(fila_vazia(*f) == 1){
        N->prox = N;
        *f = N;
    }
    else{
        N->prox = (*f)->prox;
        (*f)->prox = N;
        *f = N;
    }
    return 1;
}

int remove_ini(Fila *f, int *elem)
{
    if(fila_vazia(*f) == 1)
        return 0;
    Fila aux = (*f)->prox;
    *elem = aux->info;

    if(*f == (*f)->prox)
        *f = NULL;
    else
        (*f)->prox = aux->prox;
    free(aux);
    return 1;
}

int le_topo(Fila f, int *elem)
{
    if(fila_vazia(f) == 1)
        return 0;
    Fila aux = f;
    while(aux->prox != f->prox)
        aux = aux->prox;
    *elem = aux->info;
    return 1;
}

void imprime(Fila f)
{
    if(fila_vazia(f) == 1)
        printf("Erro ao imprimir! ");
    Fila primeiro = cria_fila();
    primeiro = f;
    f = f->prox;
    for(f; f != primeiro; f = f->prox)
        printf("%d ", f->info);
    printf("%d ", primeiro->info);    
}