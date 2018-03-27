#include <stdio.h>

void troca(int *a, int *b)
{
    int aux;

    aux=*a;
    *a=*b;
    *b=aux;

}

int main()
{
    int a=90, b=50;

    printf("\nAntes a=%d , b=%d",a, b);
    troca(&a,&b);
    printf("\nDepois a=%d , b=%d", a , b);



}
