#include <stdio.h>

#define tokenpaster(n) printf("token" #n " = %d", token##n)

int main(void) {

  int token89 = 40;
  tokenpaster (89);
  return 0;
}
