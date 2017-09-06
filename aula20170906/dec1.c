#include<stdio.h>

int main()
{
    int num,m;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    if(num%2)//impar (boole)
    {
        printf("Numero impar.\n");
        if(!num%5) printf("Numero multiplo de 5.\n");
    }

    else//par
    {
        printf("Numero par.\n");
        if(!num%3)
        printf("Numero multiplo de 3.\n");
        if(num%7==0)
        printf("Numero multiplo de 7.\n");
    }

    return 0;
}
