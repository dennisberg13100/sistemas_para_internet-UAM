#include <stdio.h> 

void main () 
{
    // declaração de variáveis do tipo inteiro 
    int a, b, soma;
    printf("Digite um número inteiro: ");
    // recebe um inteiro e armazena na variável a
    scanf("%d", &a);
    // receber um inteiro e armazena na variável b 
    printf("Digite mais um número inteiro: ");
    scanf("%d", &b);
    soma = a + b;
    printf("A soma dos dois números é %d!\n", soma );
}