#include <stdio.h>


int men();
int soma(int num1, int num2);
int sub(int num1, int num2);
int fim();


int main ()
{
       men();

       int op;

    do{
    printf("\nEscolha sua opcao:");
    scanf("%d", &op);
}   while(op<0 || op>2);

if(op==0)
{
    fim();
    return 0;
}


    int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);

  if(op==1)
  {
      resultado = soma(V1, V2);
      printf("\nResultado:%d", resultado);
      return 1;
  }

  if(op==2)
  {
      resultado = sub(V1, V2);
      printf("\nResultado:%d", resultado);
      return 2;
  }



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

}

int soma(int num1, int num2)
{
    int res;
    res = num1 + num2;
    return(res);

}

int sub(int num1, int num2)
{
    int res;
    res = num1 - num2;
    return(res);
}

int fim()
{
    printf("\nObrigado por utilizar a CALCVITOR 2.0");
    return 0;
}
