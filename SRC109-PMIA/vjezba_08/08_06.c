#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Napisati funkciju koja u stringu zamijeni svaku prazninu sa drugim stringom
koji je parametar funkcije. Primjer: Za string "Ja sam dobro" i drugi string
"pa", modificirani string je "Japasampadobro".
*/

char *replace_whitespace(char a[], char b[]);

int main(void) {
  char a[] = "Ja sam dobro";
  char b[] = "pa";
  char *sol = replace_whitespace(a, b);
  if (!sol) return 1;

  printf("%s\n", sol);

  free(sol);
  return 0;
}

char *replace_whitespace(char a[], char b[]) {
  int a_len = strlen(a);
  int b_len = strlen(b);

  int spaces_iter = 0;
  for (int i = 0; i < a_len; i++)
    if (a[i] == ' ') spaces_iter++;

  char *str = (char *)calloc((a_len + b_len * spaces_iter) + 1, sizeof(char));
  if (!str) return NULL;

  int str_iter = 0;
  for (int i = 0; i < a_len; i++) {
    if (a[i] == ' ') {
      strcat(str, b);
      str_iter += b_len;
    } else
      str[str_iter++] = a[i];
  }

  str[str_iter] = '\0';
  return str;
}
