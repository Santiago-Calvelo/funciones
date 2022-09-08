#include <stdio.h>

int factorial(int n) {
  int fact = 1;
  for (int i = 2; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}

int main(void) {
  int n = 5;
  int factor = factorial(n);
  printf("%d\n", factor);
  return 0;
}
