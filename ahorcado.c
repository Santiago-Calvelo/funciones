#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//NO FUNCIONAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

char *random_word() {
  srand(time(NULL));
  char *wordlist[] = {
    "gatos",
    "perro",
    "guiso",
    "jamon",
    "jauria",
    "manada",
    "verano",
    "primavera"
  };
  return wordlist[rand() % 5];
}

int count_chars(char *s) {
  int i = 0;
  while(s[i] != 0) i++;
  return i;
}

void print_game(int length, int misses) {
  char *middle[6] = {
    " |      ",
    " |  |   ",
    " | /|   ",
    " | /|\\ \n"
    " | /|\\ \n"
    " | /|\\ \n"
  };
  char *bottom[6] = {
    " |       \n",
    " |       \n",
    " |       \n",
    " |       \n",
    " | /     \n",
    " | / \\  \n"
  };
  printf("\n");
  printf(" ---- \n");
  printf(" |  | \n");
  printf("%s", misses > 0 ? " |  O\n" : " |   \n");
  printf("%s", middle[misses]);
  printf("%s", bottom[misses]);
  printf(" _ \n");
}

void play(char *correct_word, int length, int *misses) {
  char *temp_word = "";
  int i = 0;
  int cont = 0;
  printf("Elegi una letra: \n");
  char choice = getchar();
  for (int i = 0; i < length; i++) {
    if (temp_word[i] == correct_word[i])
      printf("%s", temp_word[i]);
    if (correct_word[i] == choice) {
      temp_word[i] = choice;
      printf("%s", temp_word[i]);
      cont++;
    }
    else if (temp_word[i] != correct_word[i] && choice != correct_word[i])
      printf("_");
    if (cont != 0) *misses++;
  }
}

void start() {
  char *correct_word = random_word();
  int length = count_chars(correct_word);
  printf("%s largo: %d\n", correct_word, length);
  int misses = 0;
  while (misses < 6) {
    play(correct_word, length, &misses);
    print_game(length, misses);
    // getchar();
  }
}


int main(int argc, char *argv[]) {
  start();
  return 0;
}
