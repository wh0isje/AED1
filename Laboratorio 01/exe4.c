//declaração de bibliotecas
#include <stdio.h>

int main()
{
    float massa, altura, imc;

    printf("<<Calculo IMC>>\n");

    //leitura dos dados
    printf("Digite o seu peso: ");
    scanf("%f", &massa);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    //calculando o imc
    imc = massa/(altura*altura);

    //faz a classificação de acordo com o valor do imc
    if(imc < 18.5)
    {
        printf("Magreza");
    }
    else if(imc >= 18.5 && imc <= 24.9)
    {
        printf("Saudavel");
    }
    else if(imc >= 25.0 && imc <= 29.0)
    {
        printf("Sobrepeso");
    }
    else if(imc >= 30.0 && imc <= 34.9)
    {
        printf("Obesidade Grau I");
    }
    else if(imc >= 35.0 && imc <= 39.9 )
    {
        printf("Obesidade Grau II (severa)");
    }
    else
        printf("Obesidade Grau III (morbida)");

    return 0; //fim do programa

}

