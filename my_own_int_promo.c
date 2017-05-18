#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
#define m_test_type(e) \
  printf(_Generic((e), \
                   char*:  "type is char*\n", \
                   int:    "type is int\n",  \
                   default: "type is unknown\n", \
                ));
*/

int main(  ) {

  int a = 55;
  long b = 32.385;
  int mult;
  char p;

  mult = a * b;
  typeof(&p) d;
  printf("The value of a * b is %d\n", mult);
  return 0;
}
