#include <stdio.h>
#include <stdlib.h>

int is_triangle(int a, int b, int c) {
  if (a + b > c && b + c > a && c + a > b) printf("True\n");
  else printf("False\n");

  return 0;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  is_triangle(a, b, c);
  return 0;
}
