#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool palin(char *s) {
  int i = 0;
  bool res = false;
  while (s[i] != 0) {
    i++;
  }
  for (int j = 0; j < i/2; j++) {
    if (s[j] == s[i-j-1]) res = true;
  }
  return res;
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  if (palin(s)) printf("Es un palindromo\n");
  else          printf("No es un palindromo\n");
  return 0;
}
