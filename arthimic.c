#include <stdio.h>

main() {
	int a = 21;
	int b = 10;
	int c;
	
	c = a + b;
	printf("\nLine 1 - Value of c is %d\n", c);
	
	c = a - b;
	printf("\nLine 2 - Value of c is %d\n", c);
	
	c = a * b;
	printf("\nLine 3 - Value of c is %d\n", c);
	
	c = a / b;
	printf("\nLine 4 - Value of c is %d\n", c);
	
	c = a % b;
	printf("\nLine 5 - Value of c is %d\n", c);

	c = a++;
	printf("\nLine 6 - Value of c is %d\n", c);
	
	c = a--;
	printf("\nLine 7 - Value of c is %d\n", c);
}
