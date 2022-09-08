#include <stdio.h>
#include <limits.h>


int min(int arr[], int length) {
  int min = INT_MAX;
  for (int i = 0; i < length; i++) {
    if (arr[i] < min) min = arr[i];
  }
  return min;
}

int main(void) {
  int arr[] = {1,2,3,4,5,6};
  int length = sizeof(arr) / sizeof(int);
  int min_arr = min(arr, length);
  printf("Array: ");
  for (int i = 0; i < length; i++)
    printf("%d ", arr[i]);
  printf("\n");
  printf("Minimo: %d\n", min_arr);
}
