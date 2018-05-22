#include <stdio.h>
#include <locale.h>

typedef struct javali
{
    int cod;
    float peso;
    int idade;
    char sexo;


}Java;


int main()
{
    int cont=0;
    Java java;
    setlocale(LC_ALL, "Portuguese");

    printf("\nEntre com o código do javali:");
    scanf("%d", &java.cod);
    while(java.cod>0)
    {

    printf("\nEntre com o peso do javali:");
    scanf("%f", &java.peso);

    printf("\nEntre com a idade do javali:");
    scanf("%d", &java.idade);

    printf("\nEntre com o sexo do javali, M - Macho, F - Fêmea:");
    scanf("%s", &java.sexo);

    if(java.peso>240 && java.idade>24 && java.idade<48 && java.sexo=='M')
    {
        cont++;
    }

    printf("\nO Total de javalis dentro dessa condição:%d", cont);

    printf("\nEntre com o Prox código:");
    scanf("%d", &java.cod);
    };

return 0;

}
