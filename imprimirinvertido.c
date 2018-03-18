#include <stdio.h>
#include <string.h>

void troca(char *str1, char *str2);

int main()
{
    char stri1[50];
    char stri2[50];

    printf("\nEntre com um conteudo:");
    gets(stri1);

    printf("\nEntre com um outro conteudo:");
    gets(stri2);

    troca(stri1, stri2);

    printf("%s\n", stri1);

    printf("%s", stri2);

}

void troca(char *str1, char *str2)
{
    char aux[20]=" ";

    strcpy(aux, str1);
    strcpy(str1, str2);
    strcpy(str2, aux);


}

