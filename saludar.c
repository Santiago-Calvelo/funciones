#include <stdio.h>

int saludar(char *name) {
  printf("Hola %s\n", name);
  return 0;
}

int main(int argc, char *argv[]) {
  char *name = "Esopo";
  saludar(name);
  return 0;
}
