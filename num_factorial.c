#include <stdio.h>
#include <stdlib.h>

int factorial(unsigned int i) {

  if (i <= 1) {
    return 1;
  }

  return i * factorial(i - 1);
}

int main(  ) {
  int input;
  printf("place a value to get a factorial of\n");
  scanf("%d", &input);
  //int i = 15;
  printf("Factorial of %d is %d\n", input, factorial(input)); 
  return 0;
}
