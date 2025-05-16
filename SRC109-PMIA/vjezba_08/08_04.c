#include <stdio.h>
#include <string.h>

/*
4. Napisati funkciju koja provjerava završava li string sa nekim podstingom.
Primjer : za podstring ".csv" i string "datoteka.csv" funkcija vraća pozitivan
odgovor, a za string "datoteka.cvss" negativan.
*/

int has_suffix(char str[], char suffix[]);

int main(void) {
  char string_a[] = "datoteka.csv";
  char string_b[] = "datoteka.cvss";
  char string_c[] = "datote.csvka";
  char suffix[] = ".csv";

  printf("str: %s [%d](exp: %d)\n", string_a, has_suffix(string_a, suffix), 1);
  printf("str: %s [%d](exp: %d)\n", string_b, has_suffix(string_b, suffix), -2);
  printf("str: %s [%d](exp: %d)\n", string_c, has_suffix(string_c, suffix), -1);

  return 0;
}

int has_suffix(char str[], char suffix[]) {
  char *slice = strstr(str, suffix);
  if (!slice)
    return -2; // does not exist
  if (slice[strlen(suffix)] != '\0')
    return -1; // not a suffix
  return 1;
}
