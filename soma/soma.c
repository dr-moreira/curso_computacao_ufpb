#include <stdio.h>

int main() {
  int n1, n2, resultado;
  
  printf("Digite um número inteiro: \n");
  scanf("%d",&n1);
  
  printf("Digite outro número inteiro: \n");
  scanf("%d",&n2);

  resultado = n1 + n2;

  printf("O resultado da soma é: \n");
  printf("%d + %d = %d\n", n1, n2, resultado);

  return 0;
}
