#include <stdio.h>
#include <math.h>

int pou(int n) {
  int potencia = 2;
  for (int i = 1; i < 11; i++) {
    potencia *= n;
  }
  return potencia;
}

int main(void) {
  int n = 2;
  int result = pou(n);
  printf("%d\n", result);
}
