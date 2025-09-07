#include <stdio.h>

int main(){
  int valores[500];

  for (int i=0; i<500; i++){
    valores[i] = i+1;
  }

  for (int i=0; i<500; i++){
    printf("%d ", valores[i]);
  }

  return 0;
}
