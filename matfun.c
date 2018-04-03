#include "stdio.h"

int mat(int a[2][2], int b[2][2]);

int main()
{
  int a[2][2], b[2][2];
  int i, j;

  for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEntre com o elemento %d-%d da matriz A : ", i, j);
			scanf("%d", &a[i][j]);
		}
}


  for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEntre com o elemento %d-%d da matriz B : ", i, j);
			scanf("%d", &b[i][j]);
		}
}



printf("\n a Soma das matrizes eh:\n");

mat(a, b);





}

int mat(int a[2][2], int b[2][2])
{
  int matc[2][2];
  int i,j;

  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      matc[i][j] = a[i][j] + b[i][j];
    }
}

for(i=0;i<2;i++)
  {
    	printf("| ");
    for(j=0;j<2;j++)
    {
      printf("%d ", matc[i][j]);

    }
    	printf("|\n");
}






}
