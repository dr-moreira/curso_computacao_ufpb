#include <stdio.h>

int main() {
  int n1, soma_i;
  float n2, soma_f;
  FILE *file;

  file = fopen("arquivo.txt", "r");

  for (int i = 0; i < 3; i++) {
    fscanf(file, "%d", &n1);
    fscanf(file, "%f", &n2);
    soma_i += n1;
    soma_f += n2;
  }
  printf("%d\n", soma_i);
  printf("%f\n", soma_f);

  fclose(file);
}
