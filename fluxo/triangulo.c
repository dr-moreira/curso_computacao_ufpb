/*
Algoritmo 3.6 - Tipo de Triângulo
FORBELLONE, André Luiz Villar; EBERSPÄCHER, Henri Frederico.
Lógica de programação: a construção de algoritmos e estruturas de dados. 3. ed. São Paulo: Prentice Hall, 2005.
*/

#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &lado3);

    if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2))
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("Triângulo equilátero.\n");
        }
        else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
        {
            printf("Triângulo isósceles.\n");
        }
        else
        {
            printf("Triângulo escaleno.\n");
        }
    }
    else
    {
        printf("Os lados não formam um triângulo.\n");
    }

    return 0;
}