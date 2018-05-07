#include "stdio.h"

int main()
{
    int a=1, b=2, c=3;

    int *p = &b;


    printf("\nEndereço de a = %d, endereço de b = %d, endereço de c = %d",&a,&b,&b);

    printf("\nvalor de p = %d = %d", p, *p);

    p=p+1;

    printf("\nvalor de p = %d = %d", p, *p);

    p=p-2;

    printf("\nvalor de p = %d = %d", p, *p);






     return 0;

}
