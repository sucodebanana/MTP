#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void imprime(int ord, float *mat[ord][ord])
{
    int i, j;
    for(i=0;i<ord;i++)
    {
        for(j=0;j<ord;j++)
            printf("%f ",mat[i][j]);

        printf("\n");
    }

}

void transposta(int ord, float *mat[ord][ord])
{
    int i, j;
    for(i=0;i<ord;i++)
    {
        for(j=0;j<ord;j++)
            printf("%f ",mat[j][i]);

        printf("\n");
    }

}


int main()
{
    int ord,i,j;
    float *mat[ord][ord];


    printf("Qual a ordem da matriz desejada?\n\n");
    scanf("%d",&ord);

    mat[ord][ord]= (float*)calloc(ord,sizeof(float));

    for(i=0;i<ord;i++)
    {
        for(j=0;j<ord;j++)
            scanf("%f ",mat[i][j]);
    }

   printf("\n\nA matriz:\n\n");
   imprime(ord,mat);

    printf("A transposta:\n\n");
   transposta(ord,mat);


    free(mat);
    return 0;
}
