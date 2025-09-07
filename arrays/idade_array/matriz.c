#include <stdbool.h>
#include <stdio.h>

int main() {
  int matriz[3][3];
  int valor;
  bool encontrado;

  printf("Digite os elementos da matriz 3x3 (valores únicos):\n");
  // loop de nove tres linhas e tres colunas aninhado
  for (int m = 0; m < 3; m++) {
    for (int n = 0; n < 3; n++) {

      // executa essa rotina de adição enquanto a variável de controle econtrado
      // for verdadeira
      do {
        encontrado = false;
        printf("Elemento [%d][%d]: ", m, n);
        scanf("%d", &valor);

        // varre a matriz até os valores de m e n já inseridos a procura do
        // elemento novo inseridos
        for (int j = 0; j <= m; j++) {
          for (int k = 0; k <= n; k++) {
            if (matriz[j][k] == valor) {
              // caso exista valor na matriz igual ao inserido define
              // encontrado = true o que fará o laço do - while rodar novamente
              // com os mesmos valores
              encontrado = true;
              break; // sai do for interno
            }
          }
          if (encontrado)
            break; // sai do for externo se encontrou numero
        }

        if (encontrado) { // avias o usuário que o número já existe na matriz
          printf("Valor já existe na matriz. Digite outro valor.\n");
        }
      } while (encontrado); // mantem a rotina de inserção com mesmo m e n até a
                            // inserção de um número novo

      matriz[m][n] = valor; // adiciona o número na matriz
    }
  }

  printf("\nMatriz inserida:\n");
  // varre a matriz inteira para imprimir cada elemento
  for (int m = 0; m < 3; m++) {
    for (int n = 0; n < 3; n++) {
      printf("%3d ", matriz[m][n]);
    }
    printf("\n");
  }

  return 0;
}
