#include <stdio.h> 

int main() 
{
    int numero, acumulador;
    numero = 0;
    acumulador = 0; 
    while (numero < 100)
    {
        acumulador += 10; 
        numero ++;
        printf("%d\n", acumulador);
    }
    return 0;
}