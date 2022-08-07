#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int main()
{
    Fila f;
    int elem;
    int op, x = 0;
    do
    {
        do
        {
            printf(" \n--- Fila Dinamica Encadeada Simples --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");
            printf(" 3. Inserir elemento no Final\n");
            printf(" 4. Remover inicio\n");
            printf(" 5. Imprime fila\n");
            printf(" 6. SAIR\n");
            printf(" \nOpcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 6))
            {
                printf("\n Opcao Invalida! Tente novamente.");
            }
        } while ((op < 1) || (op > 6));

        switch (op)
        {
        case 1:
            f = cria_fila();
            if (f != NULL)
            {
                printf("\nA fila foi criada!\n");
                x = 1;
            }
            else
                printf("\nERRO ao criar a fila!\n");
            break;

        case 2:
            if (fila_vazia(f))
                printf("\nA fila esta vazia!\n");
            else
                printf("\nA fila nao esta vazia!\n");
            break;

        case 3:
            printf("Digite o elemento a ser inserido:\n");
            scanf("%d", &elem);
            if (insere_fim(f, elem))
                printf("\nO elemento foi inserido com sucesso!\n");
            else
                printf("\nErro ao inserir o elemento!");
            break;

        case 4:
            if (remove_ini(f, &elem)==1)
                printf("\nElemento removido com sucesso!\n");
            else
                printf("\nErro ao remover o elemento!");
            break;

        case 5:
            imprime(f);
            break;
        default:
            printf("\nFIM.");
        }
    } while (op != 6);

    return 0;
}
