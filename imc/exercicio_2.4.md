# Exercício 2.4

Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calsule o seu peso ideal utilizando as seguintes fórmulas:

- para homens: $(72.7 \times h) - 58$
- para mulheres: $(62.1 \times h) - 44.7$

## Algoritmo

início

real: peso, altura;
char: sexo;

escreva("Digite f para feminino ou m para masculino:");
ler(sexo);

escreva("Digite a Altura:");
ler(altura);

se(sexo == m)
  então
    peso <- (72.7 *altura) - 58;
  senão
    peso <- (62.1* altura) - 44.7;
fimse;

escreva("Seu peso ideal é: ", peso);

fim

## Código

```

#include <stdio.h>

int main() {
  float peso, altura;
  char sexo;

  printf("Digite f para feminino ou m para masculino\n");
  scanf("%c", &sexo);

  printf("Digite a altura: \n");
  scanf("%f", &altura);
  
  if ( sexo == 'm') {
    peso = (72.7 * altura) - 58;
  } else {
    peso = (62.1 * altura) - 44.7;
  }
  printf("Seu peso ideal é %.2f\n", peso);

 return 0;

} 
```
