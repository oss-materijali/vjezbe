#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3. Napisati funkciju koja implementira strcpy,
tj. funkciju koja kopira jedan string u drugi.
*/

// original solution for the exercise (copies until/and end of str: '\0')
char *impl_strcpy(char *s);

// my own, using array logic instead (copies until end of allocated memory)
char *another_impl_strcpy(char *s);

// both do pretty much the same thing

int main(void) {
  char str[] = "PMA";

  char *new_str = impl_strcpy(str);
  if (!new_str) return 1;

  char *another_new_str = impl_strcpy(str);
  if (!another_new_str) return 1;

  printf("impl_strcpy(): %s\n", new_str);
  printf("another_impl_strcpy(): %s\n", another_new_str);

  free(new_str);
  free(another_new_str);
  return 0;
}

char *impl_strcpy(char *s) {
  char *new_str = (char *)malloc((strlen(s) + 1) * sizeof(char));
  if (!new_str) return NULL;

  char *p = new_str;
  while (*s != '\0') {
    *p = *s;
    s++;
    p++;
  }
  *p = '\0';
  return new_str;
}

char *another_impl_strcpy(char *s) {
  char *new_str = (char *)malloc((strlen(s) + 1) * sizeof(char));
  if (!new_str) return NULL;

  for (int i = 0; i < strlen(s) + 1; i++)
    new_str[i] = s[i];

  return new_str;
}
