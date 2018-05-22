#include <stdio.h>
#include <math.h>
#include <locale.h>
#define TAM 3
struct aluno
{
    char nome[100];
    float nota;
    float nota1;
};

typedef struct aluno Aluno;


void imprime(Aluno *al);
void ler(Aluno *al);

int main()
{
setlocale(LC_ALL, "Portuguese");
Aluno aluno[TAM];

printf("\n\nSistema Gestor de notas 4.0\n\n");
printf("\n\nDesenvolvido por TOTVS\n\n");

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

    printf("\nEntre com a av1 do aluno %d:", i+1);
    scanf("%f", &al[i].nota);

    printf("\nEntre com a av2 do aluno %d:", i+1);
    scanf("%f", &al[i].nota1);
    fflush(stdin);
    }
}


void imprime(Aluno *al)
{
    int i;
    for(i=0;i<TAM;i++)
    {
    printf("\nNome do aluno:%s\n",al[i].nome);
    printf("\nAv1 do aluno:%.2f",al[i].nota);
    printf("\nAv2 do aluno:%.2f\n",al[i].nota1);

    }

    printf("\n**********************************\n\n");
    printf("\n\nRelatório parcial da AV2\n\n");
    printf("\n**********************************\n\n");
    printf("\nNome  AV1  AV2  Resultado\n\n");

    printf("\n==================================");

    for(i=0;i<TAM;i++)
    {
        if((al[i].nota1+al[i].nota)/2>=6)
        {
            printf("\n %s\t%.2f\t%.2f\tPassou", al[i].nome, al[i].nota, al[i].nota1);
        }
        else
        {
            printf("\n %s\t%.2f\t%.2f\tAV3", al[i].nome, al[i].nota, al[i].nota1);
        }


    }

}
