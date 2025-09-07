#include <stdio.h>

int main(){

  int idades[10];
  int soma;
  float media;
  
  for(int i=0; i<10; i++) {
    printf("digite uma idades: \n");
    scanf("%d", &idades[i]);
    soma = soma + idades[i];
  }
  media = (float)soma / 10.0;

  printf("idades acima da média: %.2f\n", media); 
  
  for(int i=0; i<10; i++) {
    if( (float) idades[i] > media) {
      printf("%d\n", idades[i]);
    }
  }
  return 0;

}
