#include<stdio.h>
#include<stdlib.h>

#define N 10

int main()
{

   int lista[N], aux[N], i;

   printf("Entre com uma lista de numeros:\n");

   for(i=0;i<10;scanf("%d",&lista[i]), getchar(),i++);

    for(i=0;i<10/2;aux[i]=lista[i],lista[i]=lista[10-1-i],lista[10-1-i]=aux[i],i++);

    printf("A lista invertida e':\n\n");
    for(i=0;i<10;i++)
        printf("%d",lista[i]);

    return 0;
}
