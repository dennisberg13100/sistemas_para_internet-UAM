#include <stdio.h> 

int main () 
{
    int dia; 
    printf("Digite o dia da semana: ");
    scanf("%d",&dia);

    switch(dia)
    {
        case 1: 
            printf("Domingo\n");
            break;
        case 2: 
            printf("segunda-feira\n");
            break;
        case 3: 
            printf("Terça-feira\n");
            break;
        case 4: 
            printf("Quarta-feira\n");
            break;
        case 5: 
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sextou\n");
            break;
        case 7: 
            printf("Sabado\n");
            break;
    }
}