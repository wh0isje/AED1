#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    Fila f;
    int elem;
    int op;
    do
    {
        do
        {
            printf(" \n--- Fila ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");
            printf(" 3. Inserir elemento no Final\n");
            printf(" 4. Remover inicio\n");
            printf(" 5. Imprime fila\n");
            printf(" 6. Le Final \n");
            printf(" 7. SAIR\n");
            printf(" \nOpcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
            {
                printf("\n Opcao Invalida! Tente novamente.");
            }
        } while ((op < 1) || (op > 7));

        switch (op)
        {
        case 1:
            f = cria_fila();
            if (f == NULL)
                printf("\nA fila foi criada!\n");
            else
                printf("\nERRO ao criar a fila!\n");
            break;

        case 2:
            if (fila_vazia(f))
                printf("\nA Fila esta vazia!!\n");
            else
                printf("\nA Fila contem elementos!!\n");
            break;

        case 3:
            printf("Digite o elemento a ser inserido:\n");
            scanf("%d", &elem);
            if (insere_fim(&f, elem))
                printf("\nO elemento foi inserido com sucesso!\n");
            else
                printf("\nErro ao inserir elemento!");
            break;

        case 4:
            if (remove_ini(&f, &elem) == 1)
                printf("\nElemento removido com sucesso!");
            else
                printf("\nErro ao remover elemento!");
            break;
        case 5:
            imprime(f);
            break;
        case 6:
            if (le_topo(f, &elem) == 1)
                printf("\nO elemento do topo eh: %d\n", elem);
            else
                printf("\nERRO ao retornar elemento!\n");
            break;
        default:
            printf("\n\n FIM.");
        }
    } while (op != 7);

    return 0;
}