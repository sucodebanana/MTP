#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 256
int main()
{
    char frase[LEN];
    int i;

    printf("Entre com uma frase:\n");
    fgets(frase,LEN,stdin);

    i=0;
    while(frase[i])
    {
        frase[i]=tolower(frase[i]);
        i++;
    }
    printf("%s",frase);

    return EXIT_SUCCESS;
}
