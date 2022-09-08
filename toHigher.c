#include <stdio.h>
#include <stdlib.h>

void toHigher(char *s) {
  int i = 0;
  while (s[i] != 0) {
    if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    i++;
  }
}

int main(int argc, char *argv[]) {
  toHigher(argv[1]);
  printf("%s\n", argv[1]);
  return 0;
}
