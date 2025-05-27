#include <stdio.h>
#include <string.h>

/*
Prvi Zadatak
Napisati funkciju koja vraća broj riči u rečenici i broj samoglasnika.
*/

void word_and_vowel_count(char str[], int *word_count, int *vowel_count);
int is_vowel(char c);

int main(void) {
  char str_a[] = "I love PMA!";
  char str_b[] = "PMA is the cruelest form of torture known to mankind.";
  int str_a_word, str_a_vowel;
  int str_b_word, str_b_vowel;

  word_and_vowel_count(str_a, &str_a_word, &str_a_vowel);
  word_and_vowel_count(str_b, &str_b_word, &str_b_vowel);

  printf("str_a (len: %d)[vowel: %d]: %s \n"
         "str_b (len: %d)[vowel: %d]: %s \n",
         str_a_word, str_a_vowel, str_a, str_b_word, str_b_vowel, str_b);
  return 0;
}

void word_and_vowel_count(char str[], int *word_count, int *vowel_count) {
  *word_count = *vowel_count = 0;
  if (str[0] != ' ') *word_count = 1;
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == ' ' && str[i + 1] != ' ')
      *word_count += 1;
    if (is_vowel(str[i]))
      *vowel_count += 1;
  }
}
int is_vowel(char c) {
  if ((c == 'a') || (c == 'A') || (c == 'e') || (c == 'E') || (c == 'i') ||
      (c == 'I') || (c == 'o') || (c == 'O') || (c == 'u') || (c == 'U'))
    return 1;
  return 0;
}
