#include <stdio.h>
#include <math.h>
typedef struct reg_ponto
{
  float x;
  float y;

}Vitor;

void lerponto(Vitor *p)
{
    printf("\nEntre com o ponto X:");
    scanf("%f", &p->x);

    printf("\nEntre com o ponto Y:");
    scanf("%f", &p->y);

}

void imprimeponto(Vitor p)
{
    printf("Ponto X: %.2f , Ponto Y: %.2f",p.x, p.y);
}

float calcdistancia(Vitor pA, Vitor pB)
{
    float d;

    d=sqrt(pow((pB.x-pA.x),2) + pow((pB.y-pA.y),2));
    return d;

}


int main()
{
    Vitor ponto1;
    Vitor ponto2;
    float dist;

    lerponto(&ponto1);
    lerponto(&ponto2);
    dist=calcdistancia(ponto1, ponto2);
    printf("\nA Distancia entre os 2 pontos = %.2f", dist);
    imprimeponto(ponto1);
    imprimeponto(ponto2);

    return 0;

}
