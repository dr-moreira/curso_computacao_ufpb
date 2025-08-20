#include <stdio.h>

int main() {
  int X;
  float S = 0;
  FILE *arq;

  arq = fopen("valores.txt", "r");
  if (arq == NULL)
    printf("Erro ao abrir arquivo!\n");

  fscanf(arq, "%d", &X);
  while (!feof(arq)) {
    S = S + X;
    fscanf(arq, "%d", &X);
  }

  printf("O resultado da soma é: %.0f \n", S);
  fclose(arq);

  return 0;
}
