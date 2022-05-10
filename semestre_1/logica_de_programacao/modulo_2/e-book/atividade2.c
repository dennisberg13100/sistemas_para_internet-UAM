#include <stdio.h>

int main()
{
    char sinal[20];
    
    printf("Digite a cor do sinal: \n");
    scanf("%s", sinal);

    // como não é possivel passar uma string em um switch
    //eu passei a 4 letra (pois ela difere nas quatro cores)
    switch(sinal[3])
    {
        case 'm':
            printf("Pare!\n");
            break;
        case 'r':
            printf("Atenção!\n");
            break;
        case 'd': 
            printf("Prossiga!\n");
            break;
        case 'l':
            printf("Em manutenção!\n");
            break;
        default:
            printf("Erro no sinal!\n");
            break;
    }
        
    return 0;
}