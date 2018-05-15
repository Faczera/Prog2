#include <stdio.h>
#include <math.h>

struct aluno
{
    char nome[100];
    float nota;
};

typedef struct aluno Aluno;

void imprime(Aluno al);
void ler(Aluno *al);

int main()
{
Aluno aluno;

ler(&aluno);
imprime(aluno);


}

void ler(Aluno *al)
{
    printf("\nEntre com seu nome:");
    gets(al->nome);

    printf("\nEntre com a nota:");
    scanf("%f", &al->nota);
}

void imprime(Aluno al)
{
    printf("\Nome do aluno:%s\n",al.nome);
    printf("\nNota do aluno:%.2f",al.nota);

}
