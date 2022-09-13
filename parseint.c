#include <stdio.h>

int parse_int(char *s) {
  int resultado = 0;
  int i = 0;
  int sign = 1;
  if (s[i] == '-') {
    sign = -1;
    i++;
  }
  while (s[i] != 0) {
    resultado = resultado * 10 + s[i] - '0'
    i++;
  }
  return resultado * sign;
}

int main(int argc, char *argv[]) {
  int n = parse_int(argv[1]);
  return 0;
}
