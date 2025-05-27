#include <stdio.h>
#include <stdlib.h>

/*
Četvrti zadatak
Definiraj strukturu knjiga sa sljedećim članovima:
naslov, autor, godina izdanja
Napisati funkciju koja vraća sve knjige starije od određene godine.
U glavnom programu učitaj podatke za n knjiga i učitaj godinu.
*/

/* NOTE: i do not know what "U glavnom programu učitaj podatke za n..." means,
 * so i have one type of solution where the user inputs the data in 2.c, and
 * in 4.c the data is already parsed and in the program (less of a hassle) */

#define BUF_SIZE 50

typedef struct {
  char title[BUF_SIZE];
  char author[BUF_SIZE];
  int year;
} Book;

Book *books_before_year(Book books[], int size, int year, int *old_books_size);
void print_books(Book books[], int size);

int main(void) {
  /* check notes on why i did it this way */
  Book books[4] = {{"I scream alot", "Bill Gates", 1992},
                   {"Nah, i'd win", "Jennifer Lawrence", 2000},
                   {"Cook book#3", "My grandma", 1728},
                   {"choices choices", "too many", 2012}};
  int books_size = sizeof(books) / sizeof(books[0]);

  int year;
  printf("Unesi godinu: ");
  scanf("%d", &year);

  int old_books_size;
  Book *older_books =
      books_before_year(books, books_size, year, &old_books_size);

  print_books(books, books_size);
  printf("\nbefore year %d:\n", year);
  print_books(older_books, old_books_size);

  free(older_books);
  return 0;
}

Book *books_before_year(Book books[], int size, int year, int *old_books_size) {
  Book *older_books = (Book *)malloc(sizeof(Book) * size);

  int older_ctr = 0;
  for (int i = 0; i < size; i++)
    if (books[i].year < year)
      older_books[older_ctr++] = books[i];

  Book *older_books_smaller = realloc(older_books, sizeof(Book) * older_ctr);
  *old_books_size = older_ctr;
  return older_books_smaller;
}

void print_books(Book books[], int size) {
  for (int i = 0; i < size; i++)
    printf("%s \t| %s \t| %d\n", books[i].title, books[i].author,
           books[i].year);
}
