#include <stdio.h>
#include <stdlib.h>

int main()
{

int n, i;

printf("Quantos numeros vamos digitar?\n");
scanf("%d", &n);

int vet[n];

for (i = 0; i < n; i++){
    printf("Digite um numero: ");
    scanf("%d", &vet[i]);
}

printf("\nNumeros negativos\n");
for (i = 0; i < n; i++){
    if (vet[i] < 0){
        printf("%d", vet[i]);
    }
}

    return 0;
}
