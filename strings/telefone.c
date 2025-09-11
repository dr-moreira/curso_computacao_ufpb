#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char n_tel[20];

  printf("insira o número de telefone: ");

  if (fgets(n_tel, sizeof(n_tel), stdin) != NULL) {
    if (strlen(n_tel) < 8) {
      printf("menor que sete\n");
    } else {
      printf("%s, %lu", n_tel, strlen(n_tel));
    }
  }

  return 0;
}
