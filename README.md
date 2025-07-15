# Exercícios de Introdução à Computação em C

Bem-vindos ao nosso repositório de exercícios da disciplina de Introdução à Computação, feitos na linguagem C!

Este espaço foi criado para centralizar e compartilhar as soluções dos exercícios propostos em sala de aula, facilitando o estudo e a consulta para todos.

---

## Como Usar o Repositório

1.  **Clone o repositório:**
    Abra seu terminal (Linux/macOS) ou Git Bash/Prompt de Comando (Windows) e execute o comando:
    
    ```bash
    git clone https://github.com/dr-moreira/curso_computacao_ufpb
    ```
    
    
2.  **Navegue até a pasta do exercício desejado:**
    Os exercícios estão organizados por **listas** ou por **tópicos/aulas**. Use o comando `cd` para entrar na pasta:
    ```bash
    cd Nome_Da_Pasta/
    ```
    Por exemplo: `cd Lista_01/`

---

## Como Compilar e Executar Programas C

Você precisará de um **compilador C** para transformar o código-fonte (`.c`) em um programa executável.

### 🐧 No Linux (via terminal)

O **GCC (GNU Compiler Collection)** já vem pré-instalado na maioria das distribuições Linux ou é facilmente instalável:

1.  **Instalar o GCC (se ainda não tiver):**
    * **Debian/Ubuntu:**
        ```bash
        sudo apt update
        sudo apt install build-essential
        ```
    * **Fedora/CentOS:**
        ```bash
        sudo dnf install gcc
        ```
    * **Arch Linux:**
        ```bash
        sudo pacman -S gcc
        ```
        (Se sua distribuição for outra, pesquise por "install gcc [nome_da_sua_distribuição]").

2.  **Compilar o código:**
    Navegue até a pasta onde está o arquivo `.c` e use:
    ```bash
    gcc nome_do_arquivo.c -o nome_do_executavel
    ```
    Por exemplo: `gcc exercicio_01.c -o exercicio_01`

3.  **Executar o programa:**
    ```bash
    ./nome_do_executavel
    ```
    Por exemplo: `./exercicio_01`

### 🪟 No Windows (usando MinGW-w64)

Para Windows, o **MinGW-w64** é uma ótima opção, pois fornece um ambiente de desenvolvimento GNU (incluindo o GCC) e é bastante portátil:

1.  **Baixar o MinGW-w64 (Versão Portátil):**
    Uma forma prática é baixar a versão standalone do MinGW-w64.
    * Acesse o site oficial do MinGW-w64 no SourceForge: [https://sourceforge.net/projects/mingw-w64/files/mingw-w64/](https://sourceforge.net/projects/mingw-w64/files/mingw-w64/)
    * Recomendo baixar a versão mais recente dentro da pasta `x86_64-posix-seh` (para sistemas 64-bit e que usam POSIX threads, que é mais comum). Procure por um arquivo `.zip` como `mingw-w64-x86_64-posix-seh-[versao].zip`.
    * **Exemplo de link direto para uma versão estável (pode mudar com o tempo):**
        [https://sourceforge.net/projects/mingw-w64/files/mingw-w64/MinGW-W64%20GCC-8.1.0/mingw-w64-gcc-8.1.0.zip/download](https://sourceforge.net/projects/mingw-w64/files/mingw-w64/MinGW-W64%20GCC-8.1.0/mingw-w64-gcc-8.1.0.zip/download)
        (Baixe o arquivo `.zip` e extraia-o para um local de sua preferência, como `C:\mingw-w64`).

2.  **Configurar o PATH do Sistema (opcional, mas recomendado):**
    Para usar o `gcc` de qualquer diretório no Prompt de Comando/PowerShell, você precisa adicionar o caminho da pasta `bin` do MinGW-w64 às variáveis de ambiente do sistema.
    * Pesquise por "Variáveis de Ambiente" no Menu Iniciar do Windows.
    * Clique em "Variáveis de Ambiente...".
    * Em "Variáveis do sistema", encontre a variável `Path`, selecione-a e clique em "Editar...".
    * Clique em "Novo" e adicione o caminho completo para a pasta `bin` dentro do diretório onde você extraiu o MinGW-w64 (ex: `C:\mingw-w64\bin`).
    * Clique em "OK" em todas as janelas para fechar. Pode ser necessário reiniciar o Prompt de Comando/PowerShell para que as alterações entrem em vigor.

3.  **Compilar o código:**
    Abra o **Prompt de Comando** ou **PowerShell**, navegue até a pasta onde está o arquivo `.c` e use:
    ```bash
    gcc nome_do_arquivo.c -o nome_do_executavel.exe
    ```
    Por exemplo: `gcc exercicio_01.c -o exercicio_01.exe`

4.  **Executar o programa:**
    ```bash
    .\nome_do_executavel.exe
    ```
    Por exemplo: `.\exercicio_01.exe`

---

Bons estudos a todos! 🚀