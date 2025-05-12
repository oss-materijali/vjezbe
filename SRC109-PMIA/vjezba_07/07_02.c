#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Napisati funkciju u kojoj se unose stringovi i koja vraća najduži od njih i
njegovu duljinu.
*/

char *longest(int *lenght);

int main(void) {
  int lenght = 0;
  printf("Najdulji string: %s", longest(&lenght));
  printf(" [%d]\n", lenght);
  return 0;
}

char *longest(int *lenght) {
  char *str = (char *)malloc(256);
  char *longest_str = (char *)malloc(256);

  printf("Unesi broj stringova: ");
  int n;
  scanf(" %d", &n);
  printf("Unesi stringove:\n");

  for (int i = 0; i < n; i++) {
    printf("\t[%d]: ", i);
    scanf(" %255s", str);
    if (strlen(str) > strlen(longest_str))
      strcpy(longest_str, str);
  }
  *lenght = strlen(longest_str);
  return longest_str;
}
