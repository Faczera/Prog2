#include <stdio.h><stdlib.h>
#include <locale.h>
void prim(int n1, int n2, int n3);
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2 , n3;

    printf("\nEntre com o numero:");
    scanf("%d", &n1);

    printf("\nEntre com o numero:");
    scanf("%d", &n2);

    printf("\nEntre com o numero:");
    scanf("%d", &n3);

    prim(n1,n2,n3);

}

void prim(int n1, int n2, int n3)
{
    int i, num=0;
    int cont=0;

    num = n1+n2+n3;
    for(i=1;i<=num;i++)
    {
    if(num%i  == 0)
    {
        cont++;
    }
    }
    if(cont==2)
    {
        printf("\nEsse numero é primo");
    }
    else
    {
        printf("\nEsse numero nao é primo");
    }

}
