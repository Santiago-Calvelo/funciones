#include <stdio.h>
#include <stdlib.h>

// retrocede todo el tiempo un numero y al llegar a 0 el return alcanza el 1
// y comienza a avanzar
int fact(int n) {
  if (n == 0) return 1;
  return n * fact(n-1);
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  printf("El factorial de %d es: %d\n", n, fact(n));
  return 0;
}
