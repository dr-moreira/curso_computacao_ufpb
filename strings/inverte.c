#include <stdio.h>
#include <string.h>

int main() {
  char frase[] =
      "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod "
      "tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim "
      "veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea "
      "commodo consequat. Duis aute irure dolor in reprehenderit in voluptate "
      "velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint "
      "occaecat cupidatat non proident, sunt in culpa qui officia deserunt "
      "mollit anim id est laborum.";
  int j = strlen(frase) - 1;
  char c;
  for (int i = 0; i < j; i++, j--) {
    c = frase[i];
    frase[i] = frase[j];
    frase[j] = c;
  }
  printf("%s", frase);

  return 0;
}
