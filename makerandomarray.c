#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printarr(int a[], int a_size) {
  for (int i = 0; i < a_size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int randarr(int low, int high) {
  int num = (rand() % high - low) + low;
  return num;
}

void make_random_array(int a[], int a_size, int low, int high) {
  for (int i = 0; i < a_size; i++) {
    a[i] = randarr(low, high);
  }
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int a_size = atoi(argv[1]);
  int low = atoi(argv[2]);
  int high = atoi(argv[3]);
  int a[a_size];
  make_random_array(a, a_size, low, high);
  printarr(a, a_size);
  return 0;
}
