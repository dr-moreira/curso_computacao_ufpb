#include <stdio.h>

int main() {
  int n;
  int resultado = 1;
  int contador;

  printf("Introduza um número inteiro positivo:\n");
  scanf("%d", &n);

  if (n < 0) {
    printf("o Número deve ser positivo\n");
    return 1;
  }

  if (n == 0 || n == 1) {
    resultado = 1;
  } else {
    contador = n;

    while (contador > 1) {
      resultado = resultado * contador;
      contador = contador - 1;
    }
  }
  printf("Resultado é: %d\n", resultado);

  return 0;
}
