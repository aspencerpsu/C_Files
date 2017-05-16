#include <stdio.h>
#include <stdlib.h>


char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

void main() {
  int x;
  /*
  for (x=0; x < sizeof(greeting); x++) {
    printf("The value for element %d of string greeting is %s", x, greeting[x]);
  }
  */
  printf("%s", greeting);
}
