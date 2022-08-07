#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tad.h"

int main()
{
    Pilha p;
    int elem;
    int op;

    do
    {

        do
        {
            printf(" \n--- PILHA DINAMICA ENCADEADA --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Inicializar pilha\n");
            printf(" 2. Verificar pilha vazia\n");
            printf(" 3. Empilhar elemento\n");
            printf(" 4. Desempilhar elemento\n");
            printf(" 5. Le topo\n");
            printf(" 6. Imprime Pilha\n");
            printf(" 7. Verificar Palindromo\n");
            printf(" 8. Eliminar elemento\n");
            printf(" 9. Verificar Pares e Impares\n");
            printf(" 10. SAIR\n");
            printf(" \nOpcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 10))
            {

                printf("\n\n Opcao Invalida! Tente novamente.");
            }
        } while ((op < 1) || (op > 10));

        switch (op)
        {
        case 1:
            p = cria_pilha();
            if (p == NULL)
                printf("\nPilha inicializada!\n");
            else
                printf("\nErro ao inicilizar pilha!\n");
            break;
        case 2:
            if (pilha_vazia(p)==1)
                printf("\nA Pilha esta vazia!\n");
            else
                printf("\nA Pilha nao esta vazia.\n");
            break;
        case 3:
            printf("Digite o elemento que deseja inserir:\n");
            scanf("%d", &elem);
            if (empilha(&p, elem)==1)
                printf("\nElemento inserido!\n");
            else
                printf("\nElemento não inserido!\n");
            break;
        case 4:
            if (desempilha(&p, &elem)==1)
                printf("\nElemento desempilhado com sucesso!\n");
            else
                printf("\nERRO ao desempilhar elemento!!\n");
            break;
        case 5:
            if(le_topo(&p,&elem)==1)
            printf("\nO elemento do topo eh: %d\n", elem);
            else
            printf("\nERRO ao retornar elemento\n");
            break;
        case 6:
            imprime(p);
            break;
        case 7: ;
            char vet[20];
            printf("\nDigite uma frase:\n");
            setbuf(stdin, NULL);
            gets(vet);
            if(eh_palindromo(vet)==1)
                printf("\nE palindromo!\n");
            else
                printf("\nNao e palindromo!\n");
            break;
        case 8:
            printf("\nDigite o numero que deseja remover:\n");
            scanf("%d", &elem);
            if (elimina(&p, elem)==1)
                printf("\nElemento removido! \n");
            else
                printf("\nErro ao remover elemento! \n");
            break;
        case 9:
            pares_impares(p);
            break;
        default:
            printf("FIM.");
        }
    } while (op != 10);

    return 0;
}