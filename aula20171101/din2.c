#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void imprimir(float **mat, unsigned int ord)
{
	int i, j;

	printf("\n\nMatriz de ordem %d:\n\n", ord);
	for(i = 0; i < ord; i++)
		for(j = 0; j < ord; j++)
			printf("%g%c", mat[i][j], (j == ord-1)? '\n':'\t');
}

void transposta(float **mat, unsigned int ord)
{
	int i, j;

	printf("\n\nMatriz transposta de ordem %d:\n\n", ord);
	for(i = 0; i < ord; i++)
		for(j = 0; j < ord; j++)
			printf("%g%c", mat[j][i], (j == ord-1)? '\n':'\t');
}

void preenche(float *elemento)
{
	scanf("%f", elemento);
}

int main()
{
	int ord,i,j;
	float **mat;

	printf("Qual a ordem da matriz desejada?\n\n");
	scanf("%d",&ord);getchar();
	printf("\n\nElementos da matriz:\n\n");

	mat= calloc(ord,sizeof(float*));

	for(i=0;i<ord;i++)
	{
		mat[i]= calloc(ord,sizeof(float));
		for(j=0;j<ord;j++)
		{
			printf("M[%d][%d]: ",i+1,j+1);
			preenche(&mat[i][j]);
		}
	}

	imprimir(mat,ord);
	transposta(mat,ord);

	free(mat);
	EXIT_SUCCESS;
}
