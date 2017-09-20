#include<stdio.h>
#include<math.h>

int main()
{
   float b, c, a, th;

   printf("Informe o valor dos lados de um triangulo (b,c):\n");
   scanf("%f,%f",&b,&c);getchar();

   printf("\nQual o angulo entre eles?:\n");
   scanf("%f",&th);getchar();

   a=sqrt(b*b+c*c-2*c*b*cos(th));

   printf("O lado a tem tamanho: %f\n", a);

   return 0;

}
