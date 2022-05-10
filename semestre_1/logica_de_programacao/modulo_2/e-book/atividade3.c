#include <stdio.h>

int main() 
{
    int a = 1;
    int c = 0;

    do 
    {
        a = a+2; 
        printf(" %d", a);
        c++;
    }
    while(c < 10);

    printf(" %d", a);

    return 0; 
}