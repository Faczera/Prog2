#include <stdio.h>
#include <string.h>

int contale(char *palavra, char letra);

int main()
{
    char letra;
    char frase[20];
    int numle;

    printf("\nEntre com uma frase:");
    gets(frase);

    printf("\nEntre com uma letra:");
    scanf("%c", &letra);

    numle=contale(frase, letra);

    printf("\n A letra %c ocorre %d vezes", letra, numle);



}

int contale(char *palavra, char letra)
{
    int i;
    int tam;
    int cont=0;

    tam = strlen(palavra);

    for(i=0;i<tam;i++)
    {
        if(palavra[i]==letra)
            cont++;

    }

    return cont;


}
