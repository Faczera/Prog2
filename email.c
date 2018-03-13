#include <stdio.h>
#include <string.h>

void strcontagoogle(char *emailnovo, char *nome, char *sobrenome);

int main()
{
    char nome[30], sobrenome[30], email[30];

    printf("\nEntre com seu nome");
    gets(nome);

    printf("\nEntre com seu nome");
    gets(sobrenome);
printf("\nEmail:%s", email);
strcontagoogle(email, nome, sobrenome);
printf("\nEmail:%s", email);

}

void strcontagoogle(char *emailnovo, char *nome, char *sobrenome)
{
    strcpy(emailnovo, nome);
    strcpy(emailnovo, ".");
    strcat(emailnovo, sobrenome);
    strcat(emailnovo, "@soulasalle.com.br");

}
