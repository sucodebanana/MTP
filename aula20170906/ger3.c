#include<stdio.h>
#include<time.h>

int main()
{
    int d1, d2, d3,lim, R,n=1;
    float D,P=0;

    while(n<=3)
    {
    printf("Escolha um limite:\n\n");
    scanf("%d",&lim);getchar();

    d1=1+rand()%6;
    d2=1+rand()%6;
    d3=1+rand()%6;
    R=d1+d2+d3;

    if(lim>11)
    {
        D=lim-10;
        if(R>lim)
           P=P-D*(R-lim);
        else
            P=P+(lim-R)/D+1;
    }
    else
        P=P+(11-R);

    printf("Dado 1: %d\nDado 2: %d\nDado 3: %d\n-----\nSoma: %d\n-----\n\n",d1, d2, d3, R);

    n++;
    }
    printf("Pontos obtidos: %d\n\n",P);

    return 0;
}
