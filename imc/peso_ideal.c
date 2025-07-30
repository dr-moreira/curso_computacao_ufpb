#include <stdio.h>

int main() {
  float peso, altura;
  char sexo;

  printf("Digite f para feminino ou m para masculino\n");
  scanf("%c", &sexo);

  printf("Digite a altura: \n");
  scanf("%f", &altura);
  
  if ( sexo == 'm') {
    peso = (72.7 * altura) - 58;
  } else {
    peso = (62.1 * altura) - 44.7;
  }
  printf("Seu peso ideal é %.2f\n", peso);

 return 0;

} 
