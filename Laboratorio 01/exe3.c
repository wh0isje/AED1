//Declaração de bibliotecas
#include <stdio.h>

int main()
{
    //declaração das variaveis
    int bit1, bit2, bit3, bit4, decimal;
    int soma1, soma2, soma3, soma4;

    printf("==Conversor de numeros binarios==\n");

    //leitura dos bits
    printf("Digite o 1o bit: ");
    scanf("%d", &bit1);
    printf("Digite o 2o bit: ");
    scanf("%d", &bit2);
    printf("Digite o 3o bit: ");
    scanf("%d", &bit3);
    printf("Digite o 4o bit: ");
    scanf("%d", &bit4);

    //calculando cada bit
    soma4 = bit4*pow(2,0);
    soma3 = bit3*pow(2,1);
    soma2 = bit2*pow(2,2);
    soma1 = bit1*pow(2,3);

    //faz a soma dos bits para chegar no decimal
    decimal = soma4+soma3+soma2+soma1;

    //mostra na tela o numero binario e o correspondente ao numero decimal
    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d", bit1,bit2,bit3,bit4,decimal);

    return 0; //fim do programa
}