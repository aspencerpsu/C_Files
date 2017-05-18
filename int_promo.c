/* Integer promotion is the process by which values of integer type "smaller" 
 * than int or unsigned int are converted either to int or unsigned int.
 * Consider below:
 */
#include <stdio.h>

main (  ) {

  int i = 17;
  char c = 'c';
  int sum;

  sum = i + c;
  printf("Value of sum : %d\n", sum);
}
