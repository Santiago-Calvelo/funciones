#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int n, int length) {
  int indice = -1;
  for (int i = 0; i < length; i++) {
    if (arr[i] == n) indice = i;
  }
  return indice;
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int arr[] = {0,2,3,6,8};
  int length = sizeof(arr)/sizeof(int);

  int i = search(arr,n,length);
  if (i != -1) printf("Indice: %d\n", i);
  else         printf("-1\n");
  return 0;
}
