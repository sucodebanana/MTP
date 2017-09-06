#include<stdio.h>

int main()
{
int b, p,l;
float r=1;

printf("Digite um numero para a base e para a potencia:\n\n");
scanf("%d",&b);getchar();
scanf("%d",&p);getchar();

for(l=0;l<p;l++)
    r=r*b;
printf("Resultado da potencia %d^%d = %.0f \n\n",b,p,r);

return 0;
}
