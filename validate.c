#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validate(int intput, int max, int min) {
  bool result = false;
  if (intput > min && intput < max) result = true;

  return result;
}

int main(int argc, char *argv[]) {
  int intput = atoi(argv[1]);
  int max = atoi(argv[2]);
  int min = atoi(argv[3]);

  if (max < min) {
    printf("El mayor tiene que ser el segundo argumento, y el menor el tercero\n");
    return 0;
  }

  if (validate(intput, max, min)) printf("Validado\n");
  else                            printf("Intenta de nuevo\n");
  return 0;
}
