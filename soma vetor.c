#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n;
    double media, soma;

    printf("Quantos numeros vamos digitar?\n");
    scanf("%d", &n);

    double vet[n];


    for (i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nValores do vetor: ");
    for (i = 0; i < n; i++){
        printf("%.1lf ", vet[i]);
    }

    printf("\n");

    soma = 0;

    for (i = 0; i < n; i++){
        soma = soma + vet[i];
    }

    printf("Soma = %.2lf\n", soma);

    media = soma / n;

    printf("Media = %.2lf\n", media);

    return 0;
}
