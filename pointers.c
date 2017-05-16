#include <stdio.h>

int main () {

  int var1;
  char var2[10];
  int var = 20;

  int *ip;
  int *ptr = NULL;

  ip = &var; /* store address of var in pointer variable */

  printf("Address of var variable: %x\n", &var );
  printf("Address of var1 variable: %x\n", &var1 );
  printf("Address of var2 variable: %x\n", &var2 );
  printf("The value/address of ptr is: %x\n", ptr );

  return 0;
}
