#include <stdio.h>
#include <stdlib.h>


void print_menu() {
  system("clear");
  printf("Bienvenido a la app de notas\n");
  printf("1) Leer las notas\n");
  printf("2) Hacer una nota\n");
  printf("3) Borras las notas\n");
  printf("4) Salir\n");
}

void presskey() {
  printf("Presione enter para continuar\n");
  getchar();
}

void read_note(FILE *fp, int c) {
  fp = fopen("notas.txt", "r");
  if (fp == NULL) {
    printf("No hay notas todavia\n");
    presskey();
    return;
  }
  printf("--------NOTAS--------\n");
  while ((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  printf("---------FIN---------\n");
  presskey();
  fclose(fp);
}

void add_note(FILE *fp, char nota[100]) {
  fp = fopen("notas.txt", "a");
  fgets(nota, 100, stdin);
  fprintf(fp, "%s", nota);
  fclose(fp);
}

void delete(FILE *fp) {
  fp = fopen("notas.txt", "w");
  printf("Notas borradas\n");
  presskey();
  fclose(fp);
}

int main(void) {
  FILE *fp;
  char nota[100] = "";
  int choice;
  int c;
  while(1) {
    print_menu();
    scanf("%d", &choice);
    getchar();
    switch (choice) {
      case 1:
        read_note(fp, c);
        break;
      case 2:
        add_note(fp, nota);
        break;
      case 3:
        delete(fp);
        break;
      case 4:
        exit(0);
        break;
      default:
        printf("Ingresa un numero valido\n");
        break;
    }
  }
  return 0;
}
