#include <stdio.h>
#include <stdlib.h>

int main() {
  int vezes;
  int resultados[6];
  do {
    printf("\ninsira a quantidade de vezes que o dado será lançado: \n");
    if (scanf("%d", &vezes) != 1 || vezes == 0) {
      printf("tchauuu!\n");
      break;
    }

    // zera a array de resultados
    for (int i = 0; i < 6; i++) {
      resultados[i] = 0;
    }

    // array que armazena o numero de vezes que cada face apareceu
    // lança o dado n vezes
    for (int i = 0; i < vezes; i++) {
      int r = rand() % 6;
      resultados[r]++;
      // imprime cada lançamento do dado na tela
      printf("%d  ", r + 1);
    }
    // gera as estatisticas
    for (int i = 0; i < 6; i++) {

      int face = i + 1;
      int n = resultados[i];
      float porcentagem = (float)n / vezes;
      // evita divisão por zero
      if (n == 0) {
        porcentagem = 0.0;
      }
      printf(
          "\nface %d, apareceu %d vezes, representa %.2f%% dos lançamentos\n",
          face, n, porcentagem);
    }

  } while (1);

  return 0;
}
