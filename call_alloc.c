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

    // NOT FINISHED //

