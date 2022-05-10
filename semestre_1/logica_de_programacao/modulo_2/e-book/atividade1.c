#include <stdio.h> 

int main () 
{
    int a, b;
    printf("Digite um valor para \'a\': \n");
    scanf("%d", &a);
    printf("Digie um valor para \'b\': \n");
    scanf("%d", &b);
    if(b = a)
    {
        if(a > 5)
        {
            printf("\'b\' é maior que 5!");    
        }
        else
        {
            printf("\'b\' não é maior do que 5!");
        }
    }
    return 0;
}