#include <stdio.h>

int main()
{
    float aposta1, aposta2, aposta3, total, premio, valor1, valor2, valor3;

    printf("<<Loteria>>\n");

    //leitura das apostas de cada jogador
    printf("Bolao jogador 1 R$: ");
    scanf("%f", &aposta1);
    printf("Bolao jogador 2 R$: ");
    scanf("%f", &aposta2);
    printf("Bolao jogador 3 R$: ");
    scanf("%f", &aposta3);

    //leitura do valor do premio
    printf("Informe o valor do premio: ");
    scanf("%f", &premio);

    total = aposta1+aposta2+aposta3; // soma de todas as apostas para calculo

    //calculando o valor do premio de cada jogador
    valor1 = premio*(aposta1/total);
    valor2 = premio*(aposta2/total);
    valor3 = premio*(aposta3/total);

    printf("Jogador 1 recebera R$: %.1f\n", valor1);
    printf("Jogador 2 recebera R$: %.1f\n", valor2);
    printf("Jogador 3 recebera R$: %.1f\n", valor3);

    return 0;
    
}