#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Napisati funkciju koja
modificira string tako da
izbaci sve samoglasnike iz njega.

Primjer: "Popokatepetl" postaje "Ppktptl".
*/

// izazov: vrati isti array

int is_vowel(char n);
void remove_vowels(char str[]);

int main(void) {
  char word[] = "Popokatepetl";

  printf("%s ", word);
  remove_vowels(word);
  printf("--> %s\n", word);

  return 0;
}

void remove_vowels(char str[]) {
  char *temp = (char *)calloc(strlen(str), sizeof(char));
  if (!temp) exit(2);

  int temp_iter = 0;
  for (int i = 0; i < strlen(str); i++)
    if (!is_vowel(str[i]))
      temp[temp_iter++] = str[i];

  strcpy(str, temp);
  free(temp);
}

int is_vowel(char n) {
  if ((n == 'a') || (n == 'A') || (n == 'e') || (n == 'E') || (n == 'i') ||
      (n == 'I') || (n == 'o') || (n == 'O') || (n == 'u') || (n == 'U'))
    return 1;
  return 0;
}
