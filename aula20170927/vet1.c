#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define N 10000

int main()
{
   srand(time(0));

   int max;
   int numeros[N], i;
   float media=0.f;


   printf("Entre com um numero inteiro nao negativo:\n");
    scanf("%d",&max);

    for(i=0;i<N;i++)
        numeros[i]=rand()%(max+1);

     for(i=0;i<N;i++)
    media+=numeros[i];

    media/=N;

    printf("A media dos %d numeros: %f\n",N, media);

    return 0;
}
