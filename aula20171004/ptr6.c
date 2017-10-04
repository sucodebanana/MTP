#include <stdio.h>

#define N 16//multiplo de sizeof(int)

int main()
{
    char str[N];
    int i=0, *varredura=(int*)str;

    for(;i<N;str[i]='\0', i++);

    printf("Entre com o texto <%d carac max>\n\n", N);
    fgets(str,N,stdin);

    for(i=0; i<N/sizeof(int);i++)
        printf("End.: %p => dado: %d (dec), %X (hex)\n\n", varredura+i, varredura[i], varredura[i]);

    return 0;
}
