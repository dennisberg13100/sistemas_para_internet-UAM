#include <stdio.h>

/* CONCEITO DE REPETIÇÃO COM TESTE NO INÍCIO
 *
 * fatorial 4! = 1*2*3*4 conceito matemático de fatorial
 */

int main ()
{
    int n, i, fatorial;
    printf("Entre o valor de n (0 <= n < 13): ");
    scanf(" %d", &n);
    fatorial = 1;
    i = 1;
    while (i <= n)
    {
        fatorial *= i;
        i++;
    };

    printf("%d! = %d\n", n , fatorial);

    return 0;
}