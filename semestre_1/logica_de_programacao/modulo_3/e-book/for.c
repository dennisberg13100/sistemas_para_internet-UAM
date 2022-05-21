#include <stdio.h>

int main()
{
    int contador, soma, numero;
    contador = 0; 
    soma = 0;

    for(contador; contador < 10; contador ++)
    {
        printf("Digite um númeor que deseje somar: \n");
        scanf(" %d", &numero);
        soma += numero;
    }

    printf("A soma dos números é %d\n", soma);

    return 0;
}