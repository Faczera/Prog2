#include <stdio.h>

int main()
{
    int i, j;

    FILE *arq;

    arq = fopen("tabuada.txt" , "w");

    fprintf(arq, "\nTabuada de Add");
    fprintf(arq, "\n--------------");

    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)

        {
            fprintf(arq, "\n%d + %d = %d", i , j, i+j);

        }
            fprintf(arq, "\n--------------");

    }
    fclose(arq);

    return 0;



}
