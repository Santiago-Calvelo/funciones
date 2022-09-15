#include <stdio.h>
#include <stdlib.h>

int euc(int a, int b) {
  if (b == 0) return a;
  return euc(b, a % b);
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d\n", euc(a, b));
  return 0;
}
