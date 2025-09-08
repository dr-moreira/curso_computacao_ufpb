#include <stdio.h>
#include <string.h>

int main() {

  char frase[80];
  int contador, len_str;

  printf("Digite uma string: \n");
  scanf("%s", frase);

  len_str = strlen(frase);
  contador = 1;

  for (int i = 0; i < len_str; i++) {
    printf("\n");
    for (int j = 0; j < contador; j++) {
      printf("%c", frase[j]);
    }
    contador++;
  }

  return 0;
}
