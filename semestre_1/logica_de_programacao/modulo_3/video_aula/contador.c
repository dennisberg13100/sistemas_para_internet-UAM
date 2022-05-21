#include <stdio.h>

int main () 
{
    int contador = 0;
    do
    {
        printf("contador = %d\n", contador );
        contador++;
    } while (contador < 5);
    
    printf("Acabou!!!\n");
    return 0;
}