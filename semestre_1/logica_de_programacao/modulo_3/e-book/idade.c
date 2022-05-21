#include <stdio.h>

int main() 
{
    float idade, media, soma;
    int controle;
    soma = 0; 
    for(controle = 1; controle <= 5; controle++)
    {
        printf("Qual a idade do aluno?\n");
        scanf(" %f", &idade);
        soma += idade;
    }

    media = soma / 5;
    printf("A idade média dos alumos é de %.2f anos.\n", media);

    return 0;

}