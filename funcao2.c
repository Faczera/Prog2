#include<stdio.h>


int soma(int num1, int num2);

int main(void)
{
  int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);


  resultado = soma(V1,V2);
  printf("Resultado = %d\n", resultado);
  getch();
  return 0;
}

int soma(int num1, int num2)
{
  int resultado;
  resultado = num1 + num2;
  return(resultado);
}
