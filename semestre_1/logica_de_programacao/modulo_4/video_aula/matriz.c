#include <stdio.h>

int main()
{
  int matriz[3][3];
  printf("Digite valores para os elemento da matriz:\n\n");

  for(int i = 0; i < 3; i++)
    for( int j = 0; j < 3; j++)
    {
      printf("Elemento[%d][%d] = ", i, j);
      scanf(" %d", &matriz[i][j]);
    }

  printf("\n\n ------------------- Saida de Dados -------------------\n\n");

  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
    {
      printf("Elemento[%d][%d] = %d\n", i, j, matriz[i][j]);
    }

  return 0;
}