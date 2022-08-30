#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomizar(int a, int b) {
  srand(time(NULL));
  int rand1 = (rand() % b - a) + a + 1;
  printf("%d\n", rand1);
  return 0;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  randomizar(a, b);
  return 0;
}
