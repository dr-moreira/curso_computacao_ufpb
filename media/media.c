#include <stdio.h>  // necessário devio o uso da função printf()
#include <stdlib.h> // Necessário devido o uso da função atof()

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Uso: %s <Primeiro número> <Segundo Número>\n", argv[0]);
        return 1; // Indica execução com erro
    }

    // Converte as strings da entrada em números do tipo float (ponto flutuante)
    float value1 = atof(argv[1]);
    float value2 = atof(argv[2]);

    printf("A média Aritmética entre %f e %f é: %f\n", value1, value2, (value1+value2)/2);

    return 0; // Indica execução com sucesso
}
