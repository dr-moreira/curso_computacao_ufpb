#include <stdio.h>

#define MAX_INT 1024

int main() {

  int n;
  int soma, maior, menor = 0;

  printf("introduza o número de inteiros que serão inseridos: ");
  scanf("%d", &n);

  if (n > MAX_INT) {
    printf("O número de inteiros deve ser menor que %d", MAX_INT);
    return 1;
  }
  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("\nintroduza um número inteiro [%d/%d]: \n", i, n);
    scanf("%d", &arr[i]);
  }
  menor = maior = arr[0];

  for (int i = 0; i < n; i++) {

    if (i % 10 == 0) {
      printf("\n");
    }

    soma = soma + arr[i];

    if (maior < arr[i]) {
      maior = arr[i];
    }

    if (menor > arr[i]) {
      menor = arr[i];
    }

    printf("%d  ", arr[i]);
  }
  printf("\no menor número foi %d \n", menor);
  printf("o maior número foi %d \n", maior);
  printf("o média de todos os números foi %.2f \n", (float)soma / n);

  return 0;
}
