#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, contador, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    contador = 0;
    soma = 0;

    while (idade >= 0){
    soma = soma + idade;
    contador = contador + 1;
    scanf("%d", &idade);
 }

 if (contador == 0){
    printf("Impossivel calcular\n");
 }
 else{
    media = (double)soma / contador;
    printf("Media idades = %.2lf", media);
 }



    return 0;
}
