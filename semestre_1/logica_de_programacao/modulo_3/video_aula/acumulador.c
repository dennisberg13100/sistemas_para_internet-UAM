#include <stdio.h>

int main () 
{
    int acum = 0; 
    int count = 0; 
    int y = 0; 
    do 
    {
        printf("Valor = ");
        scanf(" %d", &y);
        acum += y;
        count ++;
    }
    while(count < 3 );

    printf("Acumulados = %d\n", acum);

    return 0;
}