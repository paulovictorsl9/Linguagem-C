#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//variáveis
double a, b, c, x1, x2, delta;

printf("Digite o coeficiente A: ");
scanf("%lf", &a);

printf("Digite o coeficiente B: ");
scanf("%lf", &b);

printf("Digite o coeficiente C: ");
scanf("%lf", &c);

delta = (b * b) - 4 * (a * c);

if (a == 0 || delta < 0){
    printf("Essa equaçao nao possui raizes reais.\n");
}
else{
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("x1 = %.4lf\n", x1);
    printf("x2 = %.4lf\n", x2);

}

    return 0;
}
