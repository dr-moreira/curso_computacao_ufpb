#include <stdio.h>

int main() {
  FILE *arquivo_entrada; // Arquivo csv de entrada
  FILE *arquivo_col1, *arquivo_col2,
      *arquivo_col3; // Define variáveis para os arquivos de saída
  int valor_col1;  // variável para registrar os valores da coluna 1
  float valor_col2; // variável para registrar os valores da coluna 2
  int valor_col3; // variável para registrar os valores da coluna 3
  float soma_col2 = 0.0;
  int contador_linhas = 0; //Variável para contar as linhas lidas (toda vez que entra no loop while)
  float media = 0.0;

  // Abrir arquivo de entrada
  arquivo_entrada = fopen("bd.csv", "r");
  if (arquivo_entrada == NULL) {
    printf("Erro ao abrir o arquivo bd.csv\n");
    return 1;
  }

  // Criar arquivos de saída para cada coluna
  arquivo_col1 = fopen("coluna1.txt", "w");
  arquivo_col2 = fopen("coluna2.txt", "w");
  arquivo_col3 = fopen("coluna3.txt", "w");

  // CHeca se foi possível criar os arquivos
  if (arquivo_col1 == NULL || arquivo_col2 == NULL || arquivo_col3 == NULL) {
    printf("Erro ao criar os arquivos de saída\n");
    fclose(arquivo_entrada);
    return 1; // Retorna 1 = erro para o sitema operacional e sai do programa
  }

  // Processa a primeira linha do arquivo de entrada
  fscanf(arquivo_entrada, "%d %f %d", &valor_col1, &valor_col2, &valor_col3);

  // Processar cada linha do arquivo usando fscanf com feof()
  while (!feof(arquivo_entrada)) {
    // Escrever cada valor em seu respectivo arquivo
    fprintf(arquivo_col1, "%d\n", valor_col1);
    fprintf(arquivo_col2, "%.2f\n", valor_col2);
    fprintf(arquivo_col3, "%d\n", valor_col3);

    // Somar valores da segunda coluna para calcular a média
    soma_col2 += valor_col2;
    contador_linhas++; // conta cada linha lida para usar como denominador na média

    fscanf(arquivo_entrada, "%d %f %d", &valor_col1, &valor_col2,
           &valor_col3);
  }

  // Fechar todos os arquivos
  fclose(arquivo_entrada);
  fclose(arquivo_col1);
  fclose(arquivo_col2);
  fclose(arquivo_col3);

  // Calcular e mostrar a média da segunda coluna
  if (contador_linhas > 0) {
    media = soma_col2 / contador_linhas;
    printf("Média dos valores da 2ª coluna: %.2f\n", media);
    printf("Total de linhas processadas: %d\n", contador_linhas);
  } else {
    printf("Nenhuma linha válida foi encontrada no arquivo.\n");
  }

  printf("\nArquivos criados:\n");
  printf("- coluna1.txt (números da linha)\n");
  printf("- coluna2.txt (valores decimais)\n");
  printf("- coluna3.txt (terceiros valores)\n");

  return 0; // Retorna finalização com sucesso para o sistema operacional e sai do programa
}
