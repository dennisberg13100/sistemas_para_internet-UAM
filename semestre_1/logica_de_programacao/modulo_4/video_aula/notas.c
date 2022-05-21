#include <stdio.h>

int main ()
{
  float notas[5];
  for(int i =0; i < 5; i++)
  {
    int nota = i+1;
    printf("Digite a nota %d: ", nota);
    scanf(" %f", &notas[i]);
  }

  printf("\nExibindo os Valores do Vetor \n\n");
  for(int i = 0; i < 5; i++) {
    printf("notas[%d] = %.1f\n", i, notas[i]);
  }

  return 0;
}