#include <math.h>
#include <stdio.h>
#include <string.h>

/*
5. Napisati funkciju koja string, koji predstavlja bitovni zapis nekog broja,
pretvara u broj. Funkcija vraća dobijeni broj. Primjer: za string ”10111”
funkcija vraca 23.
*/

int bin_str_to_int(char str[]);

int main(void) {
  char string_a[] = "10111";
  char string_b[] = "10010111";
  char string_c[] = "100a10111";

  printf("string_a: %s [%d](exp: %d)\n", string_a, bin_str_to_int(string_a), 0b10111);
  printf("string_b: %s [%d](exp: %d)\n", string_b, bin_str_to_int(string_b), 0b10010111);
  printf("string_c: %s [%d](exp: %d)\n", string_c, bin_str_to_int(string_c), -1);

  return 0;
}

int bin_str_to_int(char str[]) {
  int n = 0;
  int str_len = strlen(str);
  for (int i = 0; i < str_len; i++) {
    if (str[i] < '0' || str[i]  > '9')
      return -1;

    n += (str[i] - '0') * (int)pow(2, (str_len - (i + 1)));
  }
  return n;
}
