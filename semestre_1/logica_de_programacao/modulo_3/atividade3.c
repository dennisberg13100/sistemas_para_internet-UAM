#include <stdio.h>

int main()
{
    int count = 0;
    for( count; count <= 100; count++)
    {
        if(count % 2 == 0)
        {
            printf("%d é par!\n", count);
        } 
        else
        {
            printf("%d é impar!\n", count);
        }
    }

    return 0;
}