#include <stdio.h> 

/* Esrtutura de decisão simples 
 * 
 * Implemente uma lágica de programação para um radar em que,
 * no caso da velocidade de um veículo ter sido excedida acima de 60 km/h 
 * registre um multa.
 */

int main () {
    int velocidade;
    char placa[60];

    printf("Qual a placa do carro: \n");
    scanf("%s", placa);
    printf("Qual a velocidade do carro: \n");
    scanf("%d", &velocidade);

    if(velocidade >= 60) 
    {
        printf("Multa por excesso de velocidade para a placa: %s \n", placa);
    }

    return 0;
}