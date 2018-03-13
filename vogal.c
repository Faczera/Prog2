#include <stdio.h>
#include <string.h>

int contavogais(char *nome);

int main()
{
  char fras[20];
  int nuvog;

  printf("\nEntre com uma frase:");
  gets(fras);

    nuvog=contavogais(fras);

    printf("\nEssa frase tem %d vogais", nuvog);



}

int contavogais(char *nome)
{
    int i;
    int cont=0;
    int tam;

    tam=strlen(nome);

    for (i=0;i<tam;i++)
    {
        if(nome[i]=='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || nome[i]=='u')
        {
            cont++;
        }

    }

return cont;
}



