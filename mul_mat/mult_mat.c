#include <stdio.h>

void imprime_matriz(int m, int n, int matriz[m][n]) {
  for (int i = 0; i < m; i++) {
    printf("\n");
    for (int j = 0; j < n; j++) {
      printf("%d  ", matriz[i][j]);
    }
  }
  printf("\n");
}

void multiplica_matriz(int n_lin_A, int n_col_A, int n_lin_B, int n_col_B,
                       int A[n_lin_A][n_col_A], int B[n_lin_B][n_col_B],
                       int C[n_lin_A][n_col_B]) {
  for (int i = 0; i < n_lin_A; i++) {
    for (int j = 0; j < n_col_B; j++) {
      for (int k = 0; k < n_col_A; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

int main() {

  int n_col_A, n_col_B, n_lin_A, n_lin_B;
  printf("Insira o número de linhas da primeira matriz A\n");
  scanf("%d", &n_lin_A);

  printf("Insira o número de colunas da primeira matriz A\n");
  scanf("%d", &n_col_A);

  printf("Insira o número de linhas da segunda matriz B\n");
  scanf("%d", &n_lin_B);

  printf("Insira o número de colunas da segunda matriz B\n");
  scanf("%d", &n_col_B);

  if (n_col_A != n_lin_B) {
    printf(
        "Erro: número de colunas de A deve ser igual número de linhas de B\n");
    return 1;
  }

  // define dinamicamente o tamanho das matrizes A,B e C
  int A[n_lin_A][n_col_A];
  int B[n_lin_B][n_col_B];
  int C[n_lin_A][n_col_B];

  // zera a matriz C de resultados
  for (int i = 0; i < n_lin_A; i++) {
    for (int j = 0; j < n_col_B; j++) {
      C[i][j] = 0;
    }
  }
  // Adiciona elementos em A
  for (int i = 0; i < n_lin_A; i++) {
    for (int j = 0; j < n_col_A; j++) {
      printf("Introduza o elemento a[%d][%d] da Matriz A: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  // Adiciona elementos em B
  for (int i = 0; i < n_lin_B; i++) {
    for (int j = 0; j < n_col_B; j++) {
      printf("Introduza o elemento a[%d][%d] da Matriz B: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }
  // imprime_matriz(n_lin_A, n_col_A, A);
  // imprime_matriz(n_lin_B, n_col_B, B);
  multiplica_matriz(n_lin_A, n_col_A, n_lin_B, n_col_B, A, B, C);
  imprime_matriz(n_lin_A, n_col_B, C);

  return 0;
}
