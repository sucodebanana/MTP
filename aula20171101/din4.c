#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef
struct Ponto{ float x; float y;}
Ponto;

typedef
struct poligono
{
    unsigned int *v;

    Ponto *p;
}
Pol;

void preen(int *ver, Ponto *pol)
{
    int i;

    printf("Entre com o numero de vertices do poligono: ");
    scanf("%d",ver);
    printf("\n\nEntre com as coordenadas na forma <<X,Y>>:\n");
    for(i=0;i<ver;i++)
        scanf("%0.00f,%0.00f",&pol[i].x,&pol[i].y);
}

int main()
{
    int *V,v;
    Ponto *P;

    P= malloc(v*sizeof(float*));

    preen(V,P);



	EXIT_SUCCESS;
}

