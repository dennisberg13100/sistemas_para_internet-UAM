#include <stdio.h> 

/* ESTRUTURA D EDECISÃO COMPOSTA
 *
 * PROBLEMA: implemente uma solução lógica de programação em que seja
 * verificada a permissão de entrada em um estabelecimento baseado na idade
 * do indivíduo. A enteda é permitida para maiores de idade (18 anos), porém, 
 * deve ser proibida para menores. *
 */

int main ()
{
    int idade; 
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    if(idade >= 18) 
    {
        printf("entrada permitida\n");
    }
    else 
    {
        printf("entrada proibida\n");
    }
}