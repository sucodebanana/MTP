#include<stdio.h>
#include<math.h>

int main()
{
   float b, n, r;

   printf("Informe um numero e uma base desejada (n,b):\n");
   scanf("%f,%f",&n,&b);getchar();

   r=log(n)/log(b);

   printf("\n\nO logaritmo de --%.2f-- na base --%.2f-- e': %.2f\n", n,b,r);

   return 0;

}
