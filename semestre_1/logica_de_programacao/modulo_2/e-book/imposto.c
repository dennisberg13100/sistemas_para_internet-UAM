#include <stdio.h>

/* ESDTRUTURA DE DECISÃO HOMOGÊNEA
 *
 * PROBLEMA: implemente uma lógica de programação em que um morador de
 * Curitiba, que tenha casa própria e renda superior a R$ 50.000,00, deva pagar
 * um imposto. 
 */

int main()
{
    char casa_propria, mora_curitiba;
    int renda;

    printf("Você mora em Curitiba? (s/n)\n");
    scanf(" %c", &mora_curitiba);
    printf("Você mora em uma casa própria? (s/n)\n");
    scanf(" %c", &casa_propria);
    printf("Qual a sua renda anual?\nR$ ");
    scanf("%d", &renda);

    if(mora_curitiba == 's')
    {
        if(casa_propria == 's')
        {
            if(renda >= 50000)
            {
                printf("paga imposto!\n");
            }
        }
    }
}