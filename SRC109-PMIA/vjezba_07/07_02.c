#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Napisati funkciju u kojoj se unose stringovi i koja vraća najduži od njih i
njegovu duljinu.
*/

char *longest(int *lenght);

int main(void) {
  int lenght;
  printf("Najdulji string: %s", longest(&lenght));
  printf(" [%d]\n", lenght);
  return 0;
}

char *longest(int *lenght) {
  const int MAX_STR_LEN = 256;
  char *str = (char *)malloc(MAX_STR_LEN);
  char *longest_str = (char *)malloc(MAX_STR_LEN);

  printf("Unesi broj stringova: ");
  int n;
  scanf(" %d", &n);
  printf("Unesi stringove:\n");
  getchar();

  for (int i = 0; i < n; i++) {
    printf("\t[%d]: ", i);
    fgets(str, MAX_STR_LEN - 1, stdin);

    /* removes the '\n' at the end that fgets() saves */
    str[strlen(str) - 1] = '\0';

    if (strlen(str) > strlen(longest_str))
      strcpy(longest_str, str);
  }

  *lenght = strlen(longest_str);
  return longest_str;
}
