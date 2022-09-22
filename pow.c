#include <stdio.h>
#include <stdlib.h>

int pou(int n, int pow) {
  if (pow == 1) return n;
  return n * pou(n, pow-1);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int pow = atoi(argv[2]);
  printf("%d\n", pou(n, pow));
  return 0;
}
