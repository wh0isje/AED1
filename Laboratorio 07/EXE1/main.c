#include <stdlib.h>
#include <stdio.h>
#include "lista_linear.h"

int main()
{
    Lista lista;
    int op,elem, x = 0;
    do{
        do{
            printf(" --- LISTAS DINAMICA ENCADEADA NO CABECALHO --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento \n");
            printf(" 4. Excluir elemento \n");
            printf(" 5. Imprimir lista\n");
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 6)) {

                printf("Opcao Invalida! Tente novamente... \n");
            }
        } while((op < 1) || (op > 6));

        switch(op)
        {
            case 1:
                lista = cria_lista();
                if (lista != NULL){
                    printf("Lista criada! \n");
                }else
                {
                    printf("Erro! Lista nao foi criada! \n");
                }
                x = 1;
                break;

            case 2:
                if(lista_vazia(lista) == 1){
                    printf("Lista esta vazia! \n");
                }else
                {
                    printf("Lista nao esta vazia! \n");
                }
                break;

            case 3:
                if (x != 1){
                    printf("Lista nao foi criada! \n");
                }else{
                    printf("Digite o elemento: ");
                    scanf("%d", &elem);
                    if (insere_elem(lista,elem) == 1)
                    {
                        printf("O elemento foi inserido! \n");
                    }else
                    {
                        printf("Erro! O elemento nao foi inserido! \n");
                    }
                }
                break;
            case 4:
                printf("Digite o elemento a ser removido: ");
                scanf("%d", &elem);
                if (remove_elem(&lista,elem) == 1)
                {
                    printf("O elemento foi removido! \n");
                }else
                {
                    printf("O elemento nao foi removido! \n");
                }
                break;

            case 5:
                imprime(lista);
                break;
        }
    } while(op != 6);

    return 0;
}