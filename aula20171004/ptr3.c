
#include <stdio.h>

int main()
{
    int vetor[]={0x0F, 0xFF, 0xFFFF, 0xFFFFFF, 0x80000001,0xFFFFFFFF}, i, cont=0;
    unsigned char *ponteiro;//ponteiro para bytes;

    int nbytes = sizeof(vetor);

    for(i=0, ponteiro=(unsigned char*)vetor;i<nbytes;i++)
    {
       if(*(ponteiro+i)>0x00)cont++;

        printf("End.: %p, dado: %d, %X\n", ponteiro+i, ponteiro[i], *(ponteiro+i));
    }

    printf("\n\nDe %d bytes, %d estao com pelo menos um 0x01.\n", nbytes, cont);

    return 0;
}
