#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6. Napisati funkciju koja za string oblika "DD.MM.YYYY" računa koliko osoba
s tim datumom rođenja ima godina.
*/

int age(char today[], char birth[]);
void format_date_from_string(char date[], char *d_yr, char *d_mm, char *d_dd);

int main(void) {
  char today[] = "14.06.2027";
  char birth[] = "15.06.2005";
  printf("rodenja: %s\ndanas: %s\n", birth, today);
  printf("starost: %d\n", age(today, birth));
  return 0;
}

void format_date_from_string(char date[], char *d_yr, char *d_mm, char *d_dd) {
  strncpy(d_yr, strchr(strchr(date, '.') + 1, '.') + 1, 4);
  d_yr[4] = '\0';
  strncpy(d_mm, strchr(date, '.') + 1, 2);
  d_mm[2] = '\0';
  strncpy(d_dd, date, 2);
  d_dd[2] = '\0';
}

int age(char today[], char birth[]) {
  char d_yr[5], d_mm[3], d_dd[3];
  format_date_from_string(today, d_yr, d_mm, d_dd);

  char b_yr[5], b_mm[3], b_dd[3];
  format_date_from_string(birth, b_yr, b_mm, b_dd);

  int age = atoi(d_yr) - atoi(b_yr);
  if (atoi(d_mm) < atoi(b_mm) ||
      ((atoi(d_mm) == atoi(b_mm)) && (atoi(d_dd) < atoi(b_dd))))
    age--;

  return age;
}
