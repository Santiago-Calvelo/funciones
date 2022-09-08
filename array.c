#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int arr[n];
  for (int i = 2; i < n+2; i++) {
    arr[i-2] = atoi(argv[i]);
  }
  print_arr(arr, n);
  return 0;
}
