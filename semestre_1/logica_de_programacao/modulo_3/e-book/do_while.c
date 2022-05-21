#include <stdio.h>

int main()
{
    int numero, soma; 
    soma = 0;
    numero = 0;
    
    do 
    {
        if((numero % 2 ) == 0)
        {
            soma += numero;
        }
        numero ++;
    } while( numero < 100);

    printf("A soma dos númeors pares até cem é %d.\n", soma);

    return 0;
}