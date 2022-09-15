#include <stdio.h>

void upper(char *s, int i) {
  if (s[i] != 0) {
    if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    i++;
    upper(s, i);
  }
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  int i = 0;
  upper(s, i);
  printf("%s\n", s);
  return 0;
}
