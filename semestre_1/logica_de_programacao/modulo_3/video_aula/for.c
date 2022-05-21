#include <stdio.h>

int main()
{
    int i;
    for( i = 9; i >= 3; i--)
    {
        if((i % 3) == 0)
        {
            printf("\t%2d\n", i);
        }
    }
    return 0;
}