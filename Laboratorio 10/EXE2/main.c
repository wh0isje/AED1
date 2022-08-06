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
            printf(" \n--- Fila Estatica Sequencial --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");
            printf(" 3. Verificar fila cheia\n");
            printf(" 4. Inserir elemento no Final\n");
            printf(" 5. Remover inicio\n");
            printf(" 6. Imprime fila\n");
            printf(" 7. Le Final \n");
            printf(" 8. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 8)){
                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 8));

        switch (op)
        {
        case 1:
            f = cria_fila();
            if (f != NULL)
                printf("\nFila criada!\n");
            else
                printf("\nNao foi possivel criar a fila.\n");
            break;

        case 2:
            if (fila_vazia(f) == 1)
                printf("\nA fila esta vazia!\n");
            else
                printf("\nA fila nao esta vazia!\n");
            break;

        case 3:
            if (fila_cheia(f) == 1)
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
                if (insere_fim(f, elem))
                    printf("\nO elemento foi inserido com sucesso!\n");
                else
                    printf("\nErro ao inserir elemento!");
            }
            break;

        case 5:
            if (remove_ini(f, &elem) == 1)
                printf("\nElemento removido com sucesso!\nO elemento removido foi %d\n", elem);
            else
                printf("\nErro ao remover elemento!");
            break;
        case 6:
            imprime(f);
            break;
        case 7:
            if(le_final(f,&elem) == 1)
                printf("\nO elemento no topo eh: %d\n", elem);
            else
                printf("\nNao foi possivel retornar o elemento!\n");
            break;
        default:
            printf("\n\n FIM.");
        }
    } while (op != 8);

    return 0;
}
