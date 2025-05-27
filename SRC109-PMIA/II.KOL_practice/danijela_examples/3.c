#include <stdio.h>
#include <string.h>

/*
Treći zadatak
Napisati funkciju koja provjerava je li niz znakova može biti OIB.
Da li ima jedanaest znakova i jesu li svi broj.
*/

int is_oib(char oib[]);

int main(void) {
  char oib_a[] = "12345123451";
  char oib_b[] = "123451234512";
  char oib_c[] = "12345I23451";
  printf("oib_a: %s\t[%d]\n"
         "oib_a: %s\t[%d]\n"
         "oib_a: %s\t[%d]\n",
         oib_a, is_oib(oib_a),
         oib_b, is_oib(oib_b),
         oib_c, is_oib(oib_c));
  return 0;
}

int is_oib(char oib[]) {
  int oib_len = strlen(oib);
  if (oib_len != 11) return 0;

  for (int i = 0; i < strlen(oib); i++)
    if (oib[i] < '0' || oib[i] > '9')
      return 0;

  return 1;
}
