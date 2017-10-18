#include<stdio.h>
#include<stdlib.h>

int restodiv(int num, int den, int * rest, int * quo)
{

	if(den==0)
		return 0;//falso
	else
	{
		*rest=num%den;
		*quo=num/den;
		return 1;
	}

}

int main()

{

	int num, den, quo, rest;
	printf("Entre com uma fracao na forma <<num/den>>");
	scanf("%d/%d", &num, &den);

	if(!restodiv(num, den, &rest, &quo))
	printf("\nErro!");
	else
	printf("Quociente: %d\nResto: %d",quo, rest);

	return EXIT_SUCCESS;
	


}