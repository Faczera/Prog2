#include <stdio.h>
#include <string.h>

void calc(int n1, int n2, int *mult, float *div);

int main()
{
    int num1, num2, mult;
    float div;


    printf("\nEntre com um numero:");
    scanf("%f", &num1);

    printf("\nEntre com um numero:");
    scanf("%f", &num2);

    calc(num1, num2, &mult, &div);

    printf("o resultado eh %d\n",mult);
    printf("o resultado eh %f", div);

    return 0;


}

void calc(int n1, int n2, int *mult, float *div)
{

 *mult = n1*n2;
 *div =(float)n1/n2;

}
