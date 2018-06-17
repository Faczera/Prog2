\\Nome Vitor de Souza Luiz, Matricula:0050015264

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char linha1[100];
    char arq1[100];
    char arq2[100];
    char linha2[100];
    char cab[100];
    char name[100];
    char cab1[100];
    char name1[100];
    int coloc;
    int coloc2;




    FILE *open1;
    FILE *open2;
    FILE *open3;


    printf("\nEntre com o nome do arquivo 1:");
    gets(arq1);

    printf("\nEntre com o nome do arquivo 2:");
    gets(arq2);

    open1 = fopen(arq1, "r");
    open2 = fopen(arq2, "r");
    open3 = fopen("arq3.txt", "w");

    if(open1==NULL || open2==NULL)
    {
        printf("\nError");
        exit(-1);
    }

    else
    {
        while(fgets(linha1, sizeof(linha1),open1)!=NULL)
        {
            printf("\n%s\t",linha1);

        }
        while(fgets(linha2, sizeof(linha2) ,open2)!=NULL)
        {
            printf("\n%s\t",linha2);

        }

    }
    while(!feof(open1) && !feof(open2))
{

    while(fgets(linha1, sizeof(linha1),open1)!=NULL)
    {
    fscanf(open1, "%s %s", cab, name);
    fscanf(open1, "%d", coloc);
    }

    while(fgets(linha2, sizeof(linha2) ,open2)!=NULL)
{
    fscanf(open2, "%s %s", cab1, name1);

    fscanf(open2, "%d", coloc2);
}




        if(coloc>coloc2)
        {
            fprintf(open3, "%s", arq1);

        }


        else
        {
            fprintf(open3, "%s", arq2);
        }

    }








    fclose(open1);
    fclose(open2);

    return 0;

}

