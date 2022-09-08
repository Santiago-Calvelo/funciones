#include <stdio.h>

void swap(int array[], int i, int j) {
  int t = 0;
  t = array[i];
  array[i] = array[j];
  array[j] = t;
}

int main(void) {
  int array[] = {1, 54, 9, 12, 321, 50};
  printf("array[1]: %d array[4]: %d\n", array[1], array[4]);
  swap(array,1,4);
  printf("array[1]: %d array[4]: %d\n", array[1], array[4]);
  return 0;
}
