#include <stdio.h>

int main()
{

    char linha1[100];
    char arq1[100];
    char arq2[100];
    char linha2[100];



    FILE *open1;
    FILE *open2;

    printf("\nEntre com o nome do arquivo 1:");
    gets(arq1);

    printf("\nEntre com o nome do arquivo 2:");
    gets(arq2);

    open1 = fopen(arq1, "r");

    open2 = fopen(arq2, "r");

    if(open1==NULL || open2==NULL)
    {
        printf("\nError");
        exit(-1);
    }

    else
    {
        while(fgets(linha1, 100,open1)!=NULL || fgets(linha2, 100 , open2)!=NULL)
        {
            printf("%s\n",linha1);

            printf("%s",linha2);


        }

    }



    fclose(open1);
    fclose(open2);

    return 0;

}
