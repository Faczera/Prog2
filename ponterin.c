#include "stdio.h"

int main()
{
    int a;
    int b;
    int *p;

    printf("\nEntre com o valor de A:");
    scanf("%d", &a);

    printf("\nEntre com o valor de B:");
    scanf("%d", &b);

    p=&a;




    printf("\nEndereço de memoria de A = %d", &a);
    printf("\nEndereço de memoria de A = %d", &b);
    printf("\nValor que P esta apontando %d", *p);

    p=a;


    printf("\nNovo valor de P %d", *p);






     return 0;

}
