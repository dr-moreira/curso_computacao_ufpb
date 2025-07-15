#include <stdio.h>

int main(){
  
  float sm, sf, qti;
  
  printf("Insira o valor do salário mínimo atual em reais (R$): \n");
  scanf("%f",&sm);
  
  printf("Insira o valor do salário mensal de um funcionário (R$): \n");
  scanf("%f",&sf);

  qti = sf / sm;
  
  printf("O funcionário recebe %.2f salários mínimos mensais \n", qti);
}
