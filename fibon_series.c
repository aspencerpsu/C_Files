#include <stdio.h>
#include <stdlib.h>

int fibonacci(int i) {

  if (i == 0) {
    return 0;
  }

  if (i == 1) {
    return 1;
  }
  return fibonacci(i - 1) + fibonacci(i - 2);
}

int main (  ) {

  int uni_number, i;
  printf("Enter a value to perform the fibonacci series for...\n");
  scanf("%d", &uni_number);

  printf("The value for the number you inserted into the stream is \
          %d\n", fibonacci(uni_number));

  for (i = 0; i < uni_number; i++) {
    printf("%d\t\n", fibonacci(i));
  }

  return 0;
}
  
  
