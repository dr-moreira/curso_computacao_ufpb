#include <stdio.h>

int main(){
  int n, succ, pred;

  printf("insira um número inteiro: \n");
  
  scanf("%d", &n);
  
  succ = n + 1;
  
  pred = n - 1;
  
  printf("O predecessor de %i é %i. \n", n, pred);
  
  printf("O sucessor de %i é %i. \n", n, succ);
}
