#include <stdio.h>

int main() {

  float altura[10];
  char sexo[10];
  int maior_idx;
  int menor_idx;
  float menor_altura;
  float maior_altura;

  for (int i = 0; i < 10; i++) {
    printf("introduza a altura: \n");
    scanf("%f", &altura[i]);

    printf("digite 'm' para Masculino e 'f' para Feminino: \n");
    scanf(" %c", &sexo[i]);
  }
  // varre a matriz em busca do maior e menor indice

  maior_altura = altura[0];
  menor_altura = altura[0];
  maior_idx = 0;
  menor_idx = 0;

  for (int i = 0; i < 10; i++) {
    if (menor_altura > altura[i]) {
      menor_altura = altura[i];
      menor_idx = i;
    }

    if (maior_altura < altura[i]) {
      maior_altura = altura[i];
      maior_idx = i;
    }
  }

  // imprime a maior e menor altura e o sexo associado
  printf("maior altura = %f, sexo = %c, no indice = %d\n", altura[maior_idx],
         sexo[maior_idx], maior_idx);

  printf("menor altura = %f, sexo = %c, no indice = %d\n", altura[menor_idx],
         sexo[menor_idx], menor_idx);

  // determina a média do sexo masculino e imprime a média e o número de
  // indivíduos
  int n_masculino = 0;
  float alturas_masculino = 0.0;
  for (int i = 0; i < 10; i++) {
    if (sexo[i] == 'm') {
      alturas_masculino = alturas_masculino + altura[i];
      n_masculino++;
    }
  }
  printf("média de altura masculino: %.2f números de indivíduos: %d\n",
         alturas_masculino / (float)n_masculino, n_masculino);

  // determina a média do sexo feminino e imprime a média e o número de
  // indivíduos

  int n_feminino = 0;
  float alturas_feminino = 0.0;
  for (int i = 0; i < 10; i++) {
    if (sexo[i] == 'f') {
      alturas_feminino = alturas_feminino + altura[i];
      n_feminino++;
    }
  }
  printf("média de altura feminino: %.2f números de indivíduos: %d\n",
         alturas_feminino / (float)n_feminino, n_feminino);

  return 0;
}
