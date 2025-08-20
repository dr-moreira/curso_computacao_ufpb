#include <stdbool.h>
#include <stdio.h>

int main() {
  int idade;

  printf("Qual a Idade do Cidadão?\n");
  scanf("%d", &idade);

  if (idade < 16)
    printf("Não votante\n");

  else if (idade >= 18 && idade < 65)
    printf("Eleitor obrigatório\n");

  else if ((idade >= 16 && idade < 18) || idade >= 65)
    printf("Eleitor facultativo\n");

  return 0;
}
