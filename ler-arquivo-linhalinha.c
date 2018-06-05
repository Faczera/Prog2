#include <stdio.h>
#define ESTUD 3

int main()
{
   char linha[100];
   char nome[100];

    FILE *arq;

    printf("\nEntre com o arquivo:");
    gets(nome);
    arq = fopen(nome, "r");



    if(arq==NULL)
    {
        printf("\nError");
        exit(-1);
    }

    else
    {

        while(fgets(linha, 100, arq)!=NULL)
        {
            printf("%s", linha);

        }

    }


    fclose(arq);

    return 0;

}
