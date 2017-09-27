#include<stdio.h>
#include<stdlib.h>

#define N 1000

int main()
{
    srand(time(0));
    int lista[N], num, max, min, i,j;

   printf("Entre com um numero inteiro nao negativo entre 0 e 1000:\n");
   scanf("%d", &num);getchar();

   for(i=0;i<num;i++)
    lista[i]=rand()%10;

    max=lista[0]; min=lista[0];
    for(j=0;j<num-1;j++)
        {
        printf("%d ", lista[j]);
        if(max<=lista[j])
            max=lista[j];
        if(min>=lista[j])
            min=lista[j];

        }


    printf("\n\nO maior dos numeros e' %d e o menor e' %d",max, min);

    return 0;
}
