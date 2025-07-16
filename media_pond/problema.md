# Desafio 1:

Você é professor(a) de Matemática do ensino médio, responsável por 3 turmas com 60 alunos cada (totalizando 180 alunos).


Para facilitar o cálculo das notas do 1º bimestre de cada aluno(a), você decide criar um algoritmo que receba 3 notas e calcule a média ponderada, considerando os seguintes pesos:

- Nota 1 => peso 2
- Nota 2 => peso 3
- Nota 3 => peso 5

 
Pergunta:
Como esse algoritmo deve ser estruturado? Poste o seu pseudocódigo abaixo!

Bons estudos! Estou ansioso para ver como vocês vão resolver :)

Abraços,

Lucas David Maia Matias
Enfermeiro
Mestre e Doutorando em Modelos de Decisão e Saúde

---

1. float/real N1, N2, N3
2. float/real P1, P2, P3, media_pond
3. P1 <- 2 // atribuir peso 2 a variável P1
3. P2 <- 3 // atribuir peso 3 a variável P2
3. P3 <- 5 // atribuir peso 5 a variável P5
4. Ler(N1, N2, N3) // Ler notas, 1, 2, 3 
5. media_pond <- ((N1*P1) + (N2*P2) + (N3*P3)) / P1+P3+P3 // Calcula Média ponderada
6. escrever(media_pond)
