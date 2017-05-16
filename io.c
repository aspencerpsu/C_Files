#include <stdio.h>
#include <string.h>

int main(  ) {

  int c;
  int i;
  char str[100];

  printf(" Enter a value :");
  scanf("%s %d", str, &i);
  /* c = getchar( ); */
  //str = fgets( str );

  printf("\nYou entered: %s %d; length of string is: %d\n\nSize of string is %d\n", str, i, strlen(str), sizeof(str));
  //fputs( str, 0 );
  // putchar( c );

  return 0;
}
