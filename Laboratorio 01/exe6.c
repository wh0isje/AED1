// declaração das bibliotecas
#include <stdio.h>

int main()
{
    int num; fat=1;

    printf("<<Fatorial>>\n");

    for(num = 1; num <= 10; num ++)
    {
        fat = fat * num;

        printf("%d! = %d\n", num, fat);
    }

    return 0;
}
