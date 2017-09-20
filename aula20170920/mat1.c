#include<stdio.h>
#include<math.h>

int main()
{
   float x1, x2, y1, y2, D;

   printf("Entre com as coordenadas (x1,y1):\n");
   scanf("%f,%f",&x1,&y1);getchar();

   printf("\nEntre com as coordenadas (x2,y2):\n");
   scanf("%f,%f",&x2,&y2);getchar();

   D=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

   printf("A distancia entre os ponto e': %f\n", D);



   return 0;

}
