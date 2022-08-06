#include <stdio.h>
#include <stdlib.h>
#include <fila.h>

int main()
{
    Fila f;

    int elem;
    int op;

    do{
        do{
            printf(" \n--- Fila ESTATICA SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");
            printf(" 3. Verificar fila cheia\n");
            printf(" 4. Inserir elemento no Final\n");
            printf(" 5. Remover no inicio\n");
            printf(" 6. Imprimir fila\n");
            printf(" 7. Le Final \n");
            printf(" 8. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 8)){
                printf("\n\n A opcao eh invalida! Tente novamente.");
            }
        } while ((op < 1) || (op > 8));

        switch (op)
        {
        case 1:
            f = cria_fila();
            if (f != NULL)
                printf("\nFila criada!\n");
            else
                printf("\nErro!\n");
            break;

        case 2:
            if (fila_vazia(f))
                printf("\nA fila esta vazia!\n");
            else
                printf("\nA fila nao esta vazia!\n");
            break;

        case 3:
            if (fila_cheia(f))
                printf("\nA fila esta cheia!!\n");
            else
                printf("\nA fila nao esta cheia!!\n");
            break;

        case 4:
            if (f == NULL)
                printf("\nFila nao foi criada!\n");
            else
            {
                printf("Digite o elemento a ser inserido:\n");
                scanf("%d", &elem);
                if (insere_fim(f, elem))
                    printf("\nO elemento foi inserido com sucesso!\n");
                else
                    printf("\nO elemento nao foi inserido");
            }
            break;

        case 5:
            if (remove_ini(f, &elem) == 1)
                printf("\nElemento foi removido com sucesso!\nO elemento removido foi %d\n", elem);
            else
                printf("\nErro ao remover elemento!");
            break;
        case 6:
            imprime(f);
            break;
        case 7:
            le_final(f);
            break;
        default:
            printf("FIM.")
        }
    } while (op != 8);

    return 0;
}