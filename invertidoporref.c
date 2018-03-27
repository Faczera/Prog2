#include <stdio.h>
#include <string.h>
void imprime_invertido(char *frase);

int main()
{
    char frase[30];

    printf("\nEntre com uma frase: ");
    gets(frase);

    imprime_invertido(frase);


}

void imprime_invertido(char *frase)
{
    int i, tam;
    tam = strlen(frase);

    for(i=tam-1; i>=0; i--)
{
    printf("%c", frase[i]);
}
    printf("\n");

}
