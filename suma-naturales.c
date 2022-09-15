#include <stdio.h>
#include <stdlib.h>

int naturales(int n) {
  if (n == 1) return 1; 
  return n + naturales(n-1);
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("Suma: %d\n", naturales(n));
  return 0;
}
