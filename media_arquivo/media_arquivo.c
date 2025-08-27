#include <stdio.h>
// Programa para ler inteiros de um arquivo texto e imprimir a média aritmética
int main() {
  int n;          // variável para leitura dos inteiros
  int i = 0;      // variável para armazenar a contagem de inteiros
  float soma = 0; // variável para armazenar a soma dos inteiros lidos

  FILE *arq; // ponteiro para aquivo que contem os inteiros

  // comando para abrir o arquivo especificado
  arq = fopen("arquivo.txt", "r)");

  // verifica se o arquivo foi aberto com sucesso
  if (arq == 0) {
    printf("ERRO ao abrir arquivo\n");
  }

  // le um primeiro inteiro
  fscanf(arq, "%d", &n);

  // le os demais inteiros ate o caracter de fim de arquivo
  while (!feof(arq)) {
    // adiciona a variável soma o inteiro lido
    soma = soma + n;
    // adiciona +1 ao contador de inteiros
    i = i + 1;
    // le um novo inteiro do arquivo
    fscanf(arq, "%d", &n);
  }

  // fecha o arquivo aberto anteriormente
  fclose(arq);

  // imprime a média na saida padrão
  printf("A média dos inteiros contidos no aqruivo é: %.2f\n", soma / i);
}
