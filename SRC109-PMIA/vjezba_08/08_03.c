#include <stdio.h>
#include <string.h>

/*
3. * Napisati funkciju koja prima string i jedan znak
i modificira string tako da izbaci sve
znakove prije danog znaka.

Primjer: Za string "ONoffON" i znak o, modificirani string je "offON"
*/
char *keep_after_char(char str[], char c);

int main(void) {
  char string_a[] = "ONoffON";
  char c = 'o';

  char *sliced_a = keep_after_char(string_a, c);
  if (!sliced_a) return 1;

  printf("string_a: %s\nsliced_a: %s\n", string_a, sliced_a);
  return 0;
}

char *keep_after_char(char str[], char c) {
  char *slice = strchr(str, c);
  if (!slice) return NULL;
  return slice;
}
