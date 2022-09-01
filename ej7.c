#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void) {
  int a[] = { 1, 2, 3, 4 };
  int b[] = { 3, 50, 12, 342, 4, 98 };
  int c[] = { 0 };
  print_array(a, 4);
  print_array(b, 6);
  print_array(c, 1);
  return 0;
}
