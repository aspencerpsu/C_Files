#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(  ) {

  char name[100];
  char *description;

  strcpy(name, "Akeem Spencer");

  /*allocate memory, by call this time */

  description = calloc(200, sizeof(char));
  
  if (description == NULL) {

    fprintf(stderr, "Error- unable to allocate memory");

  }
  
  else {
   strcpy( description, "Akeem Spencer is a CTO from Westchester county");
  } 

  printf("Name = %s\n", name);

  printf("Description: %s\n", description );
  printf("Length of Description: %d\n", sizeof(description));
  printf("Length of Description (using strlen func): %d\n", strlen(description));

  return 0;
}
