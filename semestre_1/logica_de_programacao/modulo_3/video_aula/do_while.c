#include <stdio.h>

int main() 
{
    int x, fat;
    printf("Quantas vezes eu tenho que repetir? \n");
    scanf(" %d", &x);

    while (x > 0)
    {
        printf("Repetindo...\n");
        x--;
    }

    return 0;
}