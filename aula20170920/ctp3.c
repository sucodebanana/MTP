#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 256

int main()
{
    char frase[LEN];
    int i,j=0;

    printf("Entre com uma frase:\n\n");
    fgets(frase,LEN,stdin);

    i=0;
    while(frase[i])
    {
        if(isalpha(frase[i]))
        j++;

        i++;
    }
    printf("\n\nO numero de letras e': %d\n\n",j);

    return EXIT_SUCCESS;
}
