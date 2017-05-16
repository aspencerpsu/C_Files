#include <stdio.h>
#include <limits.h>
#include <float.h>	

int main() {
	printf("Storage size for int: %d \n", sizeof(int));
	printf("Storage size for char: %d \n", sizeof(char));
	printf("Storage size for double: %d \n", sizeof(double));
	printf("Storage size for float: %d \n", sizeof(float));
	printf("Storage size for long: %d \n", sizeof(long));
	printf("Storage size for unsigned char is %d \n", sizeof(unsigned char));
	printf("Storage size for signed char is %d \n", sizeof(signed char));
	printf("Storage size for unsigned int  is %d \n", sizeof(unsigned int));
	printf("Storage size for unsigned long is %d \n", sizeof(unsigned long));
	printf("Storage size for unsigned short is %d \n", sizeof(unsigned short));
	printf("Storage size for short is %d \n \b", sizeof(short));


	printf("Minimum float positive value: %E\n", FLT_MIN);
	printf("Maximum float positive value: %E\n", FLT_MAX);

	printf("Precision value: %d \n", FLT_DIG);
	return 0;
}
