#include <stdio.h>
#include <stdlib.h>

void toLower(char *s) {
  int i = 0;
  while (s[i] != 0) {
    if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    i++;
  }
}

int main(int argc, char *argv[]) {
  toLower(argv[1]);
  printf("%s\n", argv[1]);
  return 0;
}
