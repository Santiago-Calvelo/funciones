#include <stdio.h>

int arr_prom(int arr[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += arr[i];
  }
  int prom = sum/length;
  return prom;
}

int main(void) {
  int arr[] = {1,2,3,4,5};
  int length = sizeof(arr) / sizeof(int);
  int prom = arr_prom(arr, length);
  printf("Array: ");
  for (int i = 0; i < length; i++)
    printf("%d ", arr[i]);
  printf("\n");
  printf("%d\n", prom);
  return 0;
}
