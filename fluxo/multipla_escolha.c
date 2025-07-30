/*
Algoritmo 3.7 - Múltipla escolha
FORBELLONE, André Luiz Villar; EBERSPÄCHER, Henri Frederico.
Lógica de programação: a construção de algoritmos e estruturas de dados. 3. ed. São Paulo: Prentice Hall, 2005.
*/

#include <stdio.h>

int main()
{
    float preco;
    int origem;

    printf("Qual é a região do produto?\n");
    // Região Norte
    printf("1 - Acre - Norte\n");
    printf("2 - Amapá - Norte\n");
    printf("3 - Amazonas - Norte\n");
    printf("4 - Pará - Norte\n");
    printf("5 - Rondônia - Norte\n");
    printf("6 - Roraima - Norte\n");
    printf("7 - Tocantins - Norte\n");

    // Região Nordeste
    printf("8 - Alagoas - Nordeste\n");
    printf("9 - Bahia - Nordeste\n");
    printf("10 - Ceará - Nordeste\n");
    printf("11 - Maranhão - Nordeste\n");
    printf("12 - Paraíba - Nordeste\n");
    printf("13 - Pernambuco - Nordeste\n");
    printf("14 - Piauí - Nordeste\n");
    printf("15 - Rio Grande do Norte - Nordeste\n");
    printf("16 - Sergipe - Nordeste\n");

    // Região Centro-Oeste
    printf("17 - Goiás - Centro-Oeste\n");
    printf("18 - Mato Grosso - Centro-Oeste\n");
    printf("19 - Mato Grosso do Sul - Centro-Oeste\n");
    printf("20 - Distrito Federal - Centro-Oeste\n");

    // Região Sudeste
    printf("21 - Espírito Santo - Sudeste\n");
    printf("22 - Minas Gerais - Sudeste\n");
    printf("23 - Rio de Janeiro - Sudeste\n");
    printf("24 - São Paulo - Sudeste\n");

    // Região Sul
    printf("25 - Paraná - Sul\n");
    printf("26 - Rio Grande do Sul - Sul\n");
    printf("27 - Santa Catarina - Sul\n");

    printf("Digite o número da sua resposta: \n");
    scanf("%d", &origem);

    printf("Digite o preço do Produto: \n");
    scanf("%f", &preco);

    switch (origem)
    {
    case 1 ... 7:
        printf("%.2f - Região Norte selecionada.\n", preco);
        break;
    case 8 ... 16:
        printf("%.2f - Região Nordeste selecionada.\n", preco);
        break;
    case 17 ... 20:
        printf("%.2f - Região Centro-Oeste selecionada.\n", preco);
        break;
    case 21 ... 24:
        printf("%.2f - Região Sudeste selecionada.\n", preco);
        break;
    case 25 ... 27: // Paraná
        printf("%.2f - Região Sul selecionada.\n", preco);
        break;
    default:
        printf("%.2f - Produto Importado\n", preco);
        return -1; // Indica erro na entrada de dados.
    }

    return 0;
}