#include <stdio.h>
#include <stdlib.h>

typedef struct Books {
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
} Book;

int main (   ) {

  BOOK book;

  strcpy( book.title, "C Programming");
  strcpy( book.author, "Nuhu Ali");
  strcpy( book.subject, "C Programming Tutorial");

  book.book_id = 6495407;

  printf( "Book title : %s\n", book.title);
  printf( "Book author : %s\n", book.author);
  printf( "Book subject : %s\n", book.subject);
  printf( "Book book_id : %d\n", book.book_id);

  return 0;
}
