#include <stdio.h>

int main()
{
    int i, a, b; 
    a = 0; 
    b = 0; 
    for(i = 0; i <= 5; i++)
    {
        b = a + b;
        a = a + 2;
    }

    printf("O valor de 'b' é: %d.\n", b);
    
    return 0;
}