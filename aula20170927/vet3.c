#include<stdio.h>
#include<stdlib.h>

#define N 10

int main()
{

   long int lista[N], prod=1, soma=0, i;

   printf("Entre com uma lista de numeros:\n");

   for(i=0;i<10;scanf("%d",&lista[i]), getchar(),i++);
    for(i=0;i<10;soma+=lista[i], prod*=lista[i],i++);

    printf("A soma dos numeros e': %d \n\n",soma);
    printf("O produto dos numeros e': %d \n\n",prod);

    return 0;
}
