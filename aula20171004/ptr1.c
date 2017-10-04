#include <stdio.h>

int main()
{
    unsigned int dado=0xFACA8421;
    unsigned char * ponteiro;//poteiro para byte
    int i;

    printf("End.: %p; dado em decimal (unsigned): %u\n", &dado, dado);
    ponteiro=(unsigned char*)&dado;
    for(i=0;i<sizeof(dado);i++)
        printf("End.: %p => %u (decimal), %X (hexadecimal)\n", ponteiro+i, *(ponteiro+i), ponteiro[i]);

    return 0;
}
