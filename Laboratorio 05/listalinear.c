#include <stdio.h>

#define max 20

struct lista
{
    int no[max];
    int fim;
};

Lista cria_lista()
{
    Lista lst;
    lst = (Lista)malloc(sizeof(struct lista));

    if(lst != NULL)
    {
        lst->fim=0; //lista vazia
    }

    return lst;
}

int lista_vazia(Lista lst)
{
    if(lst->fim==0)
    {
        return 1; //Lista vazia
    }
    else
    {
        return 0; //Lista não está vazia
    }
}

int lista_cheia(Lista lst)
{
    if(lst->fim==max)
    {
        return 1; //Lista cheia
    }
    else
    {
        return 0; //Lista não está cheia
    }
}

int insere_elem(Lista lst, int elem)
{
    if(lst==NULL || lista_cheia(lst)==1)
    {
        return 0;//falha
    }

    lst->no[lst->fim] = elem; //insere o elemento na lista
    lst -> fim++; //avança o fim
    return 1;
}

int remove_elem(Lista lst, int elem)
{
    int i, aux = 0;

    if(lst==NULL || lista_vazia(lst)==1)
    {
        return 0; //falha
    }

    while ((aux < lst->fim) && (lst->no[aux] != elem)) // percorre a lista ate achar o elem ou o final da lista
    {
        aux++;
    }    
    
    for(i = aux+1; i < lst->fim; i++)
    {
        lst->no[i-1]=lst->no[i];
    }

    lst->fim--; //decrementar o campo fim
    return 1; //sucesso

}

int obtem_valor_elem(Lista lst, int elem)
{
    int aux;

    if (lista_vazia(lst) == 1 || lst == NULL) 
    {
        return 0; //falha
    }

    for (aux = 0; aux <= lst->fim; aux++) // percorre a lista ate achar o elem ou o final da lista
    {
        if (elem == aux)
        {
            return lst->no[aux]; //retorna o valor
        }
        else
        {
            return 0; //falha
        }
    }
}



