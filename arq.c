#include <stdio.h>
#define ESTUD 3

int main()
{
   char linha[100];
    FILE *arq;

    printf("\nEntre com a primeira linha do arquivo:");
    gets(linha);

    arq = fopen("meuarq.txt", "w");



    if(arq==NULL)
    {
        printf("\nError");
        exit(-1);
    }

    else
    {
        //gravando arq
        fprintf(arq, "linha 1:%s\n", linha);

    }


//fechando arquivo
    fclose(arq);

    return 0;

}
