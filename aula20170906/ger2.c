#include<stdio.h>

int main()
{
    long int num, som=1, i=2;

    printf("Digite um numero para verificar se e'perfeito:\n\n");
    scanf("%d",&num);getchar();

    for(i;i<=num/2;i++)
        if(num%i==0)
        som=som+i;

    if(som==num)
    printf("\nO numero %d e' um numero perfeito.\n",num);
    else
    printf("\nO numero %d nao e' um numero perfeito.\n",num);

    return 0;

}
