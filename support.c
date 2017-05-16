#include <stdio.h>

extern int count;

void write_extern(void) {
    while (count > 0) {
	    printf("count is %d\n", count);
	    count--;
	}
}
