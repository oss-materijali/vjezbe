#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Napisati funkciju koja za neki string vraća poziciju i adresu drugog
pojavljivanja nekog slova. U slučaju da se slovo ne pojavljuje dva puta,
funkcija vraća -1 i NULL. Koristiti funkciju strchr.

Primjer : Za string "ONoffON" pozicija drugog pojavljivanja slova ’O’ je 6.
*/

char *get_second_char_pos(char str[], char c, int *pos);

int main(void) {
  char string_a[] = "ONoffON";
  char c = 'O';
  char c2 = 'o';
  int c_pos, c2_pos;

  char *c_ptr = get_second_char_pos(string_a, c, &c_pos);
  char *c2_ptr = get_second_char_pos(string_a, c2, &c2_pos);

  printf("string_a (%c): %s | char: %p [%d]\n", c, string_a, c_ptr, c_pos);
  printf("string_a (%c): %s | char: %p [%d]\n", c2, string_a, c2_ptr, c2_pos);

  return 0;
}

char *get_second_char_pos(char str[], char c, int *pos) {
  *pos = 0;

  char *first = strchr(str, c);
  if (!first) {
    *pos = -1;
    return NULL;
  }
  first++;

  char *second = strchr(first, c);
  if (!second) {
    *pos = -1;
    return NULL;
  }
  *pos = strlen(str) - strlen(second + 1);

  return second;
}
