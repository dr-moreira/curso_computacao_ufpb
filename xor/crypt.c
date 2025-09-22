#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_help() {
  printf("Uso: crypt [-e|-d] <arquivo>\n");
  printf("  -e: encriptar arquivo\n");
  printf("  -d: decriptar arquivo\n");
  return 1;
}

int encripta(char *cifra, size_t cifra_sz, char *buffer_crypt, int f_sz,
             FILE *f) {
  size_t bytes_lidos;
  size_t bytes_encrypted = 0;
  char buffer[cifra_sz];

  while ((bytes_lidos = fread(buffer, 1, cifra_sz, f)) > 0) {

    if (bytes_lidos < cifra_sz) {
      memset(buffer + bytes_lidos, 0, cifra_sz - bytes_lidos);
    }
    for (int i = 0; i < bytes_lidos; i++, bytes_encrypted++) {
      buffer_crypt[bytes_encrypted] = buffer[i] ^ cifra[i % cifra_sz];
    }
  }
  return bytes_encrypted;
}
int decripta(char *cifra, size_t cifra_sz, char *buffer_message, int f_sz,
             FILE *f) {
  size_t bytes_lidos;
  size_t bytes_decrypted = 0;
  char buffer[cifra_sz];

  while ((bytes_lidos = fread(buffer, 1, cifra_sz, f)) > 0) {

    if (bytes_lidos < cifra_sz) {
      memset(buffer + bytes_lidos, 0, cifra_sz - bytes_lidos);
    }
    for (int i = 0; i < bytes_lidos; i++, bytes_decrypted++) {
      buffer_message[bytes_decrypted] = buffer[i] ^ cifra[i % cifra_sz];
    }
  }
  return bytes_decrypted;
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    return print_help();
  }

  char *cifra = "essa é minha cifra";
  size_t cifra_sz = strlen(cifra);
  char *buffer_result;
  char output_filename[512];
  int encrypt_mode = 0;
  int decrypt_mode = 0;
  char *input_filename;

  // Parse command line arguments
  if (strcmp(argv[1], "-e") == 0) {
    encrypt_mode = 1;
    input_filename = argv[2];
    snprintf(output_filename, sizeof(output_filename), "%s.crypt",
             input_filename);
  } else if (strcmp(argv[1], "-d") == 0) {
    decrypt_mode = 1;
    input_filename = argv[2];
    // Remove .crypt extension if present
    strcpy(output_filename, input_filename);
    char *ext = strstr(output_filename, ".crypt");
    if (ext) {
      *ext = '\0';
      strcat(output_filename, ".decrypted");
    } else {
      strcat(output_filename, ".decrypted");
    }
  } else {
    return print_help();
  }

  FILE *input_file = fopen(input_filename, "rb");
  if (input_file == NULL) {
    printf("Erro ao abrir o arquivo %s!\n", input_filename);
    return 1;
  }

  // Get file size
  fseek(input_file, 0, SEEK_END);
  int file_size = ftell(input_file);
  fseek(input_file, 0, SEEK_SET);

  buffer_result = (char *)malloc(file_size * sizeof(char));
  if (buffer_result == NULL) {
    printf("Erro ao alocar memória!\n");
    fclose(input_file);
    return 1;
  }

  int bytes_processed;
  if (encrypt_mode) {
    bytes_processed =
        encripta(cifra, cifra_sz, buffer_result, file_size, input_file);
    printf("Arquivo encriptado com %d bytes\n", bytes_processed);
  } else {
    bytes_processed =
        decripta(cifra, cifra_sz, buffer_result, file_size, input_file);
    printf("Arquivo decriptado com %d bytes\n", bytes_processed);
  }

  fclose(input_file);

  // Write result to output file
  FILE *output_file = fopen(output_filename, "wb");
  if (output_file == NULL) {
    printf("Erro ao criar o arquivo %s!\n", output_filename);
    free(buffer_result);
    return 1;
  }

  fwrite(buffer_result, 1, bytes_processed, output_file);
  fclose(output_file);

  printf("Resultado salvo em: %s\n", output_filename);

  free(buffer_result);
  return 0;
}
