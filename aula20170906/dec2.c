#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand(time(0));//semente

int x,p=0,som,prod;
int menor=1328, maior = 1360;
int y=menor+rand()%(maior-menor+1);


printf("Informe um dos divisores de 8192: \n");
scanf("%d",&x);getchar();

if(8192%x==0)
p++;

printf("Some 101 ao numero %d\n\n",y);
scanf("%d",&som);getchar();

if(som==(y+101))
    p++;


menor=101, maior = 293;
int z=101+rand()%(maior-menor+1);

printf("Multiplique por 3 o numero %d\n\n",z);
scanf("%d",&prod);getchar();

if(prod==z*3)
    p++;

printf("\nSua pontuacao foi: %d \n\n",p);

return 0;

}
