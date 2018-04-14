#include <stdio.h>

void notas(float av1, float av2, float av3, float *maior1, float *maior2);

int main()
{
    float av1, av2, av3;
    float soma=0, media=0;
    float maior1,maior2;

    printf("\nEntre com a av1:",av1);
    scanf("%f", &av1);

     printf("\nEntre com a av2:",av2);
    scanf("%f", &av2);

     printf("\nEntre com a av3:",av3);
    scanf("%f", &av3);

    system("pause");

    notas(av1, av2, av3, &maior1, &maior2);

    printf("\nAs maiores notas sao: %f e %f", maior1, maior2);

    soma=maior1+maior2;
    media = soma / 2;

    if(media>=6)
    {
        printf("\nAprovado");
    }
    else
    {
        printf("\nReprovado");
    }


}

void notas(float av1, float av2, float av3, float *maior1, float *maior2)
{
    float menor;

    if(av2>av1)
    {
        *maior1=av2;
        av1=menor;

    }

    else
    {
        *maior1 = av1;
        av2=menor;

    }

    if(av3>menor)
    {
        *maior2=av3;

    }

    else
    {
        *maior2=menor;
    }



}
