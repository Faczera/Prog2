#include <stdio.h>
#include <math.h>
#define TAM 3
struct aluno
{
    char nome[100];
    float nota;
};

typedef struct aluno Aluno;

void imprime(Aluno *al);
void ler(Aluno *al);

int main()
{
Aluno aluno[TAM];

ler(&aluno);
imprime(aluno);

return 0;


}

void ler(Aluno *al)
{
    int i;
    for(i=0;i<TAM;i++)
    {
    printf("\nEntre com seu nome %d:", i+1);
    gets(al[i].nome);

    printf("\nEntre com a nota do aluno %d:", i+1);
    scanf("%f", &al[i].nota);
    fflush(stdin);
    }
}


void imprime(Aluno *al)
{
    int i;
    for(i=0;i<TAM;i++)
    {
    printf("\nNome do aluno:%s\n",al[i].nome);
    printf("\nNota do aluno:%.2f",al[i].nota);
    }

}
