#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int main()
{
    Fila f;
    int elem;
    int op;

    do
    {

        do
        {
            printf(" \n--- FILA ESTATICA SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");
            printf(" 3. Verificar fila cheia\n");
            printf(" 4. Inserir elemento no final\n");
            printf(" 5. Remover elemento no inicio\n");
            printf(" 6. Imprime fila\n");
            printf(" 7. SAIR\n");
            printf(" \nOpcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
            {

                printf("\nOpcao Invalida! Tente novamente.\n");
            }
        } while ((op < 1) || (op > 7));

        switch (op)
        {
        case 1:
                f = cria_fila();
                if (f != NULL)
                {
                    printf("\nA fila foi criada!\n");
                }
                else
                    printf("\nERRO!\n");
            break;
        case 2:
            if (fila_vazia(f))
                printf("\nA fila esta vazia!\n");
            else
                printf("\nA fila nao esta vazia!\n");
            break;
        case 3:
            if (fila_cheia(f))
                printf("\nA fila esta cheia!\n");
            else
                printf("\nA fila nao esta cheia!\n");
            break;
        case 4:
            if (f == NULL)
                printf("\nA fila nao foi criada!\n");
            else
            {
                printf("Digite o elemento a ser inserido:\n");
                scanf("%d", &elem);
                if (insere_fila(f, elem))
                    printf("\nO elemento foi inserido com sucesso!\n");
                else
                    printf("\nErro ao inserir elemento");
            }
            break;
        case 5:
            if (remove_fila(f, &elem) == 1)
                printf("\nElemento removido com sucesso!\n");
            else
                printf("\nErro ao remover elemento");
            break;

        case 6:
            imprime(f);
            break;
        default:
            printf("FIM.");
        }
    } while (op != 7);

    return 0;
}