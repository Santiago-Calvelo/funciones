#include <stdio.h>
#include <stdlib.h>

void mess(char *s, int l) {
  while(l != 0 || l == 0) {
    printf("%c", s[l]);
    l--;
    if (l == -1) break;
  }
  printf("\n");
}

int lenght(char *s) {
  int l = 0;
  while (s[l] != 0) {
    l++;
  }
  return l;
}

int main(int argc, char *argv[]) {
  int l = lenght(argv[1]);
  mess(argv[1], l);
  return 0;
}
