#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int variable = 42;
	  printf("variable is an int and its value is %d\n", variable);
	  {
            double variable = -0.0000000000000000000000003;
	    printf("variable is a double and its value is %g\n", variable);
	  }
          {
	    FILE *variable = NULL;
	    printf("variable is a FILE * and its value is NULL :-)\n");
	  }
	    printf("variable is an int again and its value is, again, %d\n", variable);
	    return 0;
}	
