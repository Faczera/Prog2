#include <stdio.h>

typedef struct aluno
{
    char nome[100];
    float av1, av2, av3;
}Aluno;

void incluir();
void ler();
int main()
{
    Aluno alu;

    incluir(alu);
    ler(alu);

    return 0;

}

void incluir()
{
    Aluno aluno;
    FILE *fp = fopen("teste.bin", "ab");

    printf("\nEntre com o nome:");
    gets(aluno.nome);
    fflush(stdin);

    printf("\nEntre com a AV1:");
    scanf("%f", &aluno.av1);

    printf("\nEntre com a AV2:");
    scanf("%f", &aluno.av2);

    printf("\nEntre com a AV3:");
    scanf("%f", &aluno.av3);

    fwrite(&aluno, sizeof(Aluno), 1 , fp);

    fclose(fp);


}

void ler()
{
    Aluno aluno;
    FILE *fp = fopen("teste.bin", "rb");

    while(fread(&aluno, sizeof(aluno), 1, fp))
    {
        printf("Nome:%s", aluno.nome);
        printf("AV1:%.2f", aluno.av1);
        printf("AV2:%.2f", aluno.av2);
        printf("AV3:%.2f", aluno.av3);

    }

    fclose(fp);
}
