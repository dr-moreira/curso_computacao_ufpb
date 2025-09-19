import random

# Definindo as dimensões
linhas_a = 10
colunas_a = 10
linhas_b = 10
colunas_b = 10

# O número de colunas de A deve ser igual ao número de linhas de B
# para que a multiplicação seja possível.
if colunas_a != linhas_b:
    print("Erro: O número de colunas de A deve ser igual ao número de linhas de B.")
else:
    with open("matrizes_grandes.txt", "w") as f:
        # Escrevendo as dimensões no arquivo
        f.write(str(linhas_a) + "\n")
        f.write(str(colunas_a) + "\n")
        f.write(str(linhas_b) + "\n")
        f.write(str(colunas_b) + "\n")

        # Gerando os elementos da matriz A
        for _ in range(linhas_a * colunas_a):
            f.write(str(random.randint(0, 1000)) + "\n")

        # Gerando os elementos da matriz B
        for _ in range(linhas_b * colunas_b):
            f.write(str(random.randint(0, 1000)) + "\n")
    print("Arquivo 'matrizes_grandes.txt' gerado com sucesso!")
