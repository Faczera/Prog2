#include <stdio.h>


int men();


int main ()
{

    men();
}

int men()
{
    int op;
    printf("******************\n\n");
    printf("calculadora\n");
    printf("\n******************\n");
    printf("1-Soma\n\n");
    printf("2-Subtrair\n\n");
    printf("0-Sair\n\n");

    printf("\nEscolha sua opcao:");
    scanf("%d", &op);

    if(op=1)
{
    return 1;
}
 if(op=2)
{
    return 2;
}
 if(op=0)
{
    return 0;

}
}



