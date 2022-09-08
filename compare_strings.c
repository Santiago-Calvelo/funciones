#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(char *str1, char *str2) {
  int result = strcmp(str1, str2);
  return result;
}

int main(int argc, char *argv[]) {
  if (compare(argv[1], argv[2]) == 0) printf("Son iguales\n");
  else                                printf("No son iguales\n");
  return 0;
}
