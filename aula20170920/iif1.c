#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    srand(time(0));

    int k,cont=0;
    float p;

  printf("Entre com uma probabilidade:\n\n");
  scanf("%f",&p);getchar();

    for(k=0;k<1000;k++)
        if((float)rand()/RAND_MAX < p)
        cont++;

    printf("\n%d",cont);


   return 0;

}
