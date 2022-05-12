// declaração das bibliotecas
#include <stdio.h>

int main()
{
    int num;
    //o numero a ser impresso é muito grande, por isso deve se declarar com long long int para
    //imprimir corretamente o valor do fatorial
    long long int fat=1;

    printf("<<Fatorial>>\n");

    for(num = 1; num <= 15; num ++)
    {
        fat = fat * num;

        printf("%d! = %lld\n", num, fat);
    }

    return 0;
}
