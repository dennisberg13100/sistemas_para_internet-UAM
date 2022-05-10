#include <stdio.h> 

/* ESTRUTUTRA DE DECISÃO DE MULTIPLA ESCOLHA
 *
 * PROBLEMA: construa um alogritmo que, baseado no número inteiro
 * selecionando de 1 a 5, uma ação de escrita seja executada, 
 * conforme a tabela a seguir:
 * 
 * VALOR    AÇÃO DO SISTEMA
 * 1        Ligar luzes
 * 2        Ligar máquinas
 * 3        Ligar aquecimento
 * 4        Ligar refrigeração
 * 5        Ligar alarme
 * outro    Opção inválida
 */

int main()
{
    int option;
    printf("VALOR\tAÇÃO DO SISTEMA\n1\t\tLigar luzes\n2\t\tLigar máquinas\n3\t\tLigar aquecimento\n4\t\tLigar refrigeração\n5\t\tLigar alarme\noutro\tOpção inválida\n");
    printf("Digite o número da operação que deseja realizar: \n");
    scanf(" %d", &option);
    switch (option)
    {
    case 1:
        printf("Ligar luzes\n");
        break;
    
    case 2:
        printf("Ligar máquinas\n");
        break;

    case 3:
        printf("Ligar aquecimento\n");
        break;
    
    case 4:
        printf("Ligar refrigeração\n");
        break;
    
    case 5:
        printf("Ligar alarme\n");
        break;

    default:
        printf("Opção inválida\n");
        break;
    }
}