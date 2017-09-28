#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define N 256

int main()
{
    int i;
    char str[N], aux[N];

    printf("Entre com uma frase:\n\n");
    fgets(str,N,stdin); str[strlen(str)-1]='\0';

    i=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='m')||(str[i]>='A'&&str[i]<='M'))
            aux[i]=str[i]+13;
        if((str[i]>='n'&&str[i]<='z')||(str[i]>='N'&&str[i]<='Z'))
            aux[i]=str[i]-13;
        if(!((str[i]>='a'&&str[i]<='m')||(str[i]>='A'&&str[i]<='M')||
           (str[i]>='n'&&str[i]<='z')||(str[i]>='N'&&str[i]<='Z')))
           aux[i]=str[i];

        i++;
    }

    printf("\n\n%s\n\n",aux);

    return EXIT_SUCCESS;
}
