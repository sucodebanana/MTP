#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define N 256

int main()
{
    int i;
    char str[N], msg[2*N];

    printf("Entre com uma frase:\n");
    fgets(str,N,stdin); str[strlen(str)-1]='\0';
    for(i=0;i<N;i++)
        str[i]=toupper(str[i]);

    printf("O tamanho da string: %d\n",strlen(str));

    if(!strncmp(str, "BOM DIA", 7))
        printf("Bom dia pr voce tambem!");
    else
        if(!strncmp(str, "TCHAU", 5))
            printf("Saindo? Que pena...");

        else{
            strcpy(msg, "Voce quis dizer: ");
            strcat(msg, str);
            strcat(msg, "?");
        }

        printf("%s\n",msg);

    return EXIT_SUCCESS;
}
