#include <stdio.h>

void print_menu(char *arr_str[], int argc) {
  for (int i = 1; i < argc; i++) {
    printf("%d) %s\n", i, arr_str[i]);
  }
}

int main(int argc, char *argv[]) {
  char *arr_str[argc];
  for (int i = 1; i < argc; i++) {
    arr_str[i] = argv[i];
  }
  print_menu(arr_str, argc);
  return 0;
}
