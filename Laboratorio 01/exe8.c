// declaração das bibliotecas
#include <stdio.h>

int main()
{
    //declaração das variaveis
    int i, v[5];
    float media, dp, soma=0, desvio=0;

    printf("<<Media e desvio-padrao>>\n");

    //leitura de todos os 5 elementos
    for(i=0;i<5;i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }

    //soma todos os elementos
    for(i=0;i<5;i++)
    {
        soma = soma + v[i];
    }

    //faz a media dos elementos
    media = soma/5;

    //faz o calculo do desvio-padrao
    for(i=0;i<5;i++)
    {
        desvio = desvio + pow(v[i] - media, 2);
    }

    dp = sqrt(desvio/(5-1));

    //mostra na tela o resultado
    printf("A media eh %.0lf e o desvio-padrao eh %.13lf", media, dp);

    return 0; //fim do programa

}
