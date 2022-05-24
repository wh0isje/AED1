#include <stdio.h>

int main()
{
int *p;
int *proximo;
int *anterior;
int *abacaxi;

int a = 40; //cria uma variável do tipo inteiro, chamada a, e inicializa
//com valor 40;
p = &a; //faz p receber o endereço de a. Dizemos que p aponta para a


// A
printf("%d\n", &a);
printf("%d\n", p);

// B

printf("Novo valor de a: ");
scanf("%d", p);
printf("O novo valor eh: %d", a);

return 0;

}
