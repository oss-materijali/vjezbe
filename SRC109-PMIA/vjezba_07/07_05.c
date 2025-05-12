#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5. Napisati funkciju koja prima tri stringa, te vraća novi string koji je
rezultat spajanja dva dulja stringa.
*/

/* my solution is far from perfect
WARN: modifies the input string literals,
could cause undefined behaviour */
char *combine_longer_strings(char a[], char b[], char c[]);

int main(void) {
  char first[] = "Tung Tung Tung Sahur";
  char second[] = "Tralalelo Tralalala";
  char third[] = "Balerina Capuchina";

  printf("prvi: %s\n"
         "drugi: %s\n"
         "treci: %s\n",
         first, second, third);

  char *combination = combine_longer_strings(first, second, third);
  if (!combination) return 1;

  printf("Kombinacija dva dulja: \"%s\"\n", combination);

  free(combination);
  return 0;
}

char *combine_longer_strings(char a[], char b[], char c[]) {
  int a_size = strlen(a);
  int b_size = strlen(b);
  int c_size = strlen(c);
  int smallest_size = -1;

  if (a_size < b_size && a_size < c_size) {
    a[0] = '\0';
    smallest_size = a_size;
  }
  if (b_size < a_size && b_size < c_size) {
    b[0] = '\0';
    smallest_size = b_size;
  }
  if (c_size < a_size && c_size < b_size) {
    c[0] = '\0';
    smallest_size = c_size;
  }

  if (smallest_size < 0) {
    printf("\nERROR: Svi stringovi su iste duljine.\n");
    return NULL;
  }

  char *combined = (char *)malloc(a_size + b_size + c_size - smallest_size + 1);
  if (!combined) return NULL;

  int c_iter = 0, i;
  i = 0;
  while (a[i] != '\0')
    combined[c_iter++] = a[i++];
  i = 0;
  while (b[i] != '\0')
    combined[c_iter++] = b[i++];
  i = 0;
  while (c[i] != '\0')
    combined[c_iter++] = c[i++];

  combined[c_iter] = '\0';

  return combined;
}
