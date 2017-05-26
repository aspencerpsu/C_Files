#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* function definition to swap the values */

void swap(int *x, int *y) {
    
  int temp;
  temp = *x;  /* save the value at address x */
  *x = *y;   /* put y into x */
  *y = temp; /* put temp into y */
  return;
}

int main (  ) {
  int x, y;
  x = 8;
  y = 4;
  printf("\nx value is %d and y value is %d", x, y);
  swap(&x, &y);
  printf("\nx value is %d and y value is %d\n", x, y);
  return 0;
}
