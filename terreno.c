#include <stdio.h>


int main()
{
    double larg, compr, area, precoM2, valorTerreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &larg);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &compr);

    printf("Digite o comprimento do metro quadrado: ");
    scanf("%lf", &precoM2);

    area = larg * compr;
    valorTerreno = precoM2 * area;

    printf("Area do Terreno = %.2lf metros quadrados\n", area);
    printf("Valor do Terreno = R$%.2lf reais\n", valorTerreno);




    return 0;
}
