#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b, int c) {
  if (a == b && b == c) printf("True\n");
  else printf("False\n");
  return 0;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  compare(a, b, c);
  return 0;
}
