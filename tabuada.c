#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   int n, i, produto;

   printf("Deseja a tabuada para qual valor?\n");
   scanf("%d", &n);

 for(i = 1; i <= 10; i++){
    produto = n * i;
    printf("%d x %d = %d\n", n, i, produto);
 }





    return 0;
}
