#include <stdio.h>

/*
3. Napisati funkciju koja za neki string i neki znak vraća broj pojavljivanja
znaka u stringu. Ako se znak ne pojavljuje, funkcija vraća -1.
*/

int count_chars_in_str(char str[], char c);

int main(void) {
  char string_a[] = "tralalelo";
  char string_b[] = "tung tung tung sahur";
  char symbol = 'l';

  printf("string_a: %s [%d]\n", string_a, count_chars_in_str(string_a, symbol));
  printf("string_b: %s [%d]\n", string_b, count_chars_in_str(string_b, symbol));

  return 0;
}

int count_chars_in_str(char str[], char c) {
  int i = 0, ctr = 0;

  while (str[i] != '\0')
    if (str[i++] == c)
      ctr++;

  if (!ctr) return -1;
  return ctr;
}
