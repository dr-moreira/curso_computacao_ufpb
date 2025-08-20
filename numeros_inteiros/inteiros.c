#include <stdio.h>

int main() {
  int inicio, fim;

  printf("digite o número inicial\n");
  scanf("%d", &inicio);

  printf("digite o número final\n");
  scanf("%d", &fim);

  while (inicio <= fim) {
    printf("\n%d\n", inicio);
    inicio = inicio + 1;
  }
  return 0;
}
