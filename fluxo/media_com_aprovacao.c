/*
Algoritmo 3.4 - Média Aritmética com Aprovação
FORBELLONE, André Luiz Villar; EBERSPÄCHER, Henri Frederico.
Lógica de programação: a construção de algoritmos e estruturas de dados. 3. ed. São Paulo: Prentice Hall, 2005.
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7.0)
    {
        printf("Aprovado com média %.2f\n", media);
    }
    else
    {
        printf("Reprovado com média %.2f\n", media);
    }

    return 0;
}
