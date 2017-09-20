#include<stdio.h>
#include<complex.h>
#include<stdlib.h>
#include<math.h>

double complex ToComplex(double a, double b, char c)
{
             if(c=='r'||c=='R')
                return a+I*b;
            else
                return a*cos(b)+I*a*sin(b);

}

void ShowComplex(double z, char c)
{
    if(c=='r'||c=='R')
        printf("%lf + I* %lf\n", creal(z), cimag(z));
    else
        printf("%lf /_ %lf rad\n",cabs(z),carg(z));

}

int main()
{
    double complex z1;
    double a, b;

    printf("Entre com o numero complexo z1 (real, imaginario): ");
    scanf("%lf, %lf", &a, &b); z1=ToComplex(a, b, 'r');

      printf("A multiplicacao pelo conjugado: \n");
      printf("Forma retangular: "); ShowComplex(z1*conj(z1), 'r');
      printf("Forma polar: "); ShowComplex(z1*conj(z1), 'p');

   return 0;
