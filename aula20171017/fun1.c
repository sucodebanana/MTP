#include<stdio.h>
#include<stdlib.h>

int somafracao(int num1, int den1, int num2, int den2,
               int *pnumR, int * pdenR)
               {
                   if (den1==0||den2==0)
                    return 0; //falso

                    else
                   {
                       *pnumR=den2*num1+den1*num2;
                       *pdenR=den1*den2;

                       return 1;
                   }
               }

int main()
{
    int num, den, num1, den1, numR, denR;

    printf("Entre com um numero racional na forma <<num/den>>: ");
    scanf("%d/%d", &num, &den);

    printf("Entre com um outro racional na forma <<num/den>>: ");
    scanf("%d/%d", &num1, &den1);


    if(somafracao(num, den, num1, den1, &numR, &denR))
       printf("\nResultado: %d/%d",numR, denR);
    else
        printf("\nErro!");

    return EXIT_SUCCESS;
}
