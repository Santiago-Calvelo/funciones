#include <stdio.h>
#include <stdlib.h>

int count_chars(char *s) {
  int i = 0;
  while (s[i] != 0) {
    i++;
  }
  return i;
}

int main(int argc, char *argv[]) {
  char *s = argv[1];

  printf("Cantidad de caracteres: %d", count_chars(s));

  return 0;
}
