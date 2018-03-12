#include <stdio.h>
#include <string.h>
void strin();
void creditos();

int main()
{
    strin();

    char pala1[20];
    char pala2[20
    ];
    int tam, tam2;
    int retorno;


    printf("\nEntre com a primeira palavra:");
    scanf("%s", &pala1);

    printf("\nEntre com a segunda palavra:");
    scanf("%s", &pala2);

    tam=strlen(pala1);
    tam2=strlen(pala2);

if(strcmp(pala1, pala2)==0)
{
    printf("\n\nAs palavras sao iguais\n\n");
}
else{
    printf("\n\nAs palavras sao diferentes\n\n");
}


    if(strcmp(pala1, pala2)<0)
{
    printf("\n\nA primeira palavra eh menor que a segunda\n\n");
}

 if(strcmp(pala1, pala2)==0)
{
    printf("\n\nAs palavras sao iguais\n\n");
}


 if(strcmp(pala1, pala2)>0)
{
    printf("\n\nA primeira palavra eh maior que a segunda\n\n");
}


printf("\n\n A primeira palavra tem %d letras\n\n", tam);

printf("\n\n A segunda palavra tem %d letras\n\n", tam2);

creditos();


return 0;
}




void strin()
{
    printf("\n\n\nBEM VINDO AO STRINGUEITOR VSOUZA 2000\n\n\n");

    printf("\n\n\nTESTE SUAS STRINGS LOGO ABAIXO, OBRIGADO POR UTILIZAR\n\n\n");
}


void creditos()
{
    printf("\n\n\nDesenvolvido por VSouza Projetos & CyberSecurity, todos os direitos reservados.\n\n\n");
}
