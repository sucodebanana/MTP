#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float media(float *numeros, int qtde)
{
    float m=0.0f;
    int i;

    for (i=0;i<qtde;i++)
        m+=numeros[i];
        m/=qtde;

    return m;
}

float desvio(float *numeros, int qtde)
{
    float m=media(numeros, qtde), dp=0;
    int i;

    for (i=0;i<qtde;i++)
        dp+=pow(numeros[i]-m,2);

    return sqrt(dp/(qtde));
}

int main()
{
    int qtde, i;
    float *numeros;


    printf("De quantos numeros voce precisa?\n\n");
    scanf("%d",&qtde);

    numeros = (float*)calloc(qtde,sizeof(float));
    for(i=0;i<qtde;i++)
    {
        printf("\nEntre com o %dº numero: ",i+1);
        scanf("%f",&numeros[i]);
    }

        printf("\n\nA media dos numeros e: %f\n", media(numeros, qtde));
        printf("\n\nO desvio padrao dos numeros e: %f\n", desvio(numeros, qtde));


    free(numeros);
    return 0;
}
