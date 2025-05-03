#include <stdio.h>
#include <string.h>

/*
4. Napisati funkciju koja ispituje da li su
dvije rijeci
anagrami (jedna riječ je permutirana druga rijec).

Primjer: rijeci "vatra", "trava" i "vrata" su anagrami.
*/

int is_anagram(char original[], char mutated[]);
void swap(char *a, char *b);
void sort_string(char str[]);

int main(void) {
  char word_a[] = "vatra";
  char word_b[] = "trava";
  char word_c[] = "trava";
  printf("%s --> %s [%d]\n", word_a, word_b, is_anagram(word_a, word_b));
  printf("%s --> %s [%d]\n", word_b, word_c, is_anagram(word_b, word_c));

  char word_d[] = "trallelo";
  char word_e[] = "trallala";
  printf("%s --> %s [%d]\n", word_d, word_e, is_anagram(word_d, word_e));

  return 0;
}

int is_anagram(char original[], char mutated[]) {
  if (strlen(original) != strlen(mutated))
    return 0;

  /* not needed, but makes the showcase easier */
  char ori_copied[strlen(original)];
  char mut_copied[strlen(mutated)];
  strcpy(ori_copied, original);
  strcpy(mut_copied, mutated);

  sort_string(ori_copied);
  sort_string(mut_copied);

  for (int i = 0; i < strlen(original); i++)
    if (ori_copied[i] != mut_copied[i])
      return 0;

  return 1;
}

void sort_string(char str[]) {
  for (int i = 0; i < strlen(str); i++) {
    for (int j = i; j < strlen(str); j++) {
      if (str[i] > str[j])
        swap(&str[i], &str[j]);
    }
  }
}

void swap(char *a, char *b) {
  char tmp = *a;
  *a = *b;
  *b = tmp;
}
