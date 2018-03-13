#include <stdio.h>
#include <string.h>

int main()
{

    char nomecompleto[10];
    char nome[10];
    char sobre[10];
    printf("\nEntre com o nome:");
    gets(nome);

printf("\nEntre com o sobrenome:");
    gets(sobre);

strcpy(nomecompleto,"");
strcpy(nomecompleto, sobre);
strcat(nomecompleto, ", ");
strcat(nomecompleto, nome);

printf("\n%s", nomecompleto);

    return 0;
}

