#include <stdio.h>

int main(){
  float media;
  int n;
  int i=0;
  float soma = 0;

  FILE *arq;

  arq=fopen("arquivo.txt", "r)");

  if (arq ==0){
    printf("ERRO ao abrir arquivo\n");

  }

  fscanf(arq, "%d", &n);

  while(!feof(arq)){

    soma = soma + n;
    i = i + 1;
    fscanf(arq, "%d", &n);
    

  }
fclose(arq);

  printf("soma: %.2f / i: %d\n", soma, i);
  media = soma/i;
  printf("soma média é: %.2f\n", media);


}
