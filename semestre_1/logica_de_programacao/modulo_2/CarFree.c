#include <stdio.h> 
#include <string.h>

/* VAMOS PRATICAR
 * Após definirmos e entendermos melhor os conceitos do laço de 
 * repetição WHILE, chegou a hora de aplicarmos nossos conhecimentos 
 * em um exercício de fixação. Bom, nosso exercício consiste em 
 * realizar um algoritmo em VisualG que resolva o seguinte problema:
 * 
 * A concessionária de veículos CarFree está realizando uma promoção 
 * para encerrar seu estoque de veículos O algoritmo deverá calcular 
 * e exibir o desconto para os clientes que foram visitar a loja e 
 * desejam uma simulação. O desconto deverá ser de acordo com o ano 
 * do veículo que está no estoque. Sendo assim, para veículos que 
 * possuem o ano de fabricação até o ano de 2010, deverá ser aplicado
 * um desconto de 12%; para veículos que possuem ano de fabricação 
 * acima de 2010, desconto de 7%. O algoritmo deverá solicitar sempre 
 * ao final da geração dos descontos se o usuário deseja realizar um 
 * novo cálculo de desconto, até que a resposta seja N - Não.
 * 
 * Após isso, o sistema se encerra totalmente. Vamos para esse novo 
 * desafio e praticar um pouco? Ao final disponibilize seu trabalho 
 * no fórum da seção.
 */

int main() 
{
    char continuar[20]; // S pa sim continuar com o programa 
    int ano; 
    float preco;
    do
    {
        printf("Qual o ano do carro?\nR: ");
        scanf(" %d", &ano);
        printf("Qual o preço do carro?\nR: R$ ");
        scanf(" %f", &preco);

        printf("\nRealizando o cálculo de desconto...\n\n");

        if(ano > 2010)
        {
            preco *= 0.93;
        }
        else 
        {
            preco *= 0.88;
        }

        printf("O carro do ano %d vai sair por R$ %.2f.\n\n", ano, preco);

        printf("Deseja realizar um outro orçamento?\nDigite 'S' Sim e 'N' Não.\n");
        scanf(" %s", continuar);
        // Qualquer coisa diferente de de "N" irá fazer o programa reiniciar. 
    }
    while(strcmp(continuar, "N") != 0);
    printf("exit...\n");
}

