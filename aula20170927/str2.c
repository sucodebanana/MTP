#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define N 256

int main()
{
    int i, V=0, C=0, E=0, D=0,O;
    char str[N];

    printf("Entre com uma frase:\n\n");
    fgets(str,N,stdin); str[strlen(str)-1]='\0';
    for(i=0;i<N;i++)
        str[i]=tolower(str[i]);

    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            V++;
        if(str[i]>='0'&&str[i]<='9')
            D++;
        if(str[i]==' ')
            E++;
        if((str[i]>='a'&&str[i]<='z')&&!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
            C++;

        i++;
    }

    printf("\n\nV:   %d\nC:   %d\nE:   %d\nD:   %d\n\n",V,C,E,D);

    return EXIT_SUCCESS;
}
