#include <stdio.h> 

int main () 
{
    int media, faltas;
    printf("%s", "Digite a média: ");
    scanf("%d", &media);
    printf("%s", "Digite o número de faltas: ");
    scanf("%d", &faltas); 

    if(media >= 5 && faltas <= 20)
    {
        printf("%s", "Aluno foi aprovado!\n");
    }
    else
    {
        printf("%s", "Aluno foi reprovado!\n");
    }
    
    return 0;
}
        