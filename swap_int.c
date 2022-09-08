#include <stdio.h>

void swap(int *a, int *b) {
  int t = 0;
  t = *a;
  *a = *b;
  *b = t;
}

int main(void) {
  int a = 10;
  int b = 5;
  printf("a: %d b: %d\n", a, b);
  swap(&a,&b);
  printf("a: %d b: %d\n", a, b);
  return 0;
}
