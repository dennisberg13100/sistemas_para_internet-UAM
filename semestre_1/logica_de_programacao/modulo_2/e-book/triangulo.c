#include <stdio.h>

/* ESTRUTURA DE DECISÃO HETEROGÊNEA
 *
 * PROBLEMA: dado três lados de um triângulo, identifique se o mesmo é
 * equilátero, isóceles ou escaleno (FORBELLONE; EBERSPÄCHERR, 2005, P.39).
 */

int main() 
{
    int a, b, c;
    printf("Digite o tamanho dos três lados do triângulo: \n");
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);

    if((a < b + c) && (b < a + c) && (c < a + b))
    {
        if(a == b && b == c)
        {
            printf("triângulo equilátero\n");
        }
        else 
        {
            if(a == b || a == c || b == c)
            {
                printf("triângulo esóceles\n");
            }
            else 
            {
                printf("triângulo escaleno\n");
            }
        }
    }
}