
#include<stdio.h>

int main()
{
    int num, i;
    printf("Entre com um numero: ");
    scanf("%d",&num);getchar();

    for(i=2;i<num;i++)
    {
    if(!num%i)
        break;
    }
    if(i==num)
        printf("Primo!!");
    else
        printf("Nao e primo!");

    return 0;


}
