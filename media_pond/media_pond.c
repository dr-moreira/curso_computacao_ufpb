#include <stdio.h> 

int main() {
    // Declaração de variáveis
    float N1, N2, N3; 
    float P1, P2, P3, media_pond;

    P1 = 2; // Atribui o peso 2 à variável P1.
    P2 = 3; // Atribui o peso 3 à variável P2.
    P3 = 5; // Atribui o peso 5 à variável P3.

    // Solicita ao usuário que digite as notas
    printf("Digite a primeira nota (N1): "); 
    scanf("%f", &N1); 

    printf("Digite a segunda nota (N2): "); 
    scanf("%f", &N2);

    printf("Digite a terceira nota (N3): "); 
    scanf("%f", &N3); 

    // Calcula a média ponderada
    media_pond = ((N1 * P1) + (N2 * P2) + (N3 * P3)) / (P1 + P2 + P3);

    // Exibe o resultado da média ponderada
    printf("A media ponderada e: %.2f\n", media_pond);

    return 0; 
}
