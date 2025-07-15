#include <stdio.h>

int main() {
  float imc, peso, altura;
  printf("Entre com o peso (kg): \n");
  scanf("%f",&peso);

  printf("Entre com Altura (m): \n");
  scanf("%f",&altura);
  imc = peso / (altura * altura);

  printf("o IMC é: %.f \n", imc);

}
