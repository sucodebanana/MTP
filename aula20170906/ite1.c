#include<stdio.h>

int main()
{
    int num,m;

    printf("Entre com um numero: \n");
    scanf("%d",&num);

    int fat=1;
    for(m=0; m<num; m++)
    {
        fat=fat*(num-m);
    }

    printf("Fatorial: %d\n", fat);

    return 0;
}
