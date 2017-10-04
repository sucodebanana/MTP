#include <stdio.h>

int main()
{
    int vetor[]={0,1,2,4,8,16,1025}, i, cont=0;
    unsigned char *ponteiro;//ponteiro para bytes;

    int nbytes = sizeof(vetor);

    for(i=0, ponteiro=(unsigned char*)vetor;i<nbytes;i++)//inicia no primeiro endereço do vetor (o proprio nome do vetor eh endereco para o primeiro elemento)
    {
        if(!ponteiro[i])
            cont++;
//if(*(ponteiro+i)==0x00)cont++;

        printf("End.: %p, dado: %d, %X\n", ponteiro+i, ponteiro[i], *(ponteiro+i));
    }

    printf("\n\nDe %d bytes, %d estao com 0x00.\n", nbytes, cont);

    return 0;
}
