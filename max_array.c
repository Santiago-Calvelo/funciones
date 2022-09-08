#include <stdio.h>
#include <limits.h>


int max(int arr[], int length) {
  int max = INT_MIN;
  for (int i = 0; i < length; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
}

int main(void) {
  int arr[] = {1,2,3,4,5,6};
  int length = sizeof(arr) / sizeof(int);
  int max_arr = max(arr, length);
  printf("Array: ");
  for (int i = 0; i < length; i++)
    printf("%d ", arr[i]);
  printf("\n");
  printf("Maximo: %d\n", max_arr);
}
